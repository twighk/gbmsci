#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

#include <TFile.h>
#include <TTree.h>
#include <TObjArray.h>
#include <TBranch.h>
#include <TString.h>
#include <TApplication.h>

#include "../histogram/histogram.h"
#include "../histogram/histostack.h"

#ifdef MAKE115
#include "mlp115.h"
#endif

#ifdef MAKE160
#include "mlp160.h"
#endif

using namespace std;

const Double_t targetlum = 200.0;

struct ChannelMeta {
	string name;
//	Double_t luminocity;
	Int_t begin;
	Int_t end;
};


int main( int argc, char ** argv){
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	
	string a;
	if (argc > 1) {
		a = argv[1];
	}
	cout << "\033[0m" << a << endl;
	
	// Open File -> Get trees
	TFile* file = new TFile(string("../root/combo"+a+".root").c_str());
	TTree* tree = (TTree *) file->Get("combotree");
	TTree* metatree = (TTree *) file->Get("metadata");
	
	
	// Get Channel names 
	vector <ChannelMeta> channeldata;
	
	TString* chnme = NULL; Double_t chlum = NULL;
	Int_t temp_begin, temp_end;
	TBranch * channelbranch = metatree->GetBranch("ChannelName");
//	TBranch * channellumbranch = metatree->GetBranch("IntLum");
	TBranch * b_begin = metatree->GetBranch("BeginIndex");
	TBranch * b_end = metatree->GetBranch("EndIndex");
	channelbranch->SetAddress(&chnme);
	//channellumbranch->SetAddress(&chlum);
	b_begin->SetAddress(&temp_begin);
	b_end->SetAddress(&temp_end);

	channeldata.resize(metatree->GetEntriesFast());
	for (Int_t i = 0; i < metatree->GetEntriesFast(); ++i) {
		metatree->GetEntry(i);
		channeldata[i].name = string(chnme->Data());
		//channeldata[i].luminocity = chlum;
		channeldata[i].begin = temp_begin;
		channeldata[i].end = temp_end;

		cout << channeldata[i].name << ": " << "\t" << /*channeldata[i].luminocity <<*/ "\t" << channeldata[i].begin << "\t" << channeldata[i].end << endl;
	} 
	
	// Get variable and type branch names -> split into vectors
	vector <string> branchnames;
	vector <string> types;
	
	TObjArray* lob = tree->GetListOfBranches();
	for (Int_t i = 0; i < lob->GetEntriesFast(); ++i) {
		TBranch * branch = (TBranch *)lob->At(i);
		string bname = string(branch -> GetName());
		if (bname == "weight"
		  ||bname == "IntLum"
			) {
			continue;
		} else if(string(bname).compare(0,4,"type")){
			branchnames.push_back(bname);
		} else {
			types.push_back(bname);
		}

	}
	
	//Set up branches => vars
	Double_t *visibleMass; // point to visible mass
	vector <Double_t> vars;
	vector <TBranch *> branches;
	vars.resize(branchnames.size());
	branches.resize(branchnames.size());
	for (unsigned int i = 0; i < branchnames.size(); ++i){
		branches[i] = tree->GetBranch(branchnames[i].c_str());
		branches[i] -> SetAddress(&vars[i]);
		if (branchnames[i] == string("VisibleMass")) {
			visibleMass = &vars[i];
		}
	}
	
	
	// Set up types => vars
	vector <Int_t> vtypes;
	vector <TBranch *> btypes;
	vtypes.resize(types.size());
	btypes.resize(types.size());
	for (unsigned int i = 0; i < types.size(); ++i){
		btypes[i] = tree->GetBranch(types[i].c_str());
		btypes[i] -> SetAddress(&vtypes[i]);
	}
	
	
	
	// get ready for mlp
	vector <Double_t> outs;
	outs.resize(types.size());
#ifdef MAKE115
mlp115 tester;
#endif
	
#ifdef MAKE160
mlp160 tester;
#endif
	
	//make histograms
	vector<Histogram> histograms;
	for (unsigned int i = 0; i != outs.size(); i++) {
		histograms.push_back(
							 Histogram(channeldata[i].name.c_str())
							 );
	}
	
	vector <Double_t> sum;
	vector <Double_t> sum2;
	sum.resize(outs.size());
	sum2.resize(outs.size());
	for (unsigned int j = 0; j < outs.size(); ++j) {
		sum[j] = 0;
		sum2[j] = 0;
	} // set to 0
	

	
	vector<vector <Histogram * > > perfmat;
	perfmat.resize(channeldata.size());
	
	for (unsigned int i = 0; i != channeldata.size(); ++i){
		for (unsigned int j = 0; j != channeldata.size(); ++j){
			ostringstream str;
			str << "Actual("<<channeldata[i].name << ") vs. Output("<< channeldata[j].name << ")";
			perfmat[i].push_back(new Histogram(str.str().c_str(), 200, -0.5, 1.5));
		}
	}


	for (unsigned int i = 0; i != channeldata.size();++i){
		for (int j = channeldata[i].begin; j != channeldata[i].end + 1; ++j) {
			tree->GetEntry(j);			for (unsigned int k = 0; k < outs.size(); ++k) {
				outs[k] = tester.Value(k,&vars[0]);
				perfmat[i][k]->fill(outs[k], 1);
//				if (*visibleMass >100 && *visibleMass < 110){
//					cout << *visibleMass << endl;
//				}
				if (outs[k] > 0){ 
					histograms[k].fill( *visibleMass, outs[k]/* * targetlum /channeldata[j].luminocity*/);	
				}
			}
		}
	}
	
	cout << endl << "Matrix of means:" << endl;
	for (unsigned int i = 0; i != channeldata.size();++i){
		for (unsigned int j = 0; j != channeldata.size();++j){
			if (i == j)
				cout << "\033[0;31m"; // terminal red
			
			cout << fixed << setprecision(3) << perfmat[i][j]->getMean() << '\t';
			if (i == j)
				cout << "\033[0m"; // terminal default
			//perfmat[i][j]->show();// To turn on and off mass histograms
			
		}
		cout << endl;
	}
	

	
	
	Histostack hstack("Visible mass"); 

	//Draw histograms
	for (unsigned int i = 0; i != outs.size(); i++) {
		hstack.add(histograms[i]);
		histograms[i].show(); 
	}
	hstack.draw();
	
	
	
	
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}