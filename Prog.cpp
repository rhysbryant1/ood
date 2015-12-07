#include <iostream>
#include "Prog.h"

void Prog::run()
{

	for (int increment = 0 ; increment<list.size() ; increment++)
	{
/*------------ Iterating through all items in the list --------------*/

		list[increment]->Run();
	}
/* ---------- Finish ---------------------------*/
}

// Input operator overload
istream& operator>> (istream& in, Prog& prg)
{
	cout << "Prog input overload called" << endl;

	string instruction_type;
	bool reached_end = false;

	// Iterate through stream from file and build up vector of Instructions
	while (!reached_end) {
		
		in >> ws >> instruction_type >> ws;				// Store instruction type
		if (in.eof()) { reached_end = true; }				// Check for end of file

		// Determine instruction type and instantiate accordingly.
		// NOTE: vector contains pointers to Instructions, while memory contains Forward, Jump, Left, Right and Repeat classes.
		if (instruction_type == "FORWARD" && reached_end == false) {
			cout << "Adding Forward instruction" << endl;			
			Forward* fwd = new Forward;				// Allocate memory for new Forward instruction
			in >> (*fwd);						// Read value into instruction
			prg.list.insert ( prg.list.end(), (Instruction*)fwd );	// Store Instruction into vector (of type Instruction not Forward)
			cout << "Forward instruction added" << endl;
		}
		else if (instruction_type == "JUMP" && reached_end == false) {
			Jump* jmp = new Jump;					// Allocate memory for new Jump instruction
			in >> (*jmp);						// Read value into instruction
			prg.list.insert ( prg.list.end(), (Instruction*)jmp );	// Cast Instruction into vector (type is Instruction not Jump)
		}
		else if (instruction_type == "LEFT" && reached_end == false) {
			cout << "Adding Left instruction" << endl;
			Left* lft = new Left;					// Allocate memory for new Left instruction
			in >> (*lft);						// Read value into instruction
			prg.list.insert ( prg.list.end(), (Instruction*)lft );	// Store Instruction into vector (of type Instruction not Left)
			cout << "Left instruction added" << endl;
		}
		else if (instruction_type == "RIGHT" && reached_end == false) {
			Right* rgt = new Right;					// Allocate memory for new Right instruction
			in >> (*rgt);						// Read value into instruction
			prg.list.insert ( prg.list.end(), (Instruction*)rgt );	// Store Instruction into vector (of type Instruction not Right)
		}
		else if (instruction_type == "REPEAT" && reached_end == false) {
			Repeat* rpt = new Repeat;				// Allocate memory for new Repeat instruction
			in >> (*rpt);							// Read value into instruction
			prg.list.insert ( prg.list.end(), (Instruction*)rpt );	// Store Instruction into vector (of type Instruction not Repeat)

		}
		else if (reached_end == false) { throw InvalidInstructionTypeException(); }
	}

	return in;
}


