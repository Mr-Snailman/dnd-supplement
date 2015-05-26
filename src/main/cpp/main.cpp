#include "Generators.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
  
  srand(time(NULL));
  
  Abilities abs;

  abs = rollAbilities(rollTylerStyle);
  cout << "Loaded Char:" << abs << endl;

  abs = rollAbilities(rollNormal);
  cout << "Normal: " << abs << endl;

  return 0;
}
