// assign1011.cpp : Defines the entry point for the console application.
//

#include "Header.h"
#include "window.h"

void draw(void)   
{
	glBegin(GL_LINE_LOOP);								// Draw the 3 connected verticies of a triangle
		glVertex3f( 0.0f, 1.0f, 0.0f);					// Top
		glVertex3f(-1.0f,-1.0f, 0.0f);					// Bottom Left
		glVertex3f( 1.0f,-1.0f, 0.0f);					// Bottom Right
	glEnd();											// Finished Drawing The Triangle

	glTranslatef(-2.5f,0.0f,0.0f);						// Move Left 1.5 Units
	glRotatef(20,0,0,1);								// Rotate by 20 degrees
	glBegin(GL_LINE_LOOP);								// Draw the triangle again
		glVertex3f( 0.0f, 1.0f, 0.0f);
		glVertex3f(-1.0f,-1.0f, 0.0f);
		glVertex3f( 1.0f,-1.0f, 0.0f);
	glEnd();

	glRotatef(-20,0,0,1);								// Rotate back again
	glTranslatef(5.0f,0.0f,0.0f);						// Move Right 5 Units
	glBegin(GL_LINE_LOOP);								// Draw a square
		glVertex3f(-1.0f, 1.0f, 0.0f);					// Top Left
		glVertex3f( 1.0f, 1.0f, 0.0f);					// Top Right
		glVertex3f( 1.0f,-1.0f, 0.0f);					// Bottom Right
		glVertex3f(-1.0f,-1.0f, 0.0f);					// Bottom Left
	glEnd();
}

int main ( int argc, char** argv )   // Create Main Function For Bringing It All Together
{
	Prog P;
		
	/* JL - ADD ERROR CHECKING FOR COMMAND LINE */
	ifstream in(argv[1]);	// Open file from command line
	
	try {
	  in >> P;		// Push file contents into program
	}
	catch (IncompleteInstructionException& e) {
	  cerr << "IncompleteInstructionException occurred" << endl;
	}
	catch (BadfileException& e) {
	  cerr << "BadfileException occurred." << endl;
	}
	
	in.close;		// Close file
	window w(argc, argv);	
	
	return 0;
}

