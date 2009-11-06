#include <iostream>
#include <TFile.h>
#include <TApplication.h>
#include <TBrowser.h>
#include "../eventviewer/eventviewer.h"
#include "cuts.h"
#include "matrix.h"


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
	
	cuttauECALIso tauECALIso(cutlist);
	
	cuttauTrackIso tauTrackIso(cutlist);
	
	cuttauElectron tauElectron(cutlist);

	
//	cout << tauLeadTrack.cut(evtv) << tauLeadTrack.pos() << endl;

	vector <Int_t> output(cutlist.size(), 0);
	
	for(ULong64_t i = 0; i < 2; i++){
		evtv.Show(i);
	}

	int sum = 0;
	matrix <Int_t> intermediate(1);
	matrix <Int_t> intermediate2(1);

	for(ULong64_t i = 0; i < evtv.totaleventnumber(); i++){
		evtv.GetEntry(i);
		output[0] += cutlist[0]->cut(evtv).onecheck();		
		intermediate = cutlist[0]->cut(evtv);
		for (int i = 1; i != 3; i++) {
			intermediate = intermediate && cutlist[i]->cut(evtv);
			output[i] += (intermediate).onecheck();
		}
		
		if(intermediate.onecheck() == false){continue;}
		
		output[3] += cutlist[3]->cut(evtv).onecheck();
		intermediate2 = cutlist[3]->cut(evtv);
		
		for (int i = 4; i != cutlist.size(); i++) {
			intermediate2 = intermediate2 && cutlist[i]->cut(evtv);
			output[i] += (intermediate2).onecheck();
		}

		
	}
	
	cout <<"Total Events: "<< evtv.totaleventnumber() << endl;
	for (int i = 0; i < cutlist.size(); i++) {
		cout << cutlist[i]->name()<< ": " << output[i] << endl;
	}
	
	

	
	
	//matrix
//	matrix <Int_t> mat(3,3);
//	mat(1,2) = 92;
//	mat(2,1) = 1;
//
//	cout << mat;
	
	//vector
//	matrix <Int_t> mat2(3);
//	mat2(0) = 3;
//	mat2(1) = 2;
//	mat2(2) = 1;
//	cout << mat2;
//	
//	//scalar
//	matrix <Int_t> mat3(0);
//	mat3() = 3;
//	cout << mat3;
//	
//	//matrix float
//	matrix <Int_t> mat4(3,3);
//	mat4(2,1) = 1;
//	mat4(1,2) = sqrt(2);
//	cout << mat4;
//	
//	
//	matrix <Int_t> mat5(4,4);
//	mat5 = mat4 && mat;
//	cout << mat5;
//
//	cout << mat5.onecheck() << endl;; 
	
//	TBrowser b; // make a browser
//	theApp.Run(); // probably pauses it 
	
	return 0;
}

