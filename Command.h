#include "Header.h"
#include "Instruction.h"

class Command: public Instruction {
	private:
		Command();		// Default constructor - can not be instantiated
	protected:
		static float value;
	public:
		Command(int value);	// Constructor
		~Command();		// Destructor

		// Overloaded input operator
    		friend istream& operator>> (istream& in, Instruction& instr);

		virtual void draw();	// Virtual draw
}
