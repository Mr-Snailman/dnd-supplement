/**
 * Generators.cpp: Classes dealing with generating data or other classes for
 *    use with the main project.
 *
 * @author Dustin Saunders <mrsnailman2414@gmail.com>
 */
#include "Generators.h"
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <utility>
#include <vector>

DiceRoller::DiceRoller(int sides) {
  this->sides = sides;
}

int DiceRoller::roll() {
  return rand() % this->sides + 1;
}

int rollLoadedDie(DiceRoller die) {
  int temp = 1;
  while (temp == 1) {
    temp = die.roll();
  }
  return temp;
}

Abilities rollAbilities(int (*roll)(DiceRoller)) {
  DiceRoller d6(6);
  Abilities abs;

  // Each ability score
  for (int abilityI = 0; abilityI < iterAbility.size(); abilityI++) { 
    abs.addToAbility(iterAbility[abilityI], roll(d6));
  }
  return abs;
}

int rollNormal(DiceRoller die) {
  int sum = 0;
  int temp = 0;
  int lowest = INT_MAX; // Ignore the lowest roll
  for (int i = 0; i < 4; i++) { // Four dice rolls
    temp = die.roll();

    if (lowest > temp) {
      if (i != 0) { // Only add previous lowest if lowest != INT_MAX
        sum += lowest; 
      }
      lowest = temp;

    } else {
      sum += temp;
    }
  }
  return sum;
}

int rollTylerStyle(DiceRoller die) {
  int sum = 0;
  vector<int> rolls;

  for (int i = 0; i < 5; i++) { // Five dice rolls
    rolls.push_back(rollLoadedDie(die));
  }
  sort(rolls.begin(), rolls.end());
  rolls.erase(rolls.begin(), rolls.begin()+1);  // Remove two lowest for reroll

  rolls.push_back(rollLoadedDie(die));
  rolls.push_back(rollLoadedDie(die));  // Reroll two lowest
  sort(rolls.begin(), rolls.end());

  // Take top three.
  for (int i = 0; i < 3; i++) {
    sum += rolls.back();
    rolls.pop_back();
  }
  return sum;
}

