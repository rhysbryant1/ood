#include "window.h"
#include "draw.h"
#include "Instruction.h"
#include "Prog.h"
#include "Header.h"


/*--------------------------------------------------------------*/
/* Left Class */
/*--------------------------------------------------------------*/

/*-------------------------------------*/
// Default Constructor

Left::Left()
{


}

/*-------------------------------------*/
// Destructor

Left::~Left()
{


}

/*-------------------------------------*/
// Draw function

void Left::draw()
{
	// Rotate around the z axis by the angle value for this instruction
	rotation = Left.value
	glRotate(rotation, 0, 0, 1)

}


/*--------------------------------------------------------------*/
/* Right Class */
/*--------------------------------------------------------------*/

/*-------------------------------------*/
// Default Constructor

Right::Right()
{


}

/*-------------------------------------*/
// Destructor

Right::~Right()
{


}

/*-------------------------------------*/
// Draw function

void Right::draw()
{
	// Rotate around the z axis by the angle value for this instruction.
	// This rotation will be negative to turn the other way.
	rotation = 0 - Right.value
	glRotate(rotation, 0, 0, 1)
}



/*--------------------------------------------------------------*/
/* Forward Class */
/*--------------------------------------------------------------*/

/*-------------------------------------*/
// Default Constructor

Forward::Forward()
{


}

/*-------------------------------------*/
// Destructor

Forward::~Forward()
{


}

/*-------------------------------------*/
// Draw function

void Forward::draw()
{

}




/*--------------------------------------------------------------*/
/* Jump Class */
/*--------------------------------------------------------------*/

/*-------------------------------------*/
// Default Constructor

Jump::Jump()
{


}

/*-------------------------------------*/
// Destructor

Jump::~Jump()
{


}

/*-------------------------------------*/
// Draw function

void Jump::draw()
{

}




/*--------------------------------------------------------------*/
/* Repeat Class */
/*--------------------------------------------------------------*/

/*-------------------------------------*/
// Default Constructor

Repeat::Reapeat()
{


}

/*-------------------------------------*/
// Destructor

Repeat::~Repeat()
{


}

/*-------------------------------------*/
// Draw function

void Repeat::draw()
{

}





