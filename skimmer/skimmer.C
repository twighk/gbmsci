#include <iostream>
#include <TFile.h>
#include <TClonesArray.h>
#include <TTree.h>
#include <TLorentzVector.h>
#include <vector>
#include <stdio.h>
#include <TDirectory.h>
#include "../eventviewer/eventviewer.h"

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
		char test[] = "";
		strncpy(test, infile[i]->GetName(), strlen(infile[i]->GetName()) - 5);
		test[strlen(infile[i]->GetName()) - 5] = '\0'; //terminate string here
		strcat(test, "_skim.root");
		outfile.push_back(new TFile(test, "RECREATE"));
						  
		
		TLorentzVector lv_electron_out;
		TLorentzVector lv_tau_out;
		
		
		TTree *intree = dynamic_cast<TTree*>(infile[i]->Get("bbAHCutTree"));
		TTree *outtree = new TTree("bbAHCutTree","bbAHCutTree");
		outtree->Branch("lv_electron",&lv_electron_out);
		outtree->Branch("lv_tau",&lv_tau_out);

		
		eventviewer evtv(intree);
		
		for(ULong64_t j = 0; j < evtv.totaleventnumber(); j++){
			evtv.GetEntry(j);
			if (evtv.Getlv_electron()->GetEntriesFast() == 1 && evtv.Getlv_tau()->GetEntriesFast() == 1) {
				lv_electron_out = *(dynamic_cast<TLorentzVector*> ((evtv.Getlv_electron())->At(0)));
				lv_tau_out		= *(dynamic_cast<TLorentzVector*> ((evtv.Getlv_tau())->At(0)));
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

