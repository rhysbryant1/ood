#include "Command.h"
#include "Instruction.h"

// Constructor taking in the float value
Command::Command(float v)
{
	value = v;
}

istream& operator>> (istream& in, Command& cmd)
{
	in >> ws >> cmd.value;							// Read in the value after the command

	if (in.fail()) {
		throw IncompleteInstructionException();
	}

	return in;
}
