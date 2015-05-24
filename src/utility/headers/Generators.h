/**
 * Generators.h: Declares the classes and methods used by the .cpp.
 *
 * @author Dustin Saunders
 */

class DiceRoller {
  private:
    int sides;

  public:
    DiceRoller(int);
    int rollDice();
};
