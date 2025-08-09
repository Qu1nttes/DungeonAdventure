#pragma once
#include "Include\Characters\Character.h"
#include "Include/Game/Inventory.h" 

class Player : public Character{
private:
    std::unique_ptr<Inventory> inventory;
public:
    Player(const std::string& name);
    void attack(Character& target) override;
    void takeDamage(int amount) override;
    void useItem(int index);
};
