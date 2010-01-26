#include <iostream>
#include <TRandom.h>

#include "separation.h"

using namespace std;

int main(){
	cout << "hello" << endl;
	
	TRandom *r1=new TRandom();
	
	std::vector<TH1F*> histograms;
	histograms.push_back( new TH1F("h1","g1",100,-3,3));
	histograms.push_back( new TH1F("h2","g2",100,-3,3));
	histograms.push_back( new TH1F("h3","g3",100,-3,3));
	histograms.push_back( new TH1F("h4","g4",100,-3,3));
	histograms.push_back( new TH1F("h5","g5",100,-3,3));
	histograms[0]->FillRandom("gaus",10000);
	histograms[1]->FillRandom("gaus",92637);
	for (Int_t i=0; i<50000; i++) { histograms[2]->Fill(r1->Uniform(-2.5,-2)); }
	for (Int_t i=0; i<50000; i++) { histograms[3]->Fill(r1->Uniform( 2, 2.5)); }
	for (Int_t i=0; i<60000; i++) { histograms[4]->Fill(r1->Poisson(1)); }
	

	Separation sep(histograms);
	
	sep.getSeparation();
	
	return 0;
}