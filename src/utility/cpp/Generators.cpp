/**
 * Generators.cpp: Classes dealing with generating data or other classes for
 *    use with the main project.
 *
 * @author Dustin Saunders <mrsnailman2414@gmail.com>
 */
#include "Generators.h"
#include <cstdlib>

DiceRoller::DiceRoller(int sides) {
  this->sides = sides;
}

int DiceRoller::rollDice() {
  return rand() % this->sides + 1;
}

