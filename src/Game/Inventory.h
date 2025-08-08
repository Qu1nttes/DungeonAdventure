#pragma once
#include "Items/Item.h"
#include <vector>
#include <memory>

class Inventory{
private:
    std::unique_ptr<Item> items;
public:
    void addItem(std::unique_ptr<Item> item);
    void removeItem(int index);
    void printInventory() const;
};