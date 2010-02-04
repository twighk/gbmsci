#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>
#include <TROOT.h>
#include <TSystem.h>
#include <TObjArray.h>
#include <TMultiLayerPerceptron.h>
#include <TMLPAnalyzer.h>
#include <TApplication.h>
#include <TCanvas.h>

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct ChannelMeta {
	Int_t begin;
	Int_t end;
};

void mlpsetup(TTree *tree, Int_t ntrain=101){
	cout << "ntrain: " << ntrain << endl;
	if (!gROOT->GetClass("TMultiLayerPerceptron")) {
		gSystem->Load("libMLP");
	}

	vector <string> branchnames; //List of branch names (but not types)
	vector <string> types; // List of type names (type1, type2, etc.)
	
	TObjArray* lob = tree->GetListOfBranches();
	for (Int_t i = 0; i < lob->GetEntriesFast(); ++i) {
		TBranch * branch = (TBranch *)lob->At(i);
		string bname = string(branch -> GetName());
		if (string(bname) == "weight") {
			continue;
		} else if(string(bname).compare(0,4,"type")){
			branchnames.push_back(bname);
		} else {
			types.push_back(bname);
		}
	}// get list of all branches, and separate out types

	
//generate mlp stting in outstrem
	ostringstream outstrm(ostringstream::out);
	for (unsigned int i = 0; i < branchnames.size(); ++i) {
		outstrm << "@" << branchnames[i];
		if (i != branchnames.size()-1) {
			outstrm << ",";
		}
	} // list branch names
	
	outstrm << ":"  << branchnames.size() << ":";// Neural net structure
		
	
	for (unsigned int i = 0; i < types.size(); ++i) {
		outstrm << types[i];
		if (i != types.size()-1) {
			outstrm << ",";
		}
	}// output vars
	
	cout << outstrm.str() << endl; // print it out, to see what went in

	TMultiLayerPerceptron *mlp = 
	new TMultiLayerPerceptron(outstrm.str().c_str(),
							  "weight",
							  tree,
							  "Entry$%2==0",
							  "(Entry$+1)%2==0"); // set up neural net
	
	mlp->SetLearningMethod(TMultiLayerPerceptron::kBFGS); // choose learning method
	
	mlp->Train(ntrain, "text,graph,update=10"); // train
	mlp->Export("mlp","C++"); // save data
	
	

	TMLPAnalyzer ana(mlp);
	// Initialisation
	ana.GatherInformations();
	// output to the console
	ana.CheckNetwork();
	TCanvas* mlpa_canvas1 = new TCanvas("mlpa_canvas","Network analysis");
	// shows how each variable influences the network
	ana.DrawDInputs();
	TCanvas* mlpa_canvas2 = new TCanvas("mlpa_canvas2","Network analysis");
	// shows the network structure
	mlp->Draw();
	TCanvas* mlpa_canvas3 = new TCanvas("mlpa_canvas3","Network analysis");
	// draws the resulting network
	ana.DrawNetwork(0,"type==1","type==0");
	
	
}

int main(int argc, char** argv){
// Setup X for graph output
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	
// Get Tree for mlp 
	TFile * f = new TFile("../root/combo.root");
	TTree * t = (TTree*)f->Get("combotree");
/*
	TTree* metatree = (TTree *) f->Get("metadata");
	
	vector <ChannelMeta> channeldata; // Where each branch begins/ends
	Int_t temp_begin, temp_end;
	TBranch * b_begin = metatree->GetBranch("BeginIndex");
	TBranch * b_end   = metatree->GetBranch("EndIndex");
	b_begin->SetAddress(&temp_begin);
	b_end  ->SetAddress(&temp_end);
	channeldata.resize(metatree->GetEntriesFast());
	
	Int_t mineventnum = t->GetEntriesFast();
	for (Int_t i = 0; i < metatree->GetEntriesFast(); ++i) {
		metatree->GetEntry(i);
		channeldata[i].begin = temp_begin;
		channeldata[i].end = temp_end;
		
		if (mineventnum > channeldata[i].end - channeldata[i].begin + 1) {
			mineventnum = channeldata[i].end - channeldata[i].begin + 1;
		}
		cout << channeldata[i].begin << "\t" << channeldata[i].end  << "\t" << channeldata[i].end - channeldata[i].begin + 1 << endl;
	} 
	cout << mineventnum << endl;
	
	
	TFile * ftemp = new TFile("../root/tmp.root", "RECREATE");
	TTree * combotree = (TTree *) t->CloneTree(0);
	vector <Int_t> entrys;
	
	
	for(unsigned int i = 0 ; i != channeldata.size();++i){
		for ( int j = 0; j < mineventnum; ++j) {
			entrys.push_back(channeldata[i].begin +j);
		}
	}
	
	for (unsigned int i = 0; i < entrys.size(); i++) {
		t->GetEntry(entrys[i]);
		combotree->Fill();
	}
	ftemp->Write();
*/
	
//run mlp
	mlpsetup(t); 
	
//wait, so graphs are shown
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}