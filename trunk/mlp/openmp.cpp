#include <omp.h>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>

#define OMP_NUM_THREADS 8


std::string cmdpipe (std::string);


using namespace std;

int main(int argc, char** argv){
	cout << "Hello OpenML!\n";
	omp_set_num_threads(OMP_NUM_THREADS); 
	
	ostringstream cmd;
	cmd << "./mlpsetup ";
	if (argc > 1) {
		cmd << argv[1] << " ";
	}

	
	ostringstream outstrm(ostringstream::out);	
	
#pragma omp parallel for shared(outstrm, cmd) schedule(runtime) ordered 
	for (long i = 0; i < 24; ++i){
		ostringstream sleep;
		sleep << "sleep " << (i % OMP_NUM_THREADS) << ".2 ; date;"; // randomize in tmpl based on secs
		cout << 
				cmdpipe(sleep.str().c_str());
		
		ostringstream cmdnum;
		cmdnum << cmd.str() << i;
		string pipeout = cmdpipe(cmdnum.str());
		
#pragma omp ordered
		outstrm << i << " "<< omp_get_thread_num() + 1 << ' ' << pipeout << endl;
		cout    << i << " "<< omp_get_thread_num() + 1 << ' ' << pipeout << endl;
	}
	
	//cout << outstrm.str();
	return 0;
}


string cmdpipe (string cmd){
	ostringstream cmdout(ostringstream::out);
	FILE *cmdfd = popen (cmd.c_str(), "r");
	
	for (char c = fgetc(cmdfd); c != EOF; c = fgetc(cmdfd)) {
		cmdout << c;
	}
	pclose(cmdfd);
	
	return cmdout.str();
}
