#include "Command.h"
#include <GL/gl.h>     		// The GL Header File
#include <GL/glut.h>   		// The GL Utility Toolkit (Glut) Header
#include "Prog.h"

class Left: public Command{
	public:
		Left();				// Default Constructor
		~Left();			// Destructor
		void Run();			// Draw function for any left instruction
};

class Right: public Command{
	public:
		Right();			// Default Constructor
		~Right();			// Destructor
		void Run();			// Draw function for any right instruction
};

class Forward: public Command{
	public:
		Forward();			// Default Constructor
		~Forward();			// Destructor
		void Run();			// Draw function for any forward instruction
};

class Jump: public Command{
	public:
		Jump();				// Default Constructor
		~Jump();			// Destructor
		void Run();			// Draw function for any jump instruction
};

class Repeat: public Command{
	private:
		Prog pr;
	public:
		Repeat();			// Default Constructor
		~Repeat();			// Destructor
		void Run();			// Draw function for any repeat instruction
		
		// Overload input operator
		friend istream& operator>> (istream& in, Repeat& rpt);	
									
};
