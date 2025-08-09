#include "Include\Characters\Player.h"
Player::Player(const std::string& name) : Character(name, 100, 10){};

void Player::attack(Character& target) {
    target.takeDamage(Player::damage);
}

void Player::takeDamage(int amount){
    Player::health -= amount;
}

void Player::useItem(int index){
    
}