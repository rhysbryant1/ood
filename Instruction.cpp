#include <iostream>
#include "Instruction.h"

// Do we need this file if all member functions are virtual?

    line_stream >> instr.name;
    line_stream >> instr.value;

    if (line_stream.fail()) {
        throw IncompleteInstructionException();
    }

    return in;
}



