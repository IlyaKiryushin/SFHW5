#include "Machine.h"
#include <iostream>​
#include <string>
using namespace std;
namespace Machine
{
    Snack::Snack(string name, int price, long calories)
    {
        this->name = name;
        this->price = price;
        this->calories = calories;
    }
    void Snack::setName(string value)
    {
        name = value;
    }
    void Snack::setPrice(int value)
    {
        price = value;
    }
    void Snack::setCalories(long value)
    {
        calories = value;
    }   
        SnackSlot::SnackSlot(int a)
    {
        countFreespace = a;
    }
    void SnackSlot::addSnack(Snack* snack)
    {
        countSnacks + 1;
        countFreespace - 1;
    }
    VendingMachine::VendingMachine(int slotCount)
    {
        allSlots = slotCount;
        freeSlots = slotCount - allSlots;
    }
    int VendingMachine::getEmptySlotsCount() const
    {
        return freeSlots;
    }
    void VendingMachine::addSlot(SnackSlot* slot)
    {
        freeSlots = allSlots - 1;
        allSlots = allSlots - 1;
    }
}