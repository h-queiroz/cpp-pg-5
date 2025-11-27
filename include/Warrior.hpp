#ifndef WARRIOR
#define WARRIOR

#include "Character.hpp"

class Warrior : public Character {
    private:
        int m_strength;

    public:
        Warrior(std::string name, int health, int strength); // Constructor
        void printStats() override;
};

#endif // !WARRIOR
