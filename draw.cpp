#include "draw.h"

/*--------------------------------------------------------------*/
/* Left Class */
/*--------------------------------------------------------------*/



Left::Left(){}				// Default Constructor
Left::~Left(){}				// Destructor

// Draw function (Virtual)
void Left::Run()
{
	// Rotate around the z axis by the angle value for this instruction
	glRotatef(Left::value, 0, 0, 1);
}

/*--------------------------------------------------------------*/
/* Right Class */
/*--------------------------------------------------------------*/

Right::Right(){}			// Default Constructor
Right::~Right(){}			// Destuctor


// Draw function (Virtual)
void Right::Run()
{
	// Rotate around the z axis by the angle value for this instruction.
	// This rotation will be negative to turn the other way.
	int rotation(0 - Right::value);	
	glRotatef(rotation, 0, 0, 1);
}

/*--------------------------------------------------------------*/
/* Forward Class */
/*--------------------------------------------------------------*/

Forward::Forward(){}		// Default Constrcutor
Forward::~Forward(){}		// Destructor

// Draw function (Virtual)
void Forward::Run()
{
	// Draw a line of a length for the value in this class
	glBegin(GL_LINE_LOOP);
		glVertex3f(0, 0, 0);					// Beginning of line
		glVertex3f(0, Forward::value, 0);		// End of line
	glEnd();
	
	// Translate to the new vector loaction
	glTranslatef(0, Forward::value, 0);
}

/*--------------------------------------------------------------*/
/* Jump Class */
/*--------------------------------------------------------------*/

Jump::Jump(){}				// Default Constructor
Jump::~Jump(){}				// Destructor

// Draw function (Virtual)
void Jump::Run()
{
	// Translate the cursor for distance of the value in this class.
	glTranslatef(0, Jump::value, 0);

}

/*--------------------------------------------------------------*/
/* Repeat Class */
/*--------------------------------------------------------------*/

Repeat::Repeat(){}			// Default Constructor
Repeat::~Repeat(){}			// Destuctor


istream& operator>> (istream& in, Repeat& rpt)
{
	cout << "Command input operator overload called" << endl;

	in >> ws >> rpt.value;
	
	cout << "Command value is " << rpt.value << endl;

	if (in.fail()) {
		throw IncompleteInstructionException();
	}
	
	string dump; 
	in >> ws >> dump >> ws;
	in>>*rpt.pr;
	return in;
}

// Draw function (Virtual)
void Repeat::Run()
{
cout << value<<endl;
cout<< "Repeat Run fucntion called"<<endl;
	for (int repeat_count = 0; repeat_count < value; repeat_count++)
	{ 
		pr->run();
	}
	
}





