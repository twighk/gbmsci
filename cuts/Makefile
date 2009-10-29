BIN = cuttest
GPP = g++
ROOTLIB = `root-config --libs`
ROOTFLAG = `root-config --cflags`
OPTI = #-fast -ffast-math -mfpmath=sse -funroll-loops #-funsafe-math-optimizations 

CFLAGS = ${ROOTFLAG}
LIBS = ${ROOTLIB}
FLAGS = 

#it's important to do the linking seperately from the compiling, other wise it doesn't work
all: evttest 
evttest: main.o eventviewer.o cuts.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
main.o: main.cpp 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

eventviewer.o: ../eventviewer/eventviewer.c ../eventviewer/eventviewer.h 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

cuts.o: cuts.c cuts.h eventviewer.o ../eventviewer/eventviewer.h
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}


clean: cleanish 
	rm -f ${BIN}
	
cleanish:
	rm -f *.o
	
run: clean all
	./${BIN}
	
time: all
	time ./${BIN}


	
