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
//	
//	cutelectronHcalIso electronHcalIso(cutlist, 2.0, 1.3);
//	
//	cuttauTracks tauTracks(cutlist);
//	
//	cuttauLeadTrk tauLeadTrk(cutlist);

	
//	cout << tauLeadTrack.cut(evtv) << tauLeadTrack.pos() << endl;

	for(ULong64_t i = 0; i < 2; i++){
		evtv.Show(i);
	}

	int sum = 0;
	matrix <Int_t> intermediate(1);

	for(ULong64_t i = 0; i < evtv.totaleventnumber(); i++){
		evtv.GetEntry(i);
		intermediate = electronEcalIso.cut(evtv) && electronTrackIso.cut(evtv);
		if (intermediate.onecheck()) {
			sum++;
		}
		
	}
	
	cout <<"Total Events: "<< evtv.totaleventnumber() << endl;
	cout <<"Sum: " << sum << endl;
	

	
	
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
