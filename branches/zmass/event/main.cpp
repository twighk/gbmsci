#include <iostream>
#include <vector>
#include <string>
#include "event.h"

using namespace std;

int main(int argc, char** argv) {

	cout << "Alright?" << endl;
	TFile *f = new TFile("../root/AH115.root");
	TTree *t = (TTree*)f->Get("bbAHCutTree");
	event evttest(t);
	
}