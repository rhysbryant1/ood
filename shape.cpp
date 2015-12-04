#ifndef shape_cpp
#define shape_cpp
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
	
	in >> P;		// Push file contents into program

	
	in.close();		// Close file
	window w(argc, argv);	
	
	return 0;
}
#endif
