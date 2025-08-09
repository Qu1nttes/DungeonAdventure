#include "Include/Characters/Character.h"

Character::Character(const std::string& name, int health, int damage) : name(name), health(health), damage(damage){};
bool Character::isAlive() const {
    return health>0;
}
void Character::takeDamage(int amount){
    Character::health -= amount;
}