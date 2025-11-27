#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character {
    // public:
    //     enum Type {
    //         WARRIOR,
    //         MAGE,
    //     };
    //
    protected:
        std::string m_name;
        int m_health;

    public:
        Character(std::string name, int health); // Constructor
        virtual ~Character() {}; // Destructor
        virtual void printStats();
        virtual std::string printCharacter() = 0;
        virtual std::string getType() = 0; // Pure virtual function. It turns the Character class abstract
};

#endif // CHARACTER_HPP
