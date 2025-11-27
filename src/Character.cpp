#include "../include/Character.hpp"

#include <iostream>

Character::Character(std::string name, int health) : m_name(name), m_health(health) {};

void Character::printStats() {
    std::cout << "--- Character Stats ---\n";
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Health: " << m_health << "\n\n";
};
