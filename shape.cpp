#ifndef shape_cpp
#define shape_cpp
#include "window.h"
#include "Prog.h"
#include "Command.h"

class InvalidFileNameException{};

Prog P;

void draw(void)   
{
	P.run();
}

int main ( int argc, char** argv )
{
		
	/* JL - ADD ERROR CHECKING FOR COMMAND LINE */
	ifstream in(argv[1]);	// Open file from command line
	if (!in){
		throw InvalidFileNameException();
	}

	try {					
		in >> P;			// Push file contents into program
	}
	
	catch (InvalidFileNameException) {
		cerr << "Invalid filename given" << endl;
	}
	
	catch (InvalidInstructionTypeException) {
		cerr << "Invalid Instruction Type Exception occurred" << endl;	
	}
		
	catch (IncompleteInstructionException) {
		cerr << "Incomplete Instruction Exception occurred" << endl;
	}

	catch (InvalidRepeatException) {
		cerr << "Invalid Repeat Exception occurred" << endl;
	}

	in.close();				// Close file
	draw();
	window w(argc, argv);	
	
	return 0;
}
#endif
