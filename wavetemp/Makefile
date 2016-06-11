CHARMC=~/work/charm/bin/charmc $(OPTS) -O3
#CHARMC = $(HOME)/fault/charm/net-linux-x86_64-syncft/bin/charmc -O3 $(OPTS)
#CHARMC = $(HOME)/fault/charm/net-linux-x86_64/bin/charmc -O3 $(OPTS)
#CHARMC=/home/tarek/sarood1/Work/Power/charm/bin/charmc $(OPTS)

OBJS = wave2d.o 

all: wave2d

wave2d: $(OBJS)
	$(CHARMC) -language charm++ -o wave2d $(OBJS)
#	$(CHARMC) -language charm++ -o wave2d.refine -balancer TempAwareRefineLB $(OBJS)
#	$(CHARMC) -language charm++ -o wave2d.refine -balancer TempAwareCommLB $(OBJS)
#	$(CHARMC) -language charm++ -o wave2d.refine -balancer RefineLB $(OBJS)
	$(CHARMC) -language charm++ -o wave2d.greedy -module CommonLBs -lrt  $(OBJS)
#	$(CHARMC) -language charm++ -o wave2d.refine -balancer CommAwareRefineLB $(OBJS)
#	$(CHARMC) -language charm++ -o wave2d.refine -balancer TempAwareRefineLB -tracemode projections $(OBJS)

wave2d.decl.h: wave2d.ci
	$(CHARMC)  wave2d.ci

wave2d.def.h: wave2d.decl.h

clean:
	rm -f *.decl.h *.def.h conv-host *.o wave2d charmrun *~

wave2d.o: wave2d.C wave2d.decl.h wave2d.def.h
	$(CHARMC) -c wave2d.C

PowerLogger.o: PowerLogger.C PowerLog.decl.h PowerLog.def.h
	$(CHARMC) -c PowerLogger.C
