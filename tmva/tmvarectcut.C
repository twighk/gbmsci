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

#include "TMVAGui.C"
#include <TApplication.h>

#if not defined(__CINT__) || defined(__MAKECINT__)
// needs to be included when makecint runs (ACLIC)
#include <TMVA/Factory.h>
#include <TMVA/Tools.h>
#endif

using namespace std;

const double evtfrac = 0.01;

int tmvarectcut(){
	char * output = "output";
	string tmp = "mkdir ";
	tmp += output;
	system(tmp.c_str()); // create output directory
	
	vector <string> trees;
	
	trees.push_back("../root/AH115_skim.root");
	trees.push_back("../root/AH115bb_skim.root");
	trees.push_back("../root/AH160_skim.root");
	trees.push_back("../root/AH160bb_skim.root");
	trees.push_back("../root/WplusJets_skim.root");
	trees.push_back("../root/Zbb_skim.root");
	trees.push_back("../root/Zcc_skim.root");
	trees.push_back("../root/ZplusJets_skim.root");
	
	
	
	vector <TFile*> f;
	vector <TTree*> t;
	for (Int_t i = 0; i!= trees.size(); i++) {
		f.push_back(new TFile(trees[i].c_str()));
		t.push_back(dynamic_cast<TTree*>((f[i])->Get("bbAHCutTree")));
	}


	
	for (Int_t i = 0; i != t.size() ; i++) {
		cerr << "Number -" << i + 1 << t.size() << endl;
		
		string fname = f[i]->GetName();
		fname = fname.substr((1 + fname.find_last_of("/\\")), fname.length() - (1 + fname.find_last_of("/\\")));
		cout << fname << endl; // file name
		
		tmp = output;tmp += "/TMVA_";tmp += fname; // TMVA file out
		cout << tmp << endl; 
		TFile* outfile = TFile::Open(tmp.c_str(), "RECREATE");
		tmp += ".txt";
		freopen (tmp.c_str(),"w",stdout); // redirect standart output

		
		
		cout << endl << endl << "RUN" ;///******************* number its doing
		
		
		TMVA::Factory *factory  = new TMVA::Factory(fname.c_str(), outfile, "!V:!Silent:Color:DrawProgressBar"); //:Transformations=I;D;P;G,D");
		
		// col1 : no warings /errors
		// col2 : just 0:0 warning
		
		factory->AddVariable("lv_met_Et",'F');			// 0 1
		factory->AddVariable("lv_electron_Et", 'F');	// 0 1
		factory->AddVariable("lv_tau_Et", 'F');			// 0 1
		factory->AddVariable("dphielectau", 'F');		// 0 1
		factory->AddVariable("dphielecmet", 'F');		// 0 1
		factory->AddVariable("mtelecmet", 'F');			// 0 1
		
		factory->AddVariable("electronEcalIso", 'F');	// 1 1
		factory->AddVariable("electronTrackIso", 'F');	// 1 1
//		factory->AddVariable("electronHcalIso", 'F');	// 0 0
		factory->AddVariable("tauTrack", 'I');			// 1 1
		factory->AddVariable("tauLeadTrk", 'I');		// 1 0
		factory->AddVariable("tauECALIso", 'I');		// 0 0
//		factory->AddVariable("tauTrackIso", 'I');		// 0 0
		factory->AddVariable("tauElectron", 'I');		// 0 0
//		factory->AddVariable("electronCharge", 'I');	// 0 0 //matrix diag error is linked to et
		factory->AddVariable("tauCharge", 'I');			// 1 1

		Int_t signum = 0;
		Int_t bkgnum = 0;
		
		for (Int_t j = 0; j != t.size() ; j++) {
			if( i==j) {
				factory->AddSignalTree(t[j], 1.0);
				signum = t[j]->GetEntriesFast();
			}else {
				factory->AddBackgroundTree(t[j], 1.0);
				bkgnum += t[j]->GetEntriesFast();
			}

		}
		
		signum = (double) signum * evtfrac;
		bkgnum = (double) bkgnum * evtfrac;
		
		stringstream ptattstr;
		ptattstr << "nTrain_Signal=";
		ptattstr << signum;
		ptattstr << ":nTrain_Background=";
		ptattstr << bkgnum;
		ptattstr << ":SplitMode=Random:NormMode=NumEvents:!V";

		
		factory->PrepareTrainingAndTestTree("", ptattstr.str().c_str() );
		factory->BookMethod( TMVA::Types::kMLP, "MLP", "!H:!V:NeuronType=tanh:VarTransform=N:NCycles=600:HiddenLayers=N+5:TestRate=5:CreateMVAPdfs" );

		
		factory->TrainAllMethods();
		factory->TestAllMethods();
		factory->EvaluateAllMethods();
		outfile->Close();

		delete factory;
		
		tmp = "mv weights ";
		tmp += output; tmp += "/"; tmp += fname;
		cout << tmp << endl << endl << endl;
		
		
		fclose (stdout);
		TMVAGui("output/TMVA_AH115_skim.root");
	}
	return 0;
}


int main(int argc, char** argv){

	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	TMVAGui("output/ZplusJets_skim.root");
	tmvarectcut();
	cerr << "Hanging for X11" << endl;
	theApp.Run(); // probably pauses it 
	return 0;
}