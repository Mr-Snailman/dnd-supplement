/**
 *
 */

#include "Stats.h"

std::ostream& operator<<(std::ostream& os, Ability ab) {
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

Abilities::Abilities(int str, int dex, int con, int intel, int wis, int cha) {
//  this->abilities[STRENGTH] = str;
//  this->abilities[DEXTERITY] = dex;
//  this->abilities[CONSTITUTION] = con;
//  this->abilities[INTELLIGENCE] = intel;
  //this->abilities[WISDOM] = wis;
  //this->abilities[CHARISMA] = cha;
}

int Abilities::accessAbility(Ability key) {
//  return this->abilities[key];
  return 0;
}

void Abilities::addToAbility(Ability key, int val) {
//  this->abilities[key] += val;
}
