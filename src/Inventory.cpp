#include "Inventory.hpp"
#include <iostream>

// Constructor
Inventory::Inventory(int count)
    : itemCount(count)
{
    if (itemCount > 0)
        items = new Item[itemCount];
    else
        items = nullptr;
}

// Destructor
Inventory::~Inventory() {
    delete[] items;
}

// Copy constructor (deep copy)
Inventory::Inventory(const Inventory& other)
    : itemCount(other.itemCount)
{
    if (itemCount > 0) {
        items = new Item[itemCount];
        for (int i = 0; i < itemCount; ++i) {
            items[i] = other.items[i];
        }
    } else {
        items = nullptr;
    }
}

// Copy assignment operator
Inventory& Inventory::operator=(const Inventory& rhs) {
    Item* newItems = nullptr;
    int   newCount = rhs.itemCount;

    if (newCount > 0) {
        newItems = new Item[newCount];
        for (int i = 0; i < newCount; ++i) {
            newItems[i] = rhs.items[i];
        }
    }

    delete[] items;

    items = newItems;
    itemCount = newCount;

    return *this;
}


void Inventory::print() const {
    for (int i = 0; i < itemCount; ++i) {
        items[i].print();
        if (i != itemCount - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}

void Inventory::setItem(int index, const std::string& name, int quantity) {
    if (index >= 0 && index < itemCount) {
        items[index].name = name;
        items[index].quantity = quantity;
    }
}
