BIN = tmvarect
GPP = g++
ROOTLIB = `root-config --libs`
ROOTFLAG = `root-config --cflags`
OPTI = #-fast -ffast-math -mfpmath=sse -funroll-loops #-funsafe-math-optimizations 

CFLAGS = ${ROOTFLAG}
LIBS = ${ROOTLIB}
FLAGS = 

#it's important to do the linking seperately from the compiling, other wise it doesn't work
all: tmvarect 
tmvarect: tmvarectcut.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
tmvarectcut.o: tmvarectcut.C 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

clean: cleanish 
	rm -f ${BIN}
	
cleanish:
	rm -f *.o
	
run: clean all
	./${BIN}
	
time: all
	time ./${BIN}


	
