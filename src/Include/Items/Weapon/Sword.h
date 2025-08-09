#pragma once
#include "Include\Items\Item.h"

class Sword : public Item{
public:
    void use(Player& player) override;
    std::string GetName() const override {return "Knight sword";}
    bool isConsumable() const override {return false;}
};