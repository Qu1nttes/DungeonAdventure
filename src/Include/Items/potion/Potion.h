#pragma once
#include "Include\Items\Item.h"
class HealthPotion : public Item{
    void use(Player& player) override;
    std::string GetName() const override {return "Health potion";}
    bool isConsumable() const override {return true;}
};