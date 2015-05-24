/**
 * Stats.h: Declares the classes necessary for the basic stats of a character.
 *
 */

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

enum Ability {
  STRENGTH,
  DEXTERITY,
  CONSTITUTION,
  INTELLIGENCE,
  WISDOM,
  CHARISMA
};

ostream& operator<<(ostream&, Ability);

struct EnumClassHash {
  template <typename T>
  size_t operator()(T t) const {
    return static_cast<size_t>(t);
  }
};

extern vector<Ability> iterAbility;

class Abilities {
  private:
    unordered_map<Ability, int, EnumClassHash> abilities;

  public:
    Abilities();
    void setScores(int, int, int, int, int, int);
    int accessAbility(Ability);
    void addToAbility(Ability, int);
};

ostream& operator<<(ostream&, Abilities);

/*
class Skill {

};

class SkillList {

};
*/

