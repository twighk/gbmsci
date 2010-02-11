#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

#include <TRandom.h>
#include <TFile.h>
#include <TTree.h>
#include <TObjArray.h>
#include <TBranch.h>
#include <TString.h>
#include <TApplication.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TROOT.h>
#include <TPaveStats.h>
#include <TGraph.h>

#include "correlation.h"
#include "../event/eventdouble.h"

#define REDTHRESH 0.5

using namespace std;
vector<string> padprint(vector<string> );

int main(int argc, char ** argv){
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 

	
	vector < string > names; // names of files 
	vector < string > branches; //names of branches
	names.push_back("AH115");
	names.push_back("AH115");
	names.push_back("AH115bb");
	names.push_back("WplusJets");
	names.push_back("QCD_BCtoE");
	names.push_back("QCD_EMenriched");
	names.push_back("TTplusJets");
	names.push_back("Zbb");
	names.push_back("Zcc");
	names.push_back("ZplusJets");

	vector < TFile * > files; // list of files
	for (unsigned int i = 0; i != names.size() ; ++i) {
		ostringstream str;
		str << "../root/" << names[i] << "_skim.root";
		files.push_back(new TFile(str.str().c_str()));
	}
	
	vector < eventdouble* > events; // list of trees -> events to get events from
	for (unsigned int i = 0; i != files.size() ; ++i) {
		events.push_back( new eventdouble((TTree*)(files[i]->Get("bbAHCutTree"))));
	}
	
	map<string, Double_t> * map1 = (events[0])->Entry(0); // general (1st tree, 1st event) use event
	map<string, Double_t>::iterator pos; // its iterator
	
	for (pos = (*map1).begin(); pos != (*map1).end(); ++pos) { // loop over branches
		branches.push_back(pos->first); // store list of branch names
	}
	
	
	vector <vector < vector <Double_t> > > vararrs;
	vararrs.resize(names.size());
	for (unsigned int i = 0; i != names.size(); ++i){
		vararrs[i].resize(branches.size());
		for (int k = 0 ; k != branches.size(); ++k) { // over branches
			vararrs[i][k].resize(events[i]->getTree()->GetEntriesFast());
		}
	}
	
	
	for (unsigned int i = 0; i != files.size(); ++i) { // over all files
		for (int j = 0; j != events[i]->getTree()->GetEntriesFast() ; ++j) { // over all events
			map<string, Double_t> * evemap = (events[i])->Entry(j);
			int k = 0;
			for (pos = (*evemap).begin() ; pos != (*evemap).end(); ++pos) { // over branches
				vararrs[i][k][j] = (pos)->second;
				++k;
			}
		}
	}
	
//	for (int i = 0 ; i != vararrs.size(); ++i) {
//		for (int j = 0; j != vararrs[i].size(); ++j) {
//			for (int k=0; k != vararrs[i][j].size(); ++k) {
//				cout << vararrs[i][j][k] << endl;
//			}
//		}
//	}
	
	vector<string> padstr = padprint(branches);
	
	// generate Tgraphs
	
	vector<vector<vector<TGraph *> > > graphs;
	
	graphs.resize(names.size());
	for (unsigned int i = 0; i != names.size(); ++i){
		graphs[i].resize(branches.size());
		for (int j = 0 ; j != branches.size(); ++j) { 
			graphs[i][j].resize(branches.size());
		}
	}
	
	
	
	for (int i = 0 ; i != vararrs.size(); ++i) {
		cout << "Channel:" << names[i] << endl;
		
		for (int j = 0; j != padstr[0].length()+1; j++) {
			cout << " ";
		}
		
		for (int j = 0; j != padstr.size(); j++) {
			cout << padstr[j] << ' ';
		}
		cout << endl;
		for (int j = 0; j != vararrs[i].size(); ++j) {
			cout << padstr[j] << ' ';
			for (int k=0; k  <= j/*!= vararrs[i].size()*/; ++k) {
				// make tgraphs
				graphs[i][j][k] = new TGraph(vararrs[i][j].size(), &vararrs[i][j][0], &vararrs[i][k][0]);
				ostringstream o;
				o << branches[j] << " vs " << branches[k];
				graphs[i][j][k]->SetTitle(o.str().c_str());
				
				const int pres = 3;
				cout.precision(pres);
				Double_t number = graphs[i][j][k]->GetCorrelationFactor(); // get correlation
				
				if (abs(number) > REDTHRESH) {
					cout << "\033[0;31m";
				}
				if (number > 0) cout << " ";
				cout << std::fixed << graphs[i][j][k]->GetCorrelationFactor() << " ";
				for (int z = pres +3 ; z != padstr[0].length() ; ++z) {
					cout << " ";
				}
				
				if (abs(number) > REDTHRESH) {
					cout << "\033[0m";
				}
				

				//cout << j << " " << k << " " ;
			}
			cout << endl;
		}
		cout << endl<< endl;
	}
	
	TCanvas *canvas = new TCanvas();
	graphs[0][13][2]->Draw("A*");
	
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}

vector<string> padprint(vector<string> strs){
	int maxlen = 0;
	for (int i =0; i != strs.size(); ++i) {
		if (strs[i].length() > maxlen)
			maxlen = strs[i].length();
	}
	
//	for (int i = 0; i != maxlen; i++) {
//		cout << " ";
//	}
	for (int i = 0; i != strs.size(); ++i) {
//		cout << strs[i];
		for (int j = strs[i].length(); j!= maxlen; ++j) {
			strs[i] += " ";
		}
	}
	return strs;
}
