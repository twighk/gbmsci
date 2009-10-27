#include <iostream>

#include <TFile.h>

#include "eventviewer.h"



int main(void) {
	TFile f("/Users/twig/gbmsci/root/AH115.root");
	
	f.pwd();
	
	TTree *t = dynamic_cast<TTree*>(f.Get("bbAHCutTree"));

	//t->Show();
	
	eventviewer vir(t);
	vir.test();
	
	return 0;
	
}