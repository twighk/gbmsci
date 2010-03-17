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

struct xyz {
	int x;
	int y;
	int z;

	xyz(int x, int y, int z):x(x),y(y),z(z){ };
};

int main(int argc, char ** argv){
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 

	
	vector < string > names;
	vector < string > branches;
//	names.push_back("AH115");
//	names.push_back("AH115bb");
//	names.push_back("AH160");
//	names.push_back("AH160bb");
//	names.push_back("QCD_BCtoE");
//	names.push_back("QCD_EMenriched");
//	names.push_back("TTplusJets");
//	names.push_back("WplusJets");
//	names.push_back("Zbb");
//	names.push_back("Zcc");
//	names.push_back("ZplusJets");
	
	
	names.push_back("AH115");
	names.push_back("AH115bb");
	names.push_back("AH160");
	names.push_back("AH160bb");
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
//	const int num = 7;
//	const int hist1num = 8;
//	const int hist2num = 2;
/*****************************/
    

	vector <xyz> list;
//	list.push_back(xyz(0,7,10));
//	list.push_back(xyz(0,7,5));
//	list.push_back(xyz(0,1,0));
//	list.push_back(xyz(1,5,0));
//	list.push_back(xyz(1,5,6));
//	list.push_back(xyz(2,5,0));
//	list.push_back(xyz(2,5,6));
//	list.push_back(xyz(3,5,10));
//	list.push_back(xyz(3,7,6));
//	list.push_back(xyz(3,7,0));
//	list.push_back(xyz(3,7,2));
//	list.push_back(xyz(5,4,0));
//	list.push_back(xyz(7,7,3));
//	list.push_back(xyz(7,4,3));
//	list.push_back(xyz(7,4,10));
//	list.push_back(xyz(8,3,7));
//	list.push_back(xyz(8,2,7));
//	list.push_back(xyz(8,1,7));
//	list.push_back(xyz(8,10,7));
//	list.push_back(xyz(11,5,10));
//	list.push_back(xyz(11,5,3));
//	list.push_back(xyz(11,3,6));
//	list.push_back(xyz(11,3,5));
//	list.push_back(xyz(26,5,10));
//	list.push_back(xyz(26,5,3));
//	list.push_back(xyz(26,3,6));
//	list.push_back(xyz(26,3,5));
//	list.push_back(xyz(13,10,7));
//	list.push_back(xyz(15,4,7));
//	list.push_back(xyz(17,6,7));
//	list.push_back(xyz(17,1,7));
//	list.push_back(xyz(17,6,4));
//	list.push_back(xyz(20,2,5));
//	list.push_back(xyz(20,3,6));
//	list.push_back(xyz(23,10,2));
//	list.push_back(xyz(23,10,5));
//	list.push_back(xyz(23,1,0));
//	list.push_back(xyz(23,8,2));
//	list.push_back(xyz(23,8,5));
	list.push_back(xyz(24,10,7));
	
	
	for (unsigned int i = 0; i != list.size(); ++i) {
		int num = list[i].x;
		int hist1num = list[i].y;
		int hist2num = list[i].z;
	
		
		
		if (num >= branches.size()){
			cerr << "Histogram number must be less than " << branches.size() << endl;
			exit(-1);
		}
		
		gROOT->SetStyle("Plain");
		
		TH1F *hist1 = new TH1F();
		TH1F *hist2 = new TH1F();
		
		*hist1 = *(branchhists[num][hist1num]);
		*hist2 = *(branchhists[num][hist2num]);
		
		ostringstream histtitle;
		histtitle << branches[num] << ": " << names[hist1num]<< " vs. "<< names[hist2num];
		cout << histtitle.str() << endl;
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
	}

	
	
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}
