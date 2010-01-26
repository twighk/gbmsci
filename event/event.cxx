#include "event.h"

#include <TTree.h>

using namespace std;

event::event(TTree* _tree){

	tree = _tree;
	TObjArray * branch_list = tree->GetListOfBranches();
	
	for (int i = 0; i < branch_list->GetEntriesFast(); ++i) {
		string name = ((TBranch*)branch_list->At(i))->GetName();
		string _classname = ((TBranch*)branch_list->At(i))->GetClassName();
//		brptr temp;
//		temp.classname = string(
		cout << i << "\t" << name << "\t" << _classname << endl;
	}
	
}