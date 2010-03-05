#include <iostream>
#include <vector>
#include <string>
#include <TFile.h>
#include <TTree.h>
#include <TClonesArray.h>
#include "dict.h"
#include "../event/event.h"
#include "../header/brptr.h"

using namespace std;
using namespace dict;

int main(int argc, char** argv) {
	TFile *f = new TFile("../root/AH115.root");
	TTree *t = (TTree*)f->Get("bbAHCutTree");
	event evttest(t);
	map<string, brptr> d;
	d = *(evttest.Entry(5));
	cout << u<TClonesArray>(d["lv_tau"]) << endl;

	
	
}