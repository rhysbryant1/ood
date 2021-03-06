#ifndef Prog_h
#define Prog_h
#include "Instruction.h"

class InvalidInstructionTypeException{};

class Prog{
	private:
		vector <Instruction*> list;		// Vector (array) of Instructions

	public:
		Prog() {};						// Constructor
		~Prog() {};						// Destructor
		
		// Overload input operator	
		friend istream& operator>> (istream& in, Prog& prg);	
		void run();						// Run member function
};
#endif
