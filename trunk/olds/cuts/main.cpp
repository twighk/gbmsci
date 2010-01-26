#include <iostream>
#include <TFile.h>
#include <TApplication.h>
#include <TBrowser.h>
#include "../eventviewer/eventviewer.h"
#include "cuts.h"
#include "matrix.h"
#include <TH1f.h>


using namespace std;

int main(int argc, char** argv) {
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	
	//TFile f("../root/AH115elec.root");
	//TFile f("../root/WplusJetselec.root");
	TFile f("../root/AH115elec.root");
	//TFile f("../root/AH115.root");
	
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
	
	cutoppositecharge oppositecharge(cutlist);
	
	cutdphielectau dphielectau(cutlist, 2.5);
	cutdphielecmet dphielecmet(cutlist, 0.6);
	
	cutmtelecmet mtelecmet(cutlist, 30);
	
//	cout << tauLeadTrack.cut(evtv) << tauLeadTrack.pos() << endl;

	vector <Int_t> output(cutlist.size(), 0);
	
//	for(ULong64_t i = 0; i < 2; i++){
//		evtv.Show(i);
//	}

	int sum = 0;
	matrix <Int_t> intermediate(1);
	matrix <Int_t> intermediate2(1);
	matrix <Int_t> intermediate3(1);
	TFile outfile("../root/output.root","RECREATE");
	TH1F hist("Mt Dist","Mt Dist", 100, 0, 100);


	cout <<endl<< f.GetName()<< endl;
	for(ULong64_t j = 0; j < evtv.totaleventnumber(); j++){
		evtv.GetEntry(j);
				
		output[0] += cutlist[0]->cut(evtv).onecheck();		
		intermediate = cutlist[0]->cut(evtv);
		for (int i = 1; i != 3; i++) {
			intermediate = intermediate && cutlist[i]->cut(evtv);
			output[i] += (intermediate).onecheck();
		}
		if(intermediate.onecheck() == false){continue;}
		
		output[3] += cutlist[3]->cut(evtv).onecheck();
		intermediate2 = cutlist[3]->cut(evtv);
		
		for (int i = 4; i != 8; i++) {
			intermediate2 = intermediate2 && cutlist[i]->cut(evtv);
			output[i] += (intermediate2).onecheck();
		}

		if(intermediate2.onecheck() == false){continue;}
		
		intermediate3 = ((intermediate * intermediate2) && cutlist[8]->cut(evtv));
		output[8] += intermediate3.onecheck();
		
		for (int i = 9; i != cutlist.size(); i++) {
			intermediate3 = intermediate3 && cutlist[i]->cut(evtv);
			output[i] += (intermediate3).onecheck();
//			if (i == 10 && intermediate3.onecheck() == 1){
//				//evtv.Show(j);
//				for (int a = 0; a < intermediate3.Getx(); a++) {
//					for (int b = 0; b < intermediate3.Gety(); b++){
//					if (intermediate3(a, b) == 1) {
//						TLorentzVector* elecvec = dynamic_cast <TLorentzVector*> ((*evtv.Getlv_electron()).At(a));
//						TLorentzVector* metvec  = dynamic_cast <TLorentzVector*> ((*evtv.Getlv_met()).At(0));
//						TLorentzVector tempvec = *elecvec + *metvec;
//						Double_t mt = tempvec.Mt();
//				   		hist.Fill(mt);
//						
//					}
//					
//					}
//				}
//			}

		}
		
		
		
	}
	
	outfile.cd();
	hist.Write();
	
	cout <<"Total Events: "<< evtv.totaleventnumber() << endl;
	for (int i = 0; i < cutlist.size(); i++) {
		cout << cutlist[i]->name()<< ": " << output[i] << endl;
	}
	

//	cout << float2int(-0.9) << endl;
//	cout << float2int(-1.1) << endl;
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
	
	
//	matrix <Int_t> mat6(6);
//	mat6(0) = 1;
//	mat6(1) = 1;
//	mat6(2) = 1;
//	mat6(3) = 0;
//	mat6(4) = 0;
//	mat6(5) = 0;
//	cout << mat6;
	
//	matrix <Int_t> mat7(3);
//	mat7(0) = 0;
//	mat7(1) = 1;
//	mat7(2) = 0;
//	cout << mat7;
	
	
//	cout << mat7 * mat6;
	
	
	
	
//	TBrowser b; // make a browser
//	theApp.Run(); // probably pauses it 
	
	return 0;
}

