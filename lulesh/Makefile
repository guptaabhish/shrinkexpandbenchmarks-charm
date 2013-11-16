#CHARMC=$(HOME)/fault/charm/net-linux-x86_64/bin/charmc -O3 $(OPTS) $(MOPTS)
#CHARMC=~/charm/bin/charmc $(OPTS) -O3
CHARMC=../../charm/bin/charmc -O3 $(OPTS) $(MOPTS)
CHARMC_SYNCFT=$(HOME)/fault/charm/net-linux-x86_64-syncft/bin/charmc -O3 $(OPTS) $(MOPTS)
CHARMC_MLOGFT=$(HOME)/charm/mpi-linux-x86_64-mlogft/bin/charmc $(OPTS) $(MOPTS)
CHARMC_CAUSALFT=$(HOME)/charm/mpi-linux-x86_64-causalft/bin/charmc $(OPTS) $(MOPTS)

EXEC=llCharm
EXEC_SYNCFT=llCharm-syncft
EXEC_MLOGFT=llCharm-mlogft
EXEC_CAUSALFT=llCharm-causalft

OUT := $(EXEC)
C_CI := $(wildcard *.ci)
C_SRCS := $(wildcard *.C)
C_OBJS := $(C_SRCS:.C=.o)
DECL := $(C_CI:.ci=.decl.h)
DEF := $(C_CI:.ci=.def.h)
DECL_DEF := $(DECL) $(DEF)

.PHONY: all projections loadbalance clean distclean

all: $(OUT)

syncft: CHARMC=$(CHARMC_SYNCFT)
syncft: CXXFLAGS += -DCMK_MEM_CHECKPOINT
syncft: EXEC=$(EXEC_SYNCFT)
syncft: all

mlogft: CHARMC=$(CHARMC_MLOGFT)
mlogft: CXXFLAGS += -DCMK_MESSAGE_LOGGING
mlogft: EXEC=$(EXEC_MLOGFT)
mlogft: all

causalft: CHARMC=$(CHARMC_CAUSALFT)
causalft: CXXFLAGS += -DCMK_MESSAGE_LOGGING
causalft: EXEC=$(EXEC_CAUSALFT)
causalft: all

$(OUT): $(C_SRCS) $(DECL_DEF)
	$(CHARMC) -O3 -language charm++ $(C_SRCS) -lm  -o $(EXEC)

projections: $(C_SRCS) $(DECL_DEF)
	$(CHARMC) -tracemode projections -tracemode summary -module CommonLBs -O3 -mavx -language charm++ $(C_SRCS) -lm -o $(OUT)

loadbalance: $(C_SRCS) $(DECL_DEF)
	$(CHARMC) -O3 -mavx -language charm++ -module CommonLBs $(C_SRCS) -lm -o $(OUT)

$(DECL_DEF): $(C_CI)
	$(CHARMC) -O3 -mavx -E $(CXXFLAGS) $(C_CI)

clean:
	rm -f *.decl.h *.def.h *.o charmrun $(OUT)

realclean:
	rm -f *.decl.h *.def.h *.o $(EXEC) $(EXEC_SYNCFT) $(EXEC_MLOGFT) $(EXEC_CAUSALFT) llCharm.prj charmrun 

distclean: clean
