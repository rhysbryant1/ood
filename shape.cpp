#ifndef shape_cpp
#define shape_cpp
#include "window.h"
#include "Prog.h"
#include "Command.h"
Prog P;

void draw(void)   
{
	P.run();
}

int main ( int argc, char** argv )
{
		
	/* JL - ADD ERROR CHECKING FOR COMMAND LINE */
	cout << "Command line argument is " << argv[1] << endl;
	ifstream in(argv[1]);	// Open file from command line
	if (!in.fail()) { cout << "File read successful" << endl; }	

	try {			// Push file contents into program
		in >> P;
		cout << "Instructions read" << endl;
	}
	catch (InvalidInstructionTypeException) {
		cerr << "InvalidInstructionTypeException occurred" << endl;	
	}
	catch (IncompleteInstructionException) {
		cerr << "IncompleteInstructionException occurred" << endl;
	}
	draw();
	in.close();		// Close file
	window w(argc, argv);	
	
	return 0;
}
#endif
