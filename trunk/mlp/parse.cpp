#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <TApplication.h>
#include <TROOT.h>

#include "../header/twohist.h"

using namespace std;

int main(int argc, char** argv){
    TApplication theApp("App", &argc, argv); // this must be instantiated only once 

    
    
    ifstream fin("out.csv");
	
	char chars[500];
	
	double a, b, c, d;
    TH1F* train = new TH1F("train","train",100,0,1);
    TH1F* test = new TH1F("test","test",100,0,1);
	
	while (!fin.eof()){
		fin.getline (chars,500);
		string str = chars;
		
		if (str.length() > 0) {
			bool hasa = false;
			for (int i = 0; i < str.length(); ++i){
				if (str[i] == 'a'){
					hasa = true;
					break;
				}
			}
				 
			if (!hasa){
				stringstream ss (stringstream::in | stringstream::out);
				ss << str;
				ss >> a >> b >> c >> d;
                train->Fill(c / a);
                test->Fill(d / b);
//				cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << endl;
				
			}
		}
	}
    
    TwoHist hists(train, test, "Error @ 200 epochs for BFGS with 9 nodes + PS-GAUS +R","Fractional Error","Entries");
    hists.Plot();
    
    cerr << "Hanging for X11" << endl;
    theApp.Run();
	return 0;
}