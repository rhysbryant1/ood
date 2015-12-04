#include "Command.h"
#include "Instruction.h"

// Constructor taking in the float value
Command::Command(float v)
{
	value = v;
}

istream& operator>> (istream& in, Command& cmd)
{
	cout << "Command input operator overload called" << endl;

	in >> ws >> cmd.value;
	
	cout << "Command value is " << cmd.value << endl;

	if (in.fail()) {
		throw IncompleteInstructionException();
	}

	return in;
}
