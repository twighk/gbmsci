#include <iostream>
#include <TFile.h>
#include <TApplication.h>
#include <TBrowser.h>
#include "eventviewer.h"

using namespace std;

int main(int argc, char** argv) {
	TApplication theApp("App", &argc, argv); // this must be instantiated only once 
	
	TFile f("../root/AH115.root");
	f.pwd();
	
	TTree *t = dynamic_cast<TTree*>(f.Get("bbAHCutTree"));
	
	eventviewer tester(t);
	
	
	
	for(ULong64_t i = 0; i < 100; i++){
		tester.GetEntry(i);
		tester.Show();
		cout << endl;
	}
	
	TBrowser b; // make a browser
	theApp.Run(); // probably pauses it 
	
	return 0;
}


