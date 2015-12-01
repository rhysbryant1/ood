#include "Command.h"

// Default constructor
Command::Command()
{

}

// Constructor taking in the float value
Command::Command(float value)
{

}

// Destructor
Command::~Command()
{

}

istream& operator>> (istream& in, Instruction& instr)
{
	string instruction_type;
	
	in >> instruction_type >> ws >> instr.v;
	
	if (in.fail()) {
        throw IncompleteInstructionException();
	}

	return in;
}
