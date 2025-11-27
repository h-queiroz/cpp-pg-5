#ifndef WARRIOR
#define WARRIOR

#include "Character.hpp"

class Warrior : public Character {
    private:
        int m_strength;

    public:
        Warrior(std::string name, int health, int strength); // Constructor
        void printStats() override;
        std::string printCharacter() override;
        std::string getType() override; // Pure virtual function. It turns the Character class abstract
};

#endif // !WARRIOR
