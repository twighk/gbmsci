#ifndef __eventviewer__
#define __eventviewer__

#include <TTree.h>

class eventviewer{
private:
    eventviewer();
    TTree *tree;


public:
    eventviewer(TTree *treein){tree = treein;}
    

};



#endif