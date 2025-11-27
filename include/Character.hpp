#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character {
    protected:
        std::string m_name;
        int m_health;

    public:
        Character(std::string name, int health); // Constructor
        void printStats();
};

#endif // CHARACTER_HPP
