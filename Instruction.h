#ifndef Instruction_h
#define Instruction_h
#include "Header.h"

class Instruction
{
	protected:
		Instruction() {};		// Private default constructor - class can not be instantiated

	public:
		
		virtual ~Instruction(){};
		virtual void Run()=0;		// From Rich's design??
};

#endif
