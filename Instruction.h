#ifndef Instruction_h
#define Instruction_h
#include "Header.h"

class Instruction
{
	protected:
		Instruction() {};			// Private default constructor - class can not be instantiated

	public:
		
		virtual ~Instruction(){};	// Virtual destructor
		virtual void Run()=0;		// Virtual Run Function
};

#endif
