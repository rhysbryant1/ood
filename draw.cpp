#include <window.h>
#include <draw.h>
#include <Instruction.h>
#include <Prog.h>
#include <Header.h>


/*--------------------------------------------------------------*/
/* Left Class */
/*--------------------------------------------------------------*/

Left::Left(){}				// Default Constructor
Left::~Left(){}				// Destructor

// Draw function (Virtual)
void Left::draw()
{
	// Rotate around the z axis by the angle value for this instruction
	glRotate(Left::value, 0, 0, 1)
}

/*--------------------------------------------------------------*/
/* Right Class */
/*--------------------------------------------------------------*/

Right::Right(){}			// Default Constructor
Right::~Right(){}			// Destuctor


// Draw function (Virtual)
void Right::draw()
{
	// Rotate around the z axis by the angle value for this instruction.
	// This rotation will be negative to turn the other way.
	rotation = 0 - Right::angle
	glRotate(rotation, 0, 0, 1)
}

/*--------------------------------------------------------------*/
/* Forward Class */
/*--------------------------------------------------------------*/

Forward::Forward(){}		// Default Constrcutor
Forward::~Forward(){}		// Destructor

// Draw function (Virtual)
void Forward::draw()
{
	// Draw a line of a length for the value in this class
	glBegin(GL_LINE_LOOP);
		glVertex3f(0, 0, 0);			// Beginning of line
		glVertex3f(length, 0, 0);		// End of line
	glEnd();
}

/*--------------------------------------------------------------*/
/* Jump Class */
/*--------------------------------------------------------------*/

Jump::Jump(){}				// Default Constructor
Jump::~Jump(){}				// Destructor

// Draw function (Virtual)
void Jump::draw()
{
	// Translate the cursor for distance of the value in this class.
	glTranslate(Jump.value, 0, 0)

}

/*--------------------------------------------------------------*/
/* Repeat Class */
/*--------------------------------------------------------------*/

Repeat::Reapeat(){}			// Default Constructor
Repeat::~Repeat(){}			// Destuctor

// Draw function (Virtual)
void Repeat::draw()
{

}





