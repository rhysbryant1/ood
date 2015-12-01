#ifndef Prog_h
#define Prog_h
#include "Header.h"
#include "Instruction.h"
#include "draw.h"

class InvalidInstructionTypeException{};

class Prog {
	private:
		vector <Instruction*> list;	// Vector (array) of Instructions
		int num_instructions;		// Total number of Instructions

	public:
		friend istream& operator>> (istream& in, Prog& prg);	// Overload input operator
		Prog();
		~Prog();		
		void run();
};

#endif
