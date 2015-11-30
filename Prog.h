#ifndef Prog_h
#define Prog_h

#include "Header.h"
#include "Instruction.h"

class Prog {
  private:
    vector <Instruction*> list;					// Vector of Instructions
  
  public:
    friend istream& operator>> (istream& in, string file_path);	// Overload input operator
    void Prog();
    void ~Prog();		
    void run();
};

#endif
