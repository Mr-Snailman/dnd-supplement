/**
 * Stats.h: Declares the classes necessary for the basic stats of a character.
 *
 */

#include <iostream>
#include <unordered_map>

enum Ability {
  STRENGTH,
  DEXTERITY,
  CONSTITUTION,
  INTELLIGENCE,
  WISDOM,
  CHARISMA
};

std::ostream& operator<<(std::ostream&, Ability);

class Abilities {
  private:
    //unordered_map<Ability, int> abilities;

  public:
    Abilities(int, int, int, int, int, int);
    int accessAbility(Ability);
    void addToAbility(Ability, int);
};

/*
class Skill {

};

class SkillList {

};
*/

