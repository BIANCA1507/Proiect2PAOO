#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Item.hpp"

// Clasa care contine o lista dinamica de iteme.
// Aceasta lista este alocata pe heap, pentru a demonstra deep copy (Item 12).
class Inventory {
private:
    Item* items;       // pointer catre array-ul alocat dinamic
    int itemCount;     // numarul de elemente

public:
    // Constructor parametric: creeaza un inventar cu un anumit numar de iteme
    Inventory(int count = 0);

    // Destructor
    ~Inventory();

    // Copy constructor (pentru deep copy)
    Inventory(const Inventory& other);

    // Operator= (copy assignment) – se va folosi si in GameCharacter
    Inventory& operator=(const Inventory& rhs);

    // Afisare continut
    void print() const;

    // Setare item (pentru teste)
    void setItem(int index, const std::string& name, int quantity);

    int getCount() const { return itemCount; }
    const Item& getItem(int index) const { return items[index]; }
};

#endif
