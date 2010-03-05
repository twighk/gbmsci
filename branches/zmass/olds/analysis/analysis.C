#include <cstdlib>
#include <cstdio>
#include <iostream> 
//#include <map>
#include <string>
#include <sstream>

// idenify at a later point in time
#include "TChain.h" // magic includes
#include "TFile.h" // magic includes
#include "TTree.h" // magic includes
#include "TString.h" // magic includes
#include "TObjString.h" // magic includes
#include "TSystem.h" // magic includes
#include "TROOT.h" // magic includes
#include "TPluginManager.h" // magic includes


#include "../tmva/TMVAGui.C"
#include <TApplication.h>
#include <TMVA/Reader.h>

#include "../eventviewer/eventviewer.h"
#include "../cuts/float2int.h"

#if not defined(__CINT__) || defined(__MAKECINT__)
// needs to be included when makecint runs (ACLIC)
#include <TMVA/Factory.h>
#include <TMVA/Tools.h>
#endif


using namespace std;

int main(){
	
	vector <TFile*> infile;
	
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
	
	Float_t lv_electron_Et;
	Float_t lv_tau_Et;
	Float_t lv_met_Et;
	Float_t electronEcalIso; 
	Float_t electronTrackIso;
	Float_t electronHcalIso;
	Int_t tauTrack;
	Int_t tauLeadTrk;
	Int_t tauECALIso;
	Int_t tauTrackIso;
	Int_t tauElectron;
	Int_t electronCharge;
	Int_t tauCharge;
	Float_t dphielectau;
	Float_t dphielecmet;
	Float_t mtelecmet;
	Float_t jetBTagTrackCountHighEff;
	
	vector <string> fmethod;
	vector <TMVA::Reader*> reader;
	for (int i = 0; i != 8/*infile.size()*/; i++) {
		reader.push_back(new TMVA::Reader(""));
	
		reader[i]->AddVariable("lv_met_Et",&lv_met_Et);
		reader[i]->AddVariable("lv_electron_Et",&lv_electron_Et);
		reader[i]->AddVariable("lv_tau_Et",&lv_tau_Et);
		reader[i]->AddVariable("dphielectau",&dphielectau);
		reader[i]->AddVariable("dphielecmet",&dphielecmet);
		reader[i]->AddVariable("mtelecmet",&mtelecmet);
		reader[i]->AddVariable("electronEcalIso",&electronEcalIso);
		reader[i]->AddVariable("electronTrackIso",&electronTrackIso);
		//reader[i]->AddVariable("electronHcalIso",&electronHcalIso);
		reader[i]->AddVariable("tauTrack",&tauTrack);
		reader[i]->AddVariable("tauLeadTrk",&tauLeadTrk);
		reader[i]->AddVariable("tauECALIso",&tauECALIso);
		//reader[i]->AddVariable("tauTrackIso",&tauTrackIso);
		reader[i]->AddVariable("tauElectron",&tauElectron);
		//reader[i]->AddVariable("electronCharge",&electronCharge);
		reader[i]->AddVariable("tauCharge",&tauCharge);
		
		
		string fmeth= infile[i]->GetName();
		fmeth = fmeth.substr((1 + fmeth.find_last_of("/\\")), fmeth.length() - (1 + fmeth.find_last_of("/\\")));
		fmeth = fmeth.substr(0,fmeth.find_last_of("."));
		string fname = "../tmva/weights/";
		fname += fmeth;
		fname += "_skim.root_MLP.weights.xml";
		cout << fmeth << endl; // file name
		
		fmethod.push_back(fmeth);
		reader[i]->BookMVA(fmeth.c_str(), fname.c_str());
	}

	for (Int_t i = 0; i < 1/*infile.size()*/; i++) {
		TTree *intree = dynamic_cast<TTree*>(infile[i]->Get("bbAHCutTree"));
		eventviewer evtv(intree);
		
		for(ULong64_t j = 0; j < 100/* evtv.totaleventnumber()*/; j++){
			evtv.GetEntry(j);
			if (evtv.Getlv_electron()->GetEntriesFast() == 1 && evtv.Getlv_tau()->GetEntriesFast() == 1) {
			evtv.Show();
				
				lv_electron_Et = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_electron())->At(0)))->Et();
				lv_tau_Et = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_tau())->At(0)))->Et();
				lv_met_Et = (dynamic_cast<TLorentzVector*> ((evtv.Getlv_met())->At(0)))->Et();
				electronEcalIso = evtv.GetelectronEcalIso()->operator[](0);
				electronTrackIso = evtv.GetelectronTrackIso()->operator[](0);
				electronHcalIso = evtv.GetelectronHcalIso()->operator[](0);
				tauTrack = float2int(evtv.GettauTracks()->operator[](0));
				tauLeadTrk = float2int(evtv.GettauLeadTrk()->operator[](0));
				tauECALIso = float2int(evtv.GettauECALIso()->operator[](0));
				tauTrackIso = float2int(evtv.GettauTrackIso()->operator[](0));
				tauElectron = float2int(evtv.GettauElectron()->operator[](0));
				electronCharge = float2int(evtv.GetelectronCharge()->operator[](0));
				tauCharge = float2int(evtv.GettauCharge()->operator[](0));
				jetBTagTrackCountHighEff = evtv.GetjetBTagTrackCountHighEff()->operator[](0);
				
				//Calculate electron tau delta phi
				TLorentzVector* elecvec = dynamic_cast <TLorentzVector*> ((*evtv.Getlv_electron()).At(0));
				TLorentzVector* tauvec  = dynamic_cast <TLorentzVector*> ((*evtv.Getlv_tau()).At(0));
				TLorentzVector* metvec  = dynamic_cast <TLorentzVector*> ((*evtv.Getlv_met()).At(0));
				
				TVector3 electmp(elecvec->Px(), elecvec->Py(), 0), 
				tautmp(tauvec->Px(), tauvec->Py(), 0),
				mettmp(metvec->Px(), metvec->Py(), 0);
				
				dphielectau = electmp.Angle(tautmp);
				dphielecmet = electmp.Angle(mettmp);
				mtelecmet = sqrt(  pow(elecvec->Et() + sqrt(metvec->Px() * metvec->Px() + metvec->Py() * metvec->Py()),2)
									 - pow(elecvec->Px() + metvec->Px(),2) 
									 - pow(elecvec->Py() + metvec->Py(),2) 
									 );
				
				double sum = 0;
				for (int k = 0; k != reader.size(); k++) {
					//Calculate probability
					const double f = 1.0/8.0;// 0.5;
					double prob = reader[k]->GetProba(fmethod[k], f);
					double X = prob * (1-f)/(f*(1-prob));
					double actualprob = X/(X+1);
					sum += prob;
					//cout << fmethod[k] << ": "<< actualprob << endl;
					cout << fmethod[k] << ": "<< prob << endl;
				}
				cout << "Sum: " << sum << endl;
			}
		}
	}
	return 0;
}