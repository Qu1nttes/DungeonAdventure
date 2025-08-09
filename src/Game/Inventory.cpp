#include "Include/Game/Inventory.h"
#include <iostream>
void Inventory::addItem(std::unique_ptr<Item> item){
    Inventory::items.push_back(std::make_unique<Item> (item));
}

void Inventory::removeItem(int index){
    auto iterator = Inventory::items.begin();
    iterator += index;
    Inventory::items.erase(iterator);
}

void Inventory::printInventory() const{
    for(int i = 0; i < Inventory::items.size(); ++i){
        std::cout<<Inventory::items[i]->GetName()<<std::endl;
    }
}
std::unique_ptr<Item> Inventory::GetItemOfIndex (int index){
    return std::make_unique<Item> (Inventory::items[index]);

}
