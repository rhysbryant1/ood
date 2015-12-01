#include "Header.h"
#include "Instruction.h"

class IncompleteInstructionException{};

class Command: public Instruction {
	private:
		Command();				// Default constructor - can not be instantiated
	protected:
		static float value;
	public:
		Command(int value);		// Constructor
		~Command();				// Destructor

		
    	friend istream& operator>> (istream& in, Instruction& instr);	// Overloaded input operator

		virtual void draw();	// Virtual draw
}
