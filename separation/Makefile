BIN = separation
GPP = g++ -Wall
ROOTLIB = `root-config --libs` -lMinuit -lXMLIO -lTreePlayer
ROOTFLAG = `root-config --cflags` 
OPTI = #-fast -ffast-math -mfpmath=sse -funroll-loops #-funsafe-math-optimizations 

CFLAGS = ${ROOTFLAG}
LIBS = ${ROOTLIB}
FLAGS = 



all: separation 
separation: main.o 
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
main.o: main.cpp separation.h
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

clean: cleanish 
	rm -f ${BIN}
	
cleanish:
	rm -f *.o
	
run: clean all
	./${BIN}
	
time: all
	time ./${BIN}


	
