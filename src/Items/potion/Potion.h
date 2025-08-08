#pragma once
#include "Item.h"
class HealthPotion : public Item{
    void use(Player& palyer) override;
    std::string GetName() const override {return "Health potion";}
    bool isConsumable() const override {return true;}
};