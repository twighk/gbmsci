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
	
	eventviewer evtv(t);
	
	
	
	cutvec cutlist;
	cuttauLeadTrack tauLeadTrack1(cutlist, true);
	cuttauLeadTrack tauLeadTrack2(cutlist, false);
	cuttauLeadTrack tauLeadTrack3(cutlist, true);

	
	cout << tauLeadTrack1.cut(evtv) << tauLeadTrack1.pos() << endl;
	cout << tauLeadTrack2.cut(evtv) << tauLeadTrack2.pos() << endl;
	cout << tauLeadTrack3.cut(evtv) << tauLeadTrack3.pos() << endl;

	

	for(ULong64_t i = 0; i < evtv.totaleventnumber(); i++){
		
	}
	
	

//	TBrowser b; // make a browser
//	theApp.Run(); // probably pauses it 
	
	return 0;
}


