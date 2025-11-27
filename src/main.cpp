#include "../include/Character.hpp"
#include "../include/Warrior.hpp"
#include "../include/Mage.hpp"

#include <iostream>
#include <vector>
#include <memory> // std::make_unique, std::unique_ptr, std::move
#include <fstream> // std::fstream, std::ofstream, std::ifstream

void saveGame(const std::vector<std::unique_ptr<Character>>& party, const std::string& filename);
std::vector<std::unique_ptr<Character>> loadGame(const std::string& filename);

int main() {
    std::vector<std::unique_ptr<Character>> mainParty;

    std::unique_ptr<Warrior> myWarrior = std::make_unique<Warrior>("Kratos", 100, 2000);
    std::unique_ptr<Mage> myMage = std::make_unique<Mage>("Shiroe", 70, 50);

    mainParty.push_back(std::move(myWarrior));
    mainParty.push_back(std::move(myMage));
    mainParty.push_back(std::make_unique<Mage>("Jiexi", 90, 300));

    saveGame(mainParty, "test.txt");

    std::vector<std::unique_ptr<Character>> secondParty = loadGame("test.txt");

    for(const auto& character : secondParty)
        character->printStats();

    return 0;
};

void saveGame(const std::vector<std::unique_ptr<Character>>& party, const std::string& filename) {
    std::ofstream file(filename, std::ios::out);

    if(!file.is_open())
        std::cerr << "Error: Unable to open file!" << std::endl;

    for(const auto& character : party)
        file << character->printCharacter();

    file.close();
}

std::vector<std::unique_ptr<Character>> loadGame(const std::string& filename) {
    std::ifstream file(filename, std::ios::in);
    std::vector<std::unique_ptr<Character>> party;

    if(!file.is_open())
        std::cerr << "Error: Unable to open file!" << std::endl;

    while(!file.eof()){
        std::string charType;
        file >> charType;

        std::string name;
        file >> name;

        int health;
        file >> health;

        if(charType == "Warrior"){
            int strength;
            file >> strength;
            party.push_back(std::make_unique<Warrior>(name, health, strength));

        }else if(charType == "Mage"){
            int mana;
            file >> mana;
            party.push_back(std::make_unique<Mage>(name, health, mana));
        }
    }

    file.close();

    return party;
}
