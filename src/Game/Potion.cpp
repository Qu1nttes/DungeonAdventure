#include "Include/Items/potion/Potion.h"

void HealthPotion::use(Player& player) {
    player.takeDamage(-50);
}
