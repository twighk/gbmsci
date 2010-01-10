/****************************************************************
 Skimmer class
 
 
****************************************************************/

#ifndef __skimmer.hpp__ 
#define __skimmer.hpp__ 
#include <iostream> 
#include <ostream> 
#include <vector> 
#include <TFile.h> 

class skimmer{
private:
	std::vector <TFile*> infile;
	
public:
	skimmer();
	
	void addFile(TFile* fin){infile.push_back(fin);}
	void addFile(std::vector <TFile*> fins){
		for (unsigned int i = 0; i != fins.size() ; i++) {
			infile.push_back(fins.at(i));
		}
	}
	
	void printFile(){ printFile(std::cout); }
	void printFile(std::ostream & out){
		for (unsigned int i = 0; i != infile.size() ; i++) {
			out << i << ": " << infile[i]->GetName() << std::endl;
		}
	}
	
};











#endif 
