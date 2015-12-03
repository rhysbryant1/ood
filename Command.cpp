#include "Command.h"

// Constructor taking in the float value
Command::Command(float v)
{
	value = v;
}

// Destructor
Command::~Command()
{

}

istream& operator>> (istream& in, Command& cmd)
{
	in >> ws >> cmd.value;
	
	if (in.fail()) {
        throw IncompleteInstructionException();
	}

	return in;
}
