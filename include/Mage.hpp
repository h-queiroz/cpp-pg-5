#ifndef MAGE
#define MAGE

#include "Character.hpp"

class Mage : public Character {
    private:
        int m_mana;

    public:
        Mage(std::string name, int health, int mana); // Constructor
        void printStats() override;
        std::string printCharacter() override;
        std::string getType() override;
};

#endif // !MAGE
