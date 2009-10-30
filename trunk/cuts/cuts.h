#include <string>
#include <vector>


class cuts;
typedef std::vector<cuts*> cutvec;

class cuts{
	Int_t position_in_list;

	cuts(cutvec &cutlist){
		cutlist.push_back(this);
		position_in_list = (cutlist.size() - 1);
	}

	Int_t pos(){
		return position_in_list;
	}
		
	virtual std::string name() = 0;
	virtual Int_t cut(eventviewer&) = 0;
};