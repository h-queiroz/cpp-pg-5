#include "../include/Mage.hpp"

#include <iostream>

Mage::Mage(std::string name, int health, int mana) : Character(name, health), m_mana(mana) { };

void Mage::printStats() {
    std::cout << "--- Mage Stats ---\n";
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Health: " << m_health << std::endl;
    std::cout << "Mana: " << m_mana << "\n\n";
};
