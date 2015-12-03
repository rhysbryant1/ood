// assign1011.cpp : Defines the entry point for the console application.
//

#include "Header.h"
#include "window.h"
#include "Prog.h"

Prog P;

void draw(void)   
{
//	P.run();
}

int main ( int argc, char** argv )
{
		
	/* JL - ADD ERROR CHECKING FOR COMMAND LINE */
	ifstream in(argv[1]);	// Open file from command line
	
	try {
	  in >> P;		// Push file contents into program
	}
	catch (IncompleteInstructionException& e) {
	  cerr << "IncompleteInstructionException occurred" << endl;
	}
	catch (InvalidInstructionTypeException& e) {
	  cerr << "BadfileException occurred." << endl;
	}
	
	in.close();		// Close file
	window w(argc, argv);	
	
	return 0;
}

