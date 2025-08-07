#pragma once
#include <string>
#include <memory>

class Character{
protected:
    std::string name;
    int health;
    int damage;
public:
    Character (std::string name, int health, int damage);
    virtual void attack(Character &target);
    virtual void takeDamage(int amount);
    bool isAlive() const;
    virtual ~Character() = default;


};