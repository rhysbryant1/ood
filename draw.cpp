#include <window.h>
#include <draw.h>


/*--------------------------------------------------------------*/
/* Command Class */
/*--------------------------------------------------------------*/


/*--------------------------------------------------------------*/
// Default Constructor

Command::Command()
{


}

/*--------------------------------------------------------------*/
// Constructor taking in the float value

Command::Command(float value)
{


}

/*--------------------------------------------------------------*/
// Destructor

Command::~Command()
{


}

















class Left: public Command{
	public:
		void Left();
		void ~Left();
		
	void Left:: draw(){
	/* Draw function for Left instruction*/
	
	
	};
};


class Right: public Command{
	public:
		void Right();
		void ~Right();
		
	void Right:: draw(){
	/* Draw function for the Right instruction*/
	
	
	
	};
};


class Forward: public Command{
	public:
		void Forawrd();
		void ~Forawrd();
		
	void Foward:: draw(){
	/* Draw function for the Forward instruction*/
	
	
	};
};

class Jump: public Command{
	public:
		void Forward();
		void ~Forward();
		
	void Forward:: draw(){
	/* Draw function for the Jump instruction */
	
	
	};
};


class Repeat: public Command{


};

