#pragma once
#include <string>
#include <memory>

class Character{
protected:
    std::string name;
    int health;
    int damage;
public:
    Character (const std::string& name, int health, int damage);
    virtual void attack(Character &target);
    virtual void takeDamage(int amount);
    bool isAlive() const;
    virtual void damageBoost(int damage);
    virtual ~Character() = default;


};