#include "../include/Warrior.hpp"

#include <iostream>

Warrior::Warrior(std::string name, int health, int strength) : Character(name, health), m_strength(strength) { };

void Warrior::printStats() {
    std::cout << "--- Warrior Stats ---\n";
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Health: " << m_health << std::endl;
    std::cout << "Strength: " << m_strength << "\n\n";
};
