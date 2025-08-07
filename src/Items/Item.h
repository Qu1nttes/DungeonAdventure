#include<Player.h>
class Item{
public:
    virtual void use(Player& player) = 0;
    virtual std::string GetName() const = 0;
    virtual ~Item() = default;
};

class HealthPotion : public Item{
    void use(Player& palyer) override;
    std::string GetName() const override {return "Health potion";}

};

class Sword : public Item{
public:
    void use(Player& player) override;
    std::string GetName() const override {return "Knight sword";}
};