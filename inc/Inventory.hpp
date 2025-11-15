#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Item.hpp"

class Inventory {
private:
    Item* items;       // pointer catre array-ul alocat dinamic
    int itemCount;     // numarul de elemente

public:
    Inventory(int count = 0);

    ~Inventory();

    Inventory(const Inventory& other);

    Inventory& operator=(const Inventory& rhs);

    void print() const;

    void setItem(int index, const std::string& name, int quantity);

    int getCount() const { return itemCount; }
    const Item& getItem(int index) const { return items[index]; }
};

#endif
