#include <iostream>
#include <string>
#include <TFile.h>
#include <TClonesArray.h>
#include <TTree.h>
#include <TLorentzVector.h>
#include <vector>
#include <stdio.h>
#include <TDirectory.h>
#include "../eventviewer/eventviewer.h"
#include "../cuts/float2int.h"

using namespace std;


int main( int argc, const char* argv[] )
{
//	TFile* fin;
//	if (argc != 2){
//		fin = new TFile("../root/AH115.root");
//	} else {
//		fin = new TFile(argv[1]);
//	}
	
	vector <TFile*> infile;
	vector <TFile*> outfile;
	
	infile.push_back(new TFile("../root/AH115bb.root"));
	infile.push_back(new TFile("../root/Zbb.root"));
			
	
	Int_t number_of_electrons = 1;
	Int_t number_of_taus = 1;
	
	
	cout << "Input ROOT Files" << endl;
	for (Int_t i = 0; i < infile.size(); i++) {
		
		//Make appropriately named skimmed trees - not very elegant method - could improve?
		cout << "\t" << infile[i]->GetName() << endl;
		string instr = infile[i]->GetName();
		instr.erase(instr.length() - 5, 5);
		instr += "_skim.root";
		outfile.push_back(new TFile(instr.c_str(), "RECREATE"));
						  
		TLorentzVector lv_electron_out;
		TLorentzVector lv_tau_out;
		TLorentzVector lv_met_out;
//		TClonesArray lv_electron_out("TLorentzVector",1);
//		TClonesArray lv_tau_out("TLorentzVector",1);
//		TClonesArray lv_met_out("TLorentzVector",1);
		Float_t electronEcalIso_out; 
		Float_t electronTrackIso_out;
		Float_t electronHcalIso_out;
		Int_t tauTracks_out;
		Int_t tauLeadTrk_out;
		Int_t tauECALIso_out;
		Int_t tauTrackIso_out;
		Int_t tauElectron_out;
		Int_t electronCharge_out;
		Int_t tauCharge_out;
		
		
		
		TTree *intree = dynamic_cast<TTree*>(infile[i]->Get("bbAHCutTree"));
		TTree *outtree = new TTree("bbAHCutTree","bbAHCutTree");
		outtree->Branch("lv_electron",&lv_electron_out);
		outtree->Branch("lv_tau",&lv_tau_out);
		outtree->Branch("lv_met",&lv_met_out);
		outtree->Branch("electronEcalIso", &electronEcalIso_out);
		outtree->Branch("electronTrackIso", &electronTrackIso_out);
		outtree->Branch("electronHcalIso", &electronHcalIso_out);
		outtree->Branch("tauTrack", &tauTracks_out);
		outtree->Branch("tauLeadTrk", &tauLeadTrk_out);
		outtree->Branch("tauECALIso", &tauECALIso_out);
		outtree->Branch("tauTrackIso", &tauTrackIso_out);
		outtree->Branch("tauElectron", &tauElectron_out);
		outtree->Branch("electronCharge", &electronCharge_out);
		outtree->Branch("tauCharge", &tauCharge_out);
		
		eventviewer evtv(intree);
		
		for(ULong64_t j = 0; j < evtv.totaleventnumber(); j++){
			evtv.GetEntry(j);
			if (evtv.Getlv_electron()->GetEntriesFast() == 1 && evtv.Getlv_tau()->GetEntriesFast() == 1) {
				lv_electron_out = *(dynamic_cast<TLorentzVector*> ((evtv.Getlv_electron())->At(0)));
				lv_tau_out		= *(dynamic_cast<TLorentzVector*> ((evtv.Getlv_tau())->At(0)));
				lv_met_out		= *(dynamic_cast<TLorentzVector*> ((evtv.Getlv_met())->At(0)));
//				lv_electron_out[0] = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_electron())->At(0)));
//				lv_tau_out[0] = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_tau())->At(0)));
//				lv_met_out[0] = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_met())->At(0)));
				electronEcalIso_out = evtv.GetelectronEcalIso()->operator[](0);
				electronTrackIso_out = evtv.GetelectronTrackIso()->operator[](0);
				electronHcalIso_out = evtv.GetelectronHcalIso()->operator[](0);
				tauTracks_out = float2int(evtv.GettauTracks()->operator[](0));
				tauLeadTrk_out = float2int(evtv.GettauLeadTrk()->operator[](0));
				tauECALIso_out = float2int(evtv.GettauECALIso()->operator[](0));
				tauTrackIso_out = float2int(evtv.GettauTrackIso()->operator[](0));
				tauElectron_out = float2int(evtv.GettauElectron()->operator[](0));
				electronCharge_out = float2int(evtv.GetelectronCharge()->operator[](0));
				tauCharge_out = float2int(evtv.GettauCharge()->operator[](0));
				
				outtree->Fill();
			
			}
			
		}
		
		outfile[i]->Write();
					
	}

	
//	TFile fin("../root/AH115elec.root");
//	
//	;
//	
//	TFile* fout = new TFile("fout.root", "RECREATE");
//	
//	TTree *tree = new TTree("bbAHCutTree","bbAHCutTree");
//	
//	TLorentzVector lv_electron_out;
//	
//	tree->Branch("lv_electron",&lv_electron_out);
//	
//	
//	
//	
//	eventviewer evtv(t);
//	cout <<endl<< fin->GetName()<< endl;
//	for(ULong64_t j = 0; j < evtv.totaleventnumber(); j++){
//		evtv.GetEntry(j);
//		//evtv.Show();
//		//lv_electron_out = *(dynamic_cast<TLorentzVector*> ((evtv.Getlv_electron())->At(0)));
//		//tree->Fill();
//		
//		
//	}
//	tree->Print();
//	fout->Write();

		return 0;
}

