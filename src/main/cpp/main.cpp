#include "Generators.h"
#include "Stats.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

  DiceRoller d4(4);
  DiceRoller d6(6);
  DiceRoller d8(8);
  DiceRoller d10(10);
  DiceRoller d12(12);
  DiceRoller d20(20);
  DiceRoller percent(100);

  for (int i = 0; i < 4; i++) {
    cout << "d4:" << d4.rollDice() << endl;
  }
  
  cout << STRENGTH << endl;
  cout << WISDOM << endl;

  Abilities abs(1, 1, 1, 1, 1, 1);

  return 0;
}
