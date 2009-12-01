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
	vector <TFile*> infile;
	vector <TFile*> outfile;
	
	infile.push_back(new TFile("../root/AH115.root"));
	infile.push_back(new TFile("../root/AH115bb.root"));
	infile.push_back(new TFile("../root/AH160.root"));
	infile.push_back(new TFile("../root/AH160bb.root"));
//	infile.push_back(new TFile("../root/TTplusJets.root")); -something strange with this
	infile.push_back(new TFile("../root/WplusJets.root"));
	infile.push_back(new TFile("../root/Zbb.root"));
	infile.push_back(new TFile("../root/Zcc.root"));
	infile.push_back(new TFile("../root/ZplusJets.root"));
			
	
	Int_t number_of_electrons = 1;
	Int_t number_of_taus = 1;
	
	
	cout << "Input ROOT Files" << endl;
	for (Int_t i = 0; i < infile.size(); i++) {
		
		cout << "\t" << infile[i]->GetName() << '\t';
		string instr = infile[i]->GetName();
		instr.erase(instr.length() - 5, 5);
			instr += "_";
			if (argc > 1){
				instr += argv[1];
			} else {
				instr += "skim";
			}
			instr += ".root";
		outfile.push_back(new TFile(instr.c_str(), "RECREATE"));
						  

		Float_t lv_electron_Et_out;
		Float_t lv_tau_Et_out;
		Float_t lv_met_Et_out;
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
		Float_t dphielectau_out;
		Float_t dphielecmet_out;
		Float_t mtelecmet_out;
		Float_t jetBTagTrackCountHighEff_out;
		
		
		
		TTree *intree = dynamic_cast<TTree*>(infile[i]->Get("bbAHCutTree"));
		TTree *outtree = new TTree("bbAHCutTree","bbAHCutTree");
		outtree->Branch("lv_electron_Et",&lv_electron_Et_out);
		outtree->Branch("lv_tau_Et",&lv_tau_Et_out);
		outtree->Branch("lv_met_Et",&lv_met_Et_out);
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
		outtree->Branch("dphielectau", &dphielectau_out);
		outtree->Branch("dphielecmet", &dphielecmet_out);
		outtree->Branch("mtelecmet", &mtelecmet_out);
		outtree->Branch("jetBTagTrackCountHighEff", &jetBTagTrackCountHighEff_out);


		eventviewer evtv(intree);
		
		Int_t sum = 0;
		Int_t elec = 0;
		
		for(ULong64_t j = 0; j < evtv.totaleventnumber(); j++){
			evtv.GetEntry(j);
			if (evtv.Getlv_electron()->GetEntriesFast() != 1) elec++;
			if (evtv.Getlv_electron()->GetEntriesFast() == 1 && evtv.Getlv_tau()->GetEntriesFast() == 1) {sum++;

				lv_electron_Et_out = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_electron())->At(0)))->Et();
				lv_tau_Et_out = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_tau())->At(0)))->Et();
				lv_met_Et_out = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_met())->At(0)))->Et();
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
				jetBTagTrackCountHighEff_out = evtv.GetjetBTagTrackCountHighEff()->operator[](0);
				
				//Calculate electron tau delta phi
				TLorentzVector* elecvec = dynamic_cast <TLorentzVector*> ((*evtv.Getlv_electron()).At(0));
				TLorentzVector* tauvec  = dynamic_cast <TLorentzVector*> ((*evtv.Getlv_tau()).At(0));
				TLorentzVector* metvec  = dynamic_cast <TLorentzVector*> ((*evtv.Getlv_met()).At(0));
				
				TVector3 electmp(elecvec->Px(), elecvec->Py(), 0), 
				tautmp(tauvec->Px(), tauvec->Py(), 0),
				mettmp(metvec->Px(), metvec->Py(), 0);

				dphielectau_out = electmp.Angle(tautmp);
				dphielecmet_out = electmp.Angle(mettmp);
				mtelecmet_out = sqrt(  pow(elecvec->Et() + sqrt(metvec->Px() * metvec->Px() + metvec->Py() * metvec->Py()),2)
								 - pow(elecvec->Px() + metvec->Px(),2) 
								 - pow(elecvec->Py() + metvec->Py(),2) 
								 );
				outtree->Fill();
			
			}
			
		}
		// skimmed / with electrons / total
		cout << sum << '/' << elec << '/'<< evtv.totaleventnumber() << '\t' << (double)sum / (double)elec *100 << "%"<< endl;
		
		outfile[i]->Write();
		delete outtree;
					
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

