#include "prog.h"
#include <iostream>
Prog::Prog(){

};

void Prog::run(){

for (int increment = 0 ; increment<=list.size ; increment++)
{
	try{
		list[increment].draw();
	}
	catch Exception_drawfailed(){
		iostream::cerr<< "ERROR: Program failed to draw function"
	}
	
}





};



