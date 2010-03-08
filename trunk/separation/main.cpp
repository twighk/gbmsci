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

#include "separation.h"
#include "../event/eventdouble.h"

using namespace std;

int main(int argc, char ** argv){
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 

	
	vector < string > names;
	vector < string > branches;
	names.push_back("AH115");
	names.push_back("AH115bb");
	names.push_back("WplusJets");
	names.push_back("QCD_BCtoE");
	names.push_back("QCD_EMenriched");
	names.push_back("TTplusJets");
	names.push_back("Zbb");
	names.push_back("Zcc");
	names.push_back("ZplusJets");
	
	vector < TFile * > files;
	for (unsigned int i = 0; i != names.size() ; ++i) {
		ostringstream str;
		str << "../root/" << names[i] << "_skim.root";
		files.push_back(new TFile(str.str().c_str()));
	}
	
	vector < eventdouble* > events;
	for (unsigned int i = 0; i != files.size() ; ++i) {
		events.push_back( new eventdouble((TTree*)(files[i]->Get("bbAHCutTree"))));
	}
	

	map<string, Double_t> * map1 = (events[0])->Entry(0);
	vector <double> min; min.resize(map1->size());
	vector <double> max; max.resize(map1->size());
	
	map<string, Double_t>::iterator pos;
	
	
	int z = 0;
	for (pos = (*map1).begin(); pos != (*map1).end(); ++pos) {
		branches.push_back(pos->first);
		min[z] = pos->second;
		max[z] = pos->second;
	++z;}
	
	
	// find min maxes
	for (unsigned int i = 0; i != files.size(); ++i) {
		for (int j = 0; j != events[i]->getTree()->GetEntriesFast() ; ++j) {
			map<string, Double_t> * evemap = (events[i])->Entry(j);
				map<string, Double_t>::iterator pos;
			
			int k = 0;
				for (pos = (*evemap).begin(); pos != (*evemap).end(); ++pos) {
					
					if( pos->second < min[k]) min[k] = pos->second;

					if( pos->second > max[k]) max[k] = pos->second;
					
					++k;
				}
		}
	}
	
	
/**************************************************/
	// Force Min / max
	max[12] =200; 
	
	vector <vector<TH1F*> > branchhists; // vector of histograms for each branch 
	branchhists.resize(map1->size());
	
	int histnum = 0;
	z = 0; // print out Min Maxes
	for (pos = (*map1).begin(); pos != (*map1).end(); ++pos) {
		cout << pos->first << '\t' << min[z] << '\t' << max[z] << endl;
		
		for (unsigned int i = 0; i != names.size(); i++) {
			ostringstream str;
			str << "h" << histnum;
			branchhists[z].push_back(new TH1F(str.str().c_str(), // histogram name
									 names[i].c_str(), // histogram title
									 100, // bin number
									 min[z], // bin max
									 max[z])); // bin min
			++histnum;
		}
		++z;
	}
	
	
	// fill histogram
	for (unsigned int i = 0; i != files.size(); ++i) {
		for (int j = 0; j != events[i]->getTree()->GetEntriesFast() ; ++j) {
			map<string, Double_t> * evemap = (events[i])->Entry(j);
			map<string, Double_t>::iterator pos;
			
			int k = 0;
			for (pos = (*evemap).begin(); pos != (*evemap).end(); ++pos) {
				branchhists[k][i]->Fill(pos->second);
				//cout << pos->second << endl;
				++k;
			}
		}
	}
	
	 cout << "\n\n"; 
	
	vector <Separation * > seps;
	z = 0;
	for (pos = (*map1).begin(); pos != (*map1).end(); ++pos) {
		seps.push_back(new Separation(branchhists[z]));
		cout << z << ": "<<pos->first << endl;
		seps[z]->getSeparation();
		
		cout << "\n\n"; 
		++z;
	}
/*****************************/
	const int num = 7;
	const int hist1num = 8;
	const int hist2num = 2;
/*****************************/
    
    if (num >= branches.size()){
        cerr << "Histogram number must be less than " << branches.size() << endl;
        exit(-1);
    }
	
	gROOT->SetStyle("Plain");
	TH1F *hist1 = branchhists[num][hist1num];
	TH1F *hist2 = branchhists[num][hist2num];
	
	ostringstream histtitle;
	histtitle << branches[num] << ": " << names[hist1num]<< " vs. "<< names[hist2num];
	cout << histtitle.str() <<endl;
	hist1->SetTitle(histtitle.str().c_str());
	hist2->SetTitle(histtitle.str().c_str());
	hist1->SetName(names[hist1num].c_str());
	hist2->SetName(names[hist2num].c_str());
	
	TCanvas *canvas = new TCanvas();
	hist1->SetFillColor(6);
	hist1->SetFillStyle(3002);
	hist2->SetFillColor(4);
	hist2->SetFillStyle(3003);
		
	TLegend *legend = new TLegend(0.78,0.45,0.98,0.6,"");
	legend -> SetTextSize(0.03);
	legend -> AddEntry(hist1,names[hist1num].c_str(),"f");
	legend -> AddEntry(hist2,names[hist2num].c_str(),"f");
	
	Float_t count1, count2;
	count1 = hist1->GetBinContent(hist1->GetMaximumBin());
	count2 = hist2->GetBinContent(hist2->GetMaximumBin());
	if (count1 >= count2){
		hist1->Draw();
		hist2->Draw("sames");
	} else {
		hist2->Draw();
		hist1->Draw("sames");
	}
	legend->Draw();
	
	canvas->Update();
	
	
	TPaveStats * st = (TPaveStats *) hist2 ->FindObject("stats");
	st->SetY2NDC(0.80);
	st->SetY1NDC(0.65);
	

	canvas->Modified();
	
	
	
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}
