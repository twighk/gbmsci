#ifndef __histostack__
#define __histostack__

#include <THStack.h>

#include "Histogram.h"


class Histostack {
private:
	static int count;//just keep track of the number of histostacks
	THStack* hs;
public:
	Histostack(const char * name){
		std::ostringstream str (std::ostringstream::out);
		str << "hs" << count++ ; 
		hs = new THStack(str.str().c_str(),name);
	}

};
int Histostack::count = 0;




#endif