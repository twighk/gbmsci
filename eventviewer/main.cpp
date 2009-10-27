#include <iostream>

#include <TFile.h>

#include "eventviewer.h"

using namespace std;

int main(void) {
	TFile f("../root/AH115.root");
	
	f.pwd();
	
	TTree *t = dynamic_cast<TTree*>(f.Get("bbAHCutTree"));

	//t->Show();
	
	eventviewer j();	
	eventviewer vir(t);
	
	//cout << vir.electronCharge << endl;
	
	for(ULong64_t i = 0; i < 1000; i++){
		vir.GetEntry(i);
	}
	
	return 0;
	
}
