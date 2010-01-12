BIN = histtest
GPP = g++
ROOTLIB = `root-config --libs` -lTMVA -lMinuit -lXMLIO -lTreePlayer
ROOTFLAG = `root-config --cflags` 
OPTI = #-fast -ffast-math -mfpmath=sse -funroll-loops #-funsafe-math-optimizations 

CFLAGS = ${ROOTFLAG}
LIBS = ${ROOTLIB}
FLAGS = 

#it's important to do the linking seperately from the compiling, other wise it doesn't work
all: histtest 
histtest:main.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
main.o: main.cpp histogram.h histostack.h
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

clean: cleanish 
	rm -f ${BIN}
	
cleanish:
	rm -f *.o
#	rm -rf output
#	rm -rf weights
	
run: clean all
	./${BIN}
	
time: all
	time ./${BIN}


	
