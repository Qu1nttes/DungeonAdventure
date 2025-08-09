#include"Include/Items/Weapon/Sword.h"

void Sword::use(Player& player){
    player.damageBoost(Sword::DAMAGE_UP);
}