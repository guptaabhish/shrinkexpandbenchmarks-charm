#CHARMC=~/charm_harsh/bin/charmc -module liveViz $(OPTS)
CHARMC=../../charm/bin/charmc -module liveViz $(OPTS)
#BOOST_ROOT = $(HOME)/boost_1_46_1
#BOOSTINC = $(BOOST_ROOT)/include
#BOOSTLIB = $(BOOST_ROOT)/lib

CXX=$(CHARMC)

OPTS ?= -O3
CXXFLAGS += -DAMR_REVISION=$(REVNUM) $(OPTS)

OBJS = QuadIndex.o Advection.o Main.o PowerLogger.o

all: advection

advection: $(OBJS)
	$(CHARMC)  -module liveViz $(CXXFLAGS) $(LDFLAGS) -language charm++ -o $@ $^ -module CommonLBs -module HybridLB -module RefineLB -module NeighborLB #-module DistDiffusionLB -module DistributedLB
	#$(CHARMC)  -module liveViz $(CXXFLAGS) $(LDFLAGS) -language charm++ -o $@ $^ -module CommonLBs -module HybridLB -balancer AmrLB -module NeighborLB
	#$(CHARMC)  -module liveViz $(CXXFLAGS) $(LDFLAGS) -language charm++ -o $@ $^ -module CommonLBs -module HybridLB -module DistributedLB -balancer AmrLB -module NeighborLB

advection.decl.h: advection.ci
	$(CHARMC)  advection.ci

Advection.o: advection.decl.h
	$(CHARMC) $(OPTS) $(CPPFLAGS) $(LDFLAGS) -o Advection.o Advection.C

QuadIndex.o: 
	$(CHARMC) $(OPTS) $(CPPFLAGS) $(LDFLAGS) -o QuadIndex.o QuadIndex.C

test: all
	./charmrun advetion +p4 10

clean:
	rm -f *.decl.h *.def.h conv-host *.o advection charmrun

bgtest: all
	./charmrun advection +p4 10 +x2 +y2 +z2

PowerLogger.o: PowerLogger.C PowerLog.decl.h PowerLog.def.h
	$(CHARMC) -c PowerLogger.C
