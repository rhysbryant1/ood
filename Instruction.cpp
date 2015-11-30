#include <stream>
#include "Instruction.h"

istream& operator>> (istream& in, Instruction& instr)
{
    string line_string;
    getline(in, line_string);
    stringstream line_stream(line_string);

    line_stream >> instr.name;
    line_stream >> instr.value;

    if (line_stream.fail()) {
        throw IncompleteInstructionException();
    }

    return in;
}
