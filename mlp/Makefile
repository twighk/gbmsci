BIN = mlp
BINSETUP = mlpsetup
GPP = g++ -Wall
ROOTLIB = `root-config --libs` -lTMVA -lMinuit -lXMLIO -lTreePlayer -lMLP
ROOTFLAG = `root-config --cflags` 
OPTI = #-fast -ffast-math -mfpmath=sse -funroll-loops #-funsafe-math-optimizations 

CFLAGS = ${ROOTFLAG}
LIBS = ${ROOTLIB}
FLAGS = 

#it's important to do the linking seperately from the compiling, other wise it doesn't work
all: 
mlp: main.o mlp.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
main.o: main.cpp
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

mlp.o: mlp.cxx mlp.h 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

setup: mplsetup.o
	${GPP} $^ -o ${BINSETUP} ${FLAGS} ${LIBS} ${OPTI}
mplsetup.o: mplsetup.cpp
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}
	

clean: cleanish 
	rm -f ${BIN}
	rm -f ${SETUPBIN}
	
cleanish:
	rm -f *.o
	
run: clean mlp
	time ./${BIN}

runsetup: setup
	time ./${BINSETUP}
	
time: all
	time ./${BIN}


	
