#include "../include/Warrior.hpp"
#include "../include/Mage.hpp"

int main() {
    Warrior myWarrior("Kratos", 100, 2000);
    Mage myMage("Shiroe", 70, 50);

    myWarrior.printStats();
    myMage.printStats();

    return 0;
};
