#ifndef draw_hh
#define draw_hh
#include "Command.h"

using namespace std;


class Left: public Command{
	public:
		Left();				// Default Constructor
		~Left();			// Destructor
		void draw();			// Draw function for any left instruction
};


class Right: public Command{
	public:
		Right();			// Default Constructor
		~Right();			// Destructor
		void draw();			// Draw function for any right instruction
};

class Forward: public Command{
	public:
		Forward();			// Default Constructor
		~Forward();			// Destructor
		void draw();			// Draw function for any forward instruction
};

class Jump: public Command{
	public:
		Jump();				// Default Constructor
		~Jump();			// Destructor
		void draw();			// Draw function for any jump instruction
};

class Repeat: public Command{
	public:
		Reapeat();			// Default Constructor
		~Reapeat();			// Destructor
		void draw();			// Draw function for any repeat instruction
};

#endif
