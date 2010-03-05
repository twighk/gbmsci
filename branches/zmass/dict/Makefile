BIN = dict
GPP = g++
ROOTLIB = `root-config --libs` -lTMVA -lMinuit -lXMLIO -lTreePlayer
ROOTFLAG = `root-config --cflags` 
OPTI = #-fast -ffast-math -mfpmath=sse -funroll-loops #-funsafe-math-optimizations 

CFLAGS = ${ROOTFLAG}
LIBS = ${ROOTLIB}
FLAGS = 

#it's important to do the linking seperately from the compiling, other wise it doesn't work
all: dict 
dict: main.o dict.o event.o
	${GPP} $^ -o ${BIN} ${FLAGS} ${LIBS} ${OPTI}
	
main.o: main.cpp dict.h
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

dict.o: dict.cxx dict.h 
	${GPP} -c $< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

event.o: ../event/event.cxx ../event/event.h 
	${GPP} -c ../event/$< -o $@ ${COMPFLAGS} ${CFLAGS} ${OPTI}

clean: cleanish 
	rm -f ${BIN}
	
cleanish:
	rm -f *.o
	
run: clean all
	./${BIN}
	
time: all
	time ./${BIN}


	
