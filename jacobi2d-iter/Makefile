CHARMC=../../charm/bin/charmc -O3 $(OPTS)

OBJS = jacobi2d.o PowerLogger.o

all: jacobi2d

jacobi2d: $(OBJS)
	$(CHARMC) -language charm++ -module CommonLBs -o jacobi2d $(OBJS)

jacobi2d.decl.h: jacobi2d.ci
	$(CHARMC)  jacobi2d.ci

clean:
	rm -f *.decl.h *.def.h conv-host *.o jacobi2d charmrun *~

jacobi2d.o: jacobi2d.C jacobi2d.decl.h
	$(CHARMC) -c jacobi2d.C

run: jacobi2d
	./charmrun +p12 ++local ./jacobi2d 12000 1000 10000 +setcpuaffinity +pemap 0-11

PowerLogger.o: PowerLogger.C PowerLog.decl.h PowerLog.def.h
	$(CHARMC) -c PowerLogger.C
