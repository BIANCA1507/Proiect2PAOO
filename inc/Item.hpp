#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <iostream>

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
