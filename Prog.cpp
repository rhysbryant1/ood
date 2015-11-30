#include <fstream>
#include "Prog.h"

// Input operator overload
istream& operator>> (istream& in, string file_path) {
	
	int a(0);	
	
	ifstream infile(file_path);			// Open file
	if (!infile) { throw BadFileException(); }	// Check that file exists
	
	// Iterate through file and build up vector of Instructions
	while (!infile.eof()) {
		infile >> vector[a] >> ws;
		a++;
	}

	return in;
}


Prog::Prog(){};

void Prog::run(){

	for (int increment = 0 ; increment<=list.size ; increment++)
	{
/*------------ Iterating through all items in the list --------------*/
		try{
			list[increment].draw();
		}
		catch Exception_drawfailed(){
			iostream::cerr<< "ERROR: Program failed to draw function"
		}
	
	}
/* ---------- Finish ---------------------------*/
};
