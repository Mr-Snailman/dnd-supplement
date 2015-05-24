/**
 *
 */

#include "Stats.h"

ostream& operator<<(ostream& os, Ability ab) {
  switch (ab) {
    case STRENGTH:      os << "Str"; break;
    case DEXTERITY:     os << "Dex"; break;
    case CONSTITUTION:  os << "Con"; break;
    case INTELLIGENCE:  os << "Int"; break;
    case WISDOM:        os << "Wis"; break;
    case CHARISMA:      os << "Cha"; break;
    default: os.setstate(std::ios_base::failbit);
  }
  return os;
}

Ability enumArr[]
  {STRENGTH, DEXTERITY, CONSTITUTION, INTELLIGENCE, WISDOM, CHARISMA};
vector<Ability> iterAbility (enumArr, enumArr + sizeof(enumArr) / sizeof(Ability));

Abilities::Abilities(){
  setScores(0, 0, 0, 0, 0, 0);
}

void Abilities::setScores(int str, int dex, int con, int intel, int wis, int cha) {
  this->abilities[STRENGTH] = str;
  this->abilities[DEXTERITY] = dex;
  this->abilities[CONSTITUTION] = con;
  this->abilities[INTELLIGENCE] = intel;
  this->abilities[WISDOM] = wis;
  this->abilities[CHARISMA] = cha;
}

int Abilities::accessAbility(Ability key) {
  return this->abilities[key];
}

void Abilities::addToAbility(Ability key, int val) {
  this->abilities[key] += val;
}

ostream& operator<<(ostream& os, Abilities abs) {
  for (int i = 0; i < iterAbility.size(); i++) {
    os << iterAbility[i] << ":" << abs.accessAbility(iterAbility[i]) << " ";
  }
  return os;
}
