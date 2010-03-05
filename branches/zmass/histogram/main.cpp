#include <iostream>
#include <cmath>

#include <TApplication.h>
#include <TROOT.h>
#include <TSystem.h>
#include <TMath.h> // want to do some maths
#include <TRandom3.h> // want some random numbers


#include <THStack.h>

#include "histogram.h"
#include "histostack.h"

using namespace std;

int main(int argc, char** argv){
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	TRandom3  *randgen = new TRandom3(0);

	Histogram h1("Example Histogram");
	Histogram h2("Histogram Example");
	Histogram h3("Histogram a Example");
	
	h1.setXLabel("Xh1 $x^2$");
	h1.setYLabel("Yh1");
	
	//h1.show();
	//h2.show();
	//h3.show();
	
	for (Int_t i = 0; i < 100000; i++) {
		Float_t x = randgen->Rndm(); 
		Float_t y = randgen->Rndm();
		
		while (x< y *y) {
			x = randgen->Rndm();
			y = randgen->Rndm();
		} 
		
		h1.fill(x*350, 1.0f);
		h2.fill(350 - x*350, 1.0f);
		h3.fill(x*x*350, 1.0f);
	}
	
	Histostack hstack("test histostack");
	hstack.add(h1);
	hstack.add(h2);
	hstack.add(h3);
	hstack.draw();
	hstack.draw("Leg");
	cerr << "Hanging for X11" << endl;
	theApp.Run();
	return 0;
}