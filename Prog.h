#ifndef Prog_h
#define Prog_h
#include "Instruction.h"

class InvalidInstructionTypeException{};

class Prog{
	private:
		vector <Instruction*> list;	// Vector (array) of Instructions

	public:
		Prog() {};
		~Prog() {};
		friend istream& operator>> (istream& in, Prog& prg);	// Overload input operator	
		void run();
};
#endif
