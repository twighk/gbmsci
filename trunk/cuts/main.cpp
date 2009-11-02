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
	cutelectronEcalIso electronEcalIso(cutlist, 4.2, 3.4);
	
	cutelectronTrackIso electronTrackIso(cutlist, 2.2, 1.1);
	
	cutelectronHcalIso electronHcalIso(cutlist, 2.0, 1.3);
	
	cuttauTracks tauTracks(cutlist);
	
	cuttauLeadTrk tauLeadTrk(cutlist);

	
//	cout << tauLeadTrack.cut(evtv) << tauLeadTrack.pos() << endl;

	for(ULong64_t i = 0; i < 10; i++){
		evtv.Show(i);
	}

	int sum = 0;
	for(ULong64_t i = 0; i < evtv.totaleventnumber(); i++){
		evtv.GetEntry(i);
		if(electronEcalIso.cut(evtv)){
			if(electronTrackIso.cut(evtv)){
				if(electronHcalIso.cut(evtv)){
					if(tauTracks.cut(evtv)){
						sum += tauLeadTrk.cut(evtv);
					}
				}
			}
		}
	}
	
	cout <<"Total Events: "<< evtv.totaleventnumber() << endl;
	cout << sum << endl;
	

	
	
	

//	TBrowser b; // make a browser
//	theApp.Run(); // probably pauses it 
	
	return 0;
}

