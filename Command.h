#ifndef Command_hh
#define Command_hh
#include "Header.h"
#include "Instruction.h"

class IncompleteInstructionException{};

class Command: public Instruction {

	protected:
		Command() {};			// Default constructor - can not be instantiated
		float value;
	
	public:
		// Overloaded input operator
    		friend istream& operator>> (istream& in, Command& cmd);
		Command(float value);		// Constructor
		~Command();			// Destructor
		virtual void draw();		// Virtual draw

};
#endif
