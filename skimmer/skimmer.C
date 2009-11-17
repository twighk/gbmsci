#include <iostream>
#include <TFile.h>
#include <TClonesArray.h>
#include <TTree.h>
#include <TLorentzVector.h>
#include "../eventviewer/eventviewer.h"

using namespace std;

int main( int argc, const char* argv[] )
{
	TFile* fin;
	if (argc != 2){
		fin = new TFile("../root/AH115elec.root");
	} else {
		fin = new TFile(argv[1]);
	}
	//TFile fin("../root/AH115elec.root");
	
	TTree *t = dynamic_cast<TTree*>(fin->Get("bbAHCutTree"));
	
	TFile* fout = new TFile("fout.root", "RECREATE");
	
	TTree *tree = new TTree("bbAHCutTree","bbAHCutTree");
	
	TLorentzVector lv_electron_out;
	
	tree->Branch("lv_electron",&lv_electron_out);
	
	
	
	
	eventviewer evtv(t);
	cout <<endl<< fin->GetName()<< endl;
	for(ULong64_t j = 0; j < evtv.totaleventnumber(); j++){
		evtv.GetEntry(j);
		lv_electron_out = *(dynamic_cast<TLorentzVector*> ((evtv.Getlv_electron())->At(0)));
		tree->Fill();
		
		
	}
	tree->Print();
	fout->Write();

	
	printf( "\nHello World\n\n" );
	return 0;
}
