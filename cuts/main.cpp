#include <iostream>
#include <TFile.h>
#include <TApplication.h>
#include <TBrowser.h>
#include "../eventviewer/eventviewer.h"
#include "cuts.h"

using namespace std;

int main(int argc, char** argv) {
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	
	TFile f("../root/AH115elec.root");
	TTree *t = dynamic_cast<TTree*>(f.Get("bbAHCutTree"));
	
	eventviewer tester(t);
	
	cout << tester.totaleventnumber() << endl;
	
	
	cuts cutter;
	
	int sum = 0;
	Float_t floatsum = 0.;
	
	vector <Int_t (cuts::*)(eventviewer&)> cutlist; // make a vector of methods
	cutlist.push_back(&cuts::IsoEle15Trigger); // add cuts::IsoEle15Trigger to the list
	
	
	
	for(ULong64_t i = 0; i < tester.totaleventnumber(); i++){
		tester.GetEntry(i);
//		if (cutter.IsoEle15Trigger(tester) == 1) {
//			sum++;
//		}
		floatsum+= *(tester.GetnumElectrons());
	}
	
	cout << "Sum: " << floatsum << endl;
	TBrowser b; // make a browser
	theApp.Run(); // probably pauses it 
	
	return 0;
}


