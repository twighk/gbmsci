#ifndef __separation__
#define __separation__

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>


#include <TH1F.h>
#include <TAxis.h>

#define REDTHRESH 0.5


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
		std::cout << "                ";
		for (int i = 0; i !=histograms.size() ; ++i) { // 0 is underflow 
			
			std::string title = histograms[i]->GetTitle();
			for (int i = title.length(); i < 15 ; i++) {
				title += " ";
			}
			
			std::cout << title.c_str() << '\t' ; // print titles row
		}
		std::cout << std::endl; /// newline
		
		for (int i = 0; i !=histograms.size() ; ++i){ // Scale all the histograms
			Double_t inti =  histograms[i]->Integral();
			histograms[i]->Scale(1.0/inti);
		}
		
		for (int i = 0; i !=histograms.size() ; ++i) {
			std::string title = histograms[i]->GetTitle();
			for (int x = title.length(); x < 15 ; x++) {
				title += " ";
			}
			std::cout << title.c_str() << '\t' ;
			for (int j = 0; j <= i; ++j) {
				Double_t separation = 0;
				
				for (int k = 1; k < nbins + 1; ++k) { // 0 is underflow 
					Double_t x = (histograms[i]->GetBinContent(k) - histograms[j]->GetBinContent(k));
					separation += fabs(x);
				}
				separation /= 2;
				if (separation > REDTHRESH) std::cout << "\033[0;31m";
				std::cout.precision(3);
				std::cout << std::fixed << separation << "           ";
				if (separation > REDTHRESH) std::cout << "\033[0m";
			}
			std::cout << std::endl;
		}
	}
};
#endif