#include <iostream>

#include <TFile.h>

#include "eventviewer.h"



int main(void) {
	TFile f("../root/AH115.root");
	
	f.pwd();
	
	TTree *t = dynamic_cast<TTree*>(f.Get("bbAHCutTree"));

	//t->Show();
	
	eventviewer j();	
	eventviewer vir(t);
	vir.test();
	
	return 0;
	
}
