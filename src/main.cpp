#include "../include/Character.hpp"
#include "../include/Warrior.hpp"
#include "../include/Mage.hpp"

#include <vector>
#include <memory>

int main() {
    std::vector<std::unique_ptr<Character>> party;

    std::unique_ptr<Warrior> myWarrior = std::make_unique<Warrior>("Kratos", 100, 2000);
    std::unique_ptr<Mage> myMage = std::make_unique<Mage>("Shiroe", 70, 50);

    party.push_back(std::move(myWarrior));
    party.push_back(std::move(myMage));
    party.push_back(std::make_unique<Mage>("Jiexi", 90, 300));

    for(const auto& character : party)
        character->printStats();

    return 0;
};
