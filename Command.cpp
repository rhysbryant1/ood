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
    string line_string;
    getline(in, line_string);
    stringstream line_stream(line_string);

    line_stream >> instr.name;
    line_stream >> instr.v;

    if (line_stream.fail()) {
        throw IncompleteInstructionException();
    }

    return in;
}
