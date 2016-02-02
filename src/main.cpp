#include "Generators.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
  
  srand(time(NULL));
  
  Abilities abs;

  cout << "..." << endl <<
    "This Boyle-house loaded roll is based on the following rules: " << endl <<
    "  Roll 5 dice." << endl <<
    "  Reroll all 1's" << endl <<
    "  After the original 5 dice are rolled, reroll the lowest 2." << endl <<
    "..." << endl;
  abs = rollAbilities(rollTylerStyle);
  cout << abs << endl;

  cout << "..." << endl << 
    "Showing a normal roll for comparison based on D&D v3.5 rules." << endl <<
    "..." << endl;
  abs = rollAbilities(rollNormal);
  cout << abs << endl;

  return 0;
}
