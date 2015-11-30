#include "Header.h"
#include "Instruction.h"

class Prog {
  private:
    vector <Instruction*> list;					// Vector of Instructions
  
  public:
    friend istream& operator>> (istream& in, string file_path);	// Overload input operator
};
