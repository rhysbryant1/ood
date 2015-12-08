#include "draw.h"

/*--------------------------------------------------------------*/
/* Left Class */
/*--------------------------------------------------------------*/



Left::Left(){}							// Default Constructor
Left::~Left(){}							// Destructor

// Draw function (Virtual)
void Left::Run()
{
	glRotatef(Left::value, 0, 0, 1);	// Rotate around the z axis by angle 'value'
}

/*--------------------------------------------------------------*/
/* Right Class */
/*--------------------------------------------------------------*/

Right::Right(){}						// Default Constructor
Right::~Right(){}						// Destuctor

// Draw function (Virtual)
void Right::Run()
{
	int rotation(0 - Right::value);		// Make the rotation negative
	glRotatef(rotation, 0, 0, 1);		// Rotate around the z axis by angle 'value'
}

/*--------------------------------------------------------------*/
/* Forward Class */
/*--------------------------------------------------------------*/

Forward::Forward(){}					// Default Constrcutor
Forward::~Forward(){}					// Destructor

// Draw function (Virtual)
void Forward::Run()
{
	// Draw a line of length 'value'
	glBegin(GL_LINE_LOOP);							
		glVertex3f(0, 0, 0);				// Beginning of line
		glVertex3f(Forward::value, 0, 0);	// End of line
	glEnd();
	
	glTranslatef(Forward::value, 0, 0);		// Translate to the end of the line
}

/*--------------------------------------------------------------*/
/* Jump Class */
/*--------------------------------------------------------------*/

Jump::Jump(){}							// Default Constructor
Jump::~Jump(){}							// Destructor

// Draw function (Virtual)
void Jump::Run()
{
	glTranslatef(Jump::value, 0, 0);	// Translate by distance 'value'
}

/*--------------------------------------------------------------*/
/* Repeat Class */
/*--------------------------------------------------------------*/

Repeat::Repeat(){}			// Default Constructor
Repeat::~Repeat(){}			// Destuctor

istream& operator>> (istream& in, Repeat& rpt)
{
	//in >> ws >> rpt.value;				// Read in value from stream
	in >> (Command&)rpt;	

	string bracket; 
	in >> ws >> bracket >> ws; 		// Remove ws and square bracket repeat command
	if (in.fail() || bracket != "[") {
		throw InvalidRepeatException();
	}
	in >> rpt.pr;
	return in;
}
/* ---------------------------------------------------------------------------*/

// Draw function (Virtual)
void Repeat::Run()
{
	// Repeat the command in the repeat function 'value' times
	for (int repeat_count = 0; repeat_count < value; repeat_count++)
	{ 
		pr.run();		// Run through the commands
	}
}





