BIN = skimmer
GPP = g++ -Wall
ROOTLIB = `root-config --libs` -lMinuit -lXMLIO -lTreePlayer
ROOTFLAG = `root-config --cflags` 
OPTI = #-fast -ffast-math -mfpmath=sse -funroll-loops #-funsafe-math-optimizations 

CFLAGS = ${ROOTFLAG}
LIBS = ${ROOTLIB}
FLAGS = 

#it's important to do the linking seperately from the compiling, other wise it doesn't work
all: 
skimmer115: main115.o skimmer.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
main115.o: main115.cpp skimmer.h
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

skimmer160: main160.o skimmer.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
main160.o: main160.cpp skimmer.h
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

skimmer.o: skimmer.cxx skimmer.h 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

clean: cleanish 
	rm -f ${BIN}
	
cleanish:
	rm -f *.o
	
run115: clean skimmer115
	./${BIN}

run160: clean skimmer160
	./${BIN}
	
time: all
	time ./${BIN}


	
