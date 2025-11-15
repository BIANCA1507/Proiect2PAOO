#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <iostream>

// Structura simpla pentru un obiect din inventar.
// Numele si cantitatea pot fi copiate prin copiere obisnuita.
struct Item {
    std::string name;
    int quantity;

    Item(const std::string& n = "", int q = 0)
        : name(n), quantity(q) {}

    void print() const {
        std::cout << name << " (" << quantity << ")";
    }
};

#endif
