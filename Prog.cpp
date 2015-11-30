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
