#ifndef __brptr__
#define __brptr__

#include <string>

struct brptr{
	void * pointer;
	std::string classname;
	
	brptr(){
		pointer = NULL;	
	}
};

#endif
