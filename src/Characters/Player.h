#pragma once
#include <Character.h>

class Player : public Character{
private:
    std::unique_ptr<class Inventory> inventory;
public:
    Player(std::string name);
    void useItem(int index);
};
