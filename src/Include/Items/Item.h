#pragma once
#include"Include\Characters\Player.h"
class Item{
public:
    virtual void use(Player& player) = 0;
    virtual std::string GetName() const = 0;
    virtual bool isConsumable() const = 0;
    virtual ~Item() = default;
};