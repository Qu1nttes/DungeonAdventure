#include <Character.h>

class Goblin : public Character{
public:
    Goblin() : Character("Goblin", 50, 10){};
    void attack(Character &target) override;
};

class Dragon : public Character{
public:
    Dragon() : Character("Dragon", 200, 30){};
    void attack(Character &target) override;
};