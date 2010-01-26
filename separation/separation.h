#ifndef __separation__
#define __separation__

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


#include <TH1F.h>
#include <TAxis.h>

#define NUMOFBINS 100


Int_t i2d (Double_t x){
	if(x - std::floor(x)  < 0.5){
		return std::floor(x);
	} else {
		return std::floor(x) + 1;
	}

}

class Separation  {
private:
	void check(){
		Int_t xbin = histograms[0]->GetNbinsX();
		Int_t xmin = i2d(histograms[0]->GetXaxis()->GetXmax());
		Int_t xmax = i2d(histograms[0]->GetXaxis()->GetXmin());
				
		for (unsigned int i = 1; i != histograms.size(); ++i) {
			if (xbin != histograms[i]->GetNbinsX() ||
				xmin != i2d(histograms[0]->GetXaxis()->GetXmax()) ||
				xmax != i2d(histograms[0]->GetXaxis()->GetXmin())
				){
				std::cerr << "Separation::check: Error: not all histograms are the same" << std::endl;
				exit(-1);
			}
		}
	}
	
	std::vector<TH1F*> histograms;
public:
	Separation(std::vector<TH1F*> _histograms){
		histograms =_histograms;
	}
	
	void getSeparation(){
		check();
		

		Double_t binwidth = (histograms[0]->GetXaxis()->GetXmax() - histograms[0]->GetXaxis()->GetXmin())
						  /  histograms[0]->GetNbinsX();
		
		Int_t nbins = histograms[0]->GetNbinsX();
		std::cout << '\t' ;
		for (int i = 0; i !=histograms.size() ; ++i) { // 0 is underflow 
			std::cout << histograms[i]->GetTitle() << '\t' ;
		}
		std::cout << std::endl;
		
		for (int i = 0; i !=histograms.size() ; ++i) {
			std::cout << histograms[i]->GetTitle() << '\t' ;
			for (int j = 0; j <= i; ++j) {
				
				Double_t separation = 0;
				Double_t inti =  histograms[i]->Integral();
				Double_t intj =  histograms[j]->Integral();
				
				
				for (int k = 1; k < nbins + 1; ++k) { // 0 is underflow 
					Double_t x = (histograms[i]->GetBinContent(k)/inti - histograms[j]->GetBinContent(k)/intj);
					separation += fabs(x);
				}
				separation /= 2;
				std::cout << separation << '\t';
			}
			std::cout << std::endl;
		}
	}
};
#endif