#include "Instruction.h"

class IncompleteInstructionException{};
class InvalidRepeatException{};

class Command: public Instruction {

	protected:
		Command() {};				// Default constructor - can not be instantiated
		float value;
			
	public:
		Command(float value);		// Constructor
		~Command() {};				// Destructor
		virtual void Run()=0;		// Virtual draw
		
		// Overloaded input operator
    	friend istream& operator>> (istream& in, Command& cmd);

};
