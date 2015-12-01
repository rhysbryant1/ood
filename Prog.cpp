#include <fstream>
#include "Prog.h"

// Default Constructor
Prog::Prog()
: num_instructions(0)		// Initialise with no instructions
{

}

void Prog::run()
{

//	for (int increment = 0 ; increment<=list.size() ; increment++)
//	{
/*------------ Iterating through all items in the list --------------*/
//		try{
//			list[increment].draw();
//		}
//		catch Exception_drawfailed(){
//			iostream::cerr<< "ERROR: Program failed to draw function"
//		}	
//	}
/* ---------- Finish ---------------------------*/
}

// Input operator overload
istream& operator>> (istream& in, Prog& prg)
{
	string instruction_type;
	
	// Iterate through stream from file and build up vector of Instructions
	for (int i(0); !in.eof(); i++) {
		
		in >> ws >> instruction_type >> ws;			// Store instruction type
		
		// Determine instruction type and instantiate accordingly.
		// NOTE: vector contains pointers to Instructions, while memory contains Forward, Jump, Left, Right and Repeat classes.
		if (instruction_type == "FORWARD") {
			Forward* fwd = new Forward;		// Allocate memory for new Forward instruction
			in >> (*fwd);				// Read value into instruction
			prg.list[i] = (Instruction*)fwd;		// Store Instruction into vector (of type Instruction not Forward)
		}
		else if (instruction_type == "JUMP") {
			Jump* jmp = new Jump;			// Allocate memory for new Jump instruction
			in >> (*jmp);				// Read value into instruction
			prg.list[i] = (Instruction*)jmp;		// Cast Instruction into vector (type is Instruction not Jump)
		}
		else if (instruction_type == "LEFT") {
			Left* lft = new Left;			// Allocate memory for new Left instruction
			in >> (*lft);				// Read value into instruction
			prg.list[i] = (Instruction*)lft;		// Store Instruction into vector (of type Instruction not Left)
		}
		else if (instruction_type == "RIGHT") {
			Right* rgt = new Right;			// Allocate memory for new Right instruction
			in >> (*rgt);				// Read value into instruction
			prg.list[i] = (Instruction*)rgt;		// Store Instruction into vector (of type Instruction not Right)
		}
		else if (instruction_type == "REPEAT") {
			Repeat* rpt = new Repeat;		// Allocate memory for new Repeat instruction
			in >> (*rpt);				// Read value into instruction
			prg.list[i] = (Instruction*)rpt;		// Store Instruction into vector (of type Instruction not Repeat)
		}
		else { throw InvalidInstructionTypeException(); }
	}

	return in;
}

// Destructor
Prog::~Prog()
{

}


