#include "event.h"

#include <TTree.h>

using namespace std;

event::event(TTree* _tree){

	tree = _tree;
	TObjArray * branch_list = tree->GetListOfBranches();
	
	for (int i = 0; i < branch_list->GetEntriesFast(); ++i) {
		string name = ((TBranch*)branch_list->At(i))->GetName();
		string _classname = ((TBranch*)branch_list->At(i))->GetClassName();
		brptr temp;
		if (_classname == "") {
			_classname = "unknown";
		}
		temp.classname = _classname;
		temp.pointer = NULL;
		data[name] = temp;
		tree->SetBranchAddress(name.c_str(), &(data[name].pointer));
		cout << i << "\t" << name << "\t" << _classname << endl;
	}
	
}

std::map<std::string, brptr> * event::Entry(Int_t i){
	tree->GetEntry(i);
	return &(data);

}