#pragma once
#include "Include\Items\Item.h"
#include <vector>
#include <memory>

class Inventory{
private:
    std::vector<std::unique_ptr<Item>> items;
public:
    void addItem(std::unique_ptr<Item> item);
    void removeItem(int index);
    void printInventory() const;
};