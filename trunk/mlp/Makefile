BIN = mlp
BINSETUP = mlpsetup
BINOPENMP = mlpopenmp

GPP = g++ -Wall
ROOTLIB = `root-config --libs` -lMinuit -lXMLIO -lTreePlayer -lMLP
ROOTFLAG = `root-config --cflags` 
OPTI = #-fast -ffast-math -mfpmath=sse -funroll-loops #-funsafe-math-optimizations 

CFLAGS = ${ROOTFLAG} -fopenmp
LIBS = ${ROOTLIB} -fopenmp
FLAGS = 

#it's important to do the linking seperately from the compiling, other wise it doesn't work
all: 
mlp115: main115.o mlp115.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
mlp160: main160.o mlp160.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}

main160.o: main.cpp
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI} -D MAKE160

main115.o: main.cpp
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI} -D MAKE115


mlp115.o: mlp115.cxx mlp115.h 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI} 

mlp160.o: mlp115.cxx mlp160.h 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI} 

setup: mplsetup.o
	${GPP} $^ -o ${BINSETUP} ${FLAGS} ${LIBS} ${OPTI}
mplsetup.o: mplsetup.cpp 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

openmp: openmp.o
	${GPP} $^ -o ${BINOPENMP} ${FLAGS} ${LIBS} ${OPTI}
openmp.o: openmp.cpp 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}
	

clean: cleanish 
	rm -f ${BIN}
	rm -f ${SETUPBIN}
	rm -f mlp115*.h
	rm -f mlp115*.cxx
	rm -f mlp160*.h
	rm -f mlp160*.cxx
	
cleanish:
	rm -f *.o
	
run115: clean mlp115
	time ./${BIN} 115

run160: clean mlp160
	time ./${BIN}

runsetup115: clean setup
	time ./${BINSETUP} 115

runsetup160: clean setup
	time ./${BINSETUP} 160

runsetup115openmp: clean setup openmp
	time ./${BINOPENMP} 115
	
time: all
	time ./${BIN}


	
