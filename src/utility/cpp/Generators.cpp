/**
 * Generators.cpp: Classes dealing with generating data or other classes for
 *    use with the main project.
 *
 * @author Dustin Saunders <mrsnailman2414@gmail.com>
 */
#include "Generators.h"
#include <cstdlib>
#include <iostream>

DiceRoller::DiceRoller(int sides) {
  this->sides = sides;
}

int DiceRoller::rollDice() {
  return rand() % this->sides + 1;
}


Abilities rollAbilities() {
  DiceRoller d6(6);
  Abilities abs;
  int temp;
  // Each ability score
  for (int abilityI = 0; abilityI < iterAbility.size(); abilityI++) { 
    for (int i = 0; i < 4; i++) { // Four dice rolls
      temp = 1;
      while (temp == 1) { // Automatically reroll 1's
        temp = d6.rollDice();
      }
      abs.addToAbility(iterAbility[abilityI], temp); // Add to that ability
    }
  }
  return abs;
}
