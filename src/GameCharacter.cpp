#include "GameCharacter.hpp"
#include <iostream>

// Constructor
GameCharacter::GameCharacter(const std::string& n, int lvl, int invSize)
    : name(n), level(lvl)
{
    inventory = new Inventory(invSize);
}

// Destructor
GameCharacter::~GameCharacter() {
    delete inventory;
}

// Copy constructor
GameCharacter::GameCharacter(const GameCharacter& other)
    : name(other.name), level(other.level)
{
    inventory = new Inventory(*other.inventory);
}

GameCharacter& GameCharacter::operator=(const GameCharacter& rhs) {
    std::string newName = rhs.name;
    int newLevel = rhs.level;

    Inventory* newInventory = new Inventory(*rhs.inventory);

    delete inventory;

    name = newName;
    level = newLevel;
    inventory = newInventory;

    return *this;
}


void GameCharacter::print() const {
    std::cout << "Character: " << name << " (Level " << level << ")\n";
    std::cout << "Inventory: ";
    inventory->print();
    std::cout << std::endl;
}
