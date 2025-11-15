#ifndef GAMECHARACTER_HPP
#define GAMECHARACTER_HPP

#include <string>
#include "Inventory.hpp"

class GameCharacter {
private:
    std::string name;
    int level;
    Inventory* inventory; 
public:
    GameCharacter(const std::string& n = "", int lvl = 1, int invSize = 0);

    ~GameCharacter();

    GameCharacter(const GameCharacter& other);

    GameCharacter& operator=(const GameCharacter& rhs);

    void print() const;

    Inventory* getInventory() const { return inventory; }
};

#endif
