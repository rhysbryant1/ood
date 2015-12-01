#ifndef Instruction_h
#define Instruction_h

#include "Header.h"

class IncompleteInstructionException {};

class Instruction
{
//    friend List;

private:
    string name;
    int value;
    int* next;

public:
    friend istream& operator>> (istream& in, Instruction& instr);
    virtual void draw();

};

#endif
