#pragma once
#include "Include\Items\Item.h"
#include <map>


class Shop{
private:
    std::map<std::string, std::shared_ptr<Item>> items;
public:
    Shop();
    void buyItem(Player& player, const std::string& nameItem);
};