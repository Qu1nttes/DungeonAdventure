#pragma once
#include "Include\Items\Item.h"

class Sword : public Item{
private:
    const int DAMAGE_UP = 15;
public:
    void use(Player& player) override;
    std::string GetName() const override {return "Knight sword";}
    bool isConsumable() const override {return false;}
};