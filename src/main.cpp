#include "GameCharacter.hpp"
#include <iostream>

int main() {
    GameCharacter base("BaseCharacter", 10, 3);
    base.getInventory()->setItem(0, "Sword", 1);
    base.getInventory()->setItem(1, "Shield", 1);
    base.getInventory()->setItem(2, "Potion", 5);

    std::cout << "Initial Character\n";
    base.print();

    GameCharacter clone(base); 
    std::cout << "Clone created from Base\n";
    clone.print();

    clone.getInventory()->setItem(2, "Bow", 1);
    std::cout << "After modifying clone's inventory\n";
    std::cout << "Base:\n"; base.print();
    std::cout << "Clone:\n"; clone.print();

    
    GameCharacter enemyPrototype("EnemyPrototype", 10, 2);
    enemyPrototype.getInventory()->setItem(0, "Rusty Sword", 1);
    enemyPrototype.getInventory()->setItem(1, "Old Shield", 1);

    GameCharacter e1("Enemy1", 1, 2);
    GameCharacter e2("Enemy2", 1, 2);
    GameCharacter e3("Enemy3", 1, 2);

    std::cout << "\nBefore chaining (e1, e2, e3 have their own empty inventories)\n";
    e1.print();
    e2.print();
    e3.print();
    e1 = e2 = e3 = enemyPrototype;
    std::cout << "After chaining assignment\n";
    e1.print();
    e2.print();
    e3.print();
    enemyPrototype.print();  

    e1 = e1;
    std::cout << "After self-assignment of e1\n";
    e1.print();

    return 0;
}
