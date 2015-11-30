#ifndef Instruction_h
#define Instruction_h

#include "Header.h"

class IncompleteInstructionException {};

class Instruction
{
	private:
		virtual Instruction() {};	// Private default constructor - class can not be instantiated

	public:
		virtual ~Instruction();
		virtual void Run();		// From Rich's design??
};

#endif
