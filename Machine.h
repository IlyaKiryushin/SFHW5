#pragma once
#include <iostream>​
#include <string>
using namespace std;
namespace Machine
{
    class Snack
    {
    public:
        Snack(string name, int price, long calories);
        void setName(string);
        void setPrice(int);
        void setCalories(long);  
    private: 
        int price;
        long calories;
        string name;
    };
    class SnackSlot
    {
    public:
        SnackSlot(int a);
        void addSnack(Snack* snack);
    private:
        int countSnacks;
        int countFreespace;
    };
    class VendingMachine
    {
    public:
        VendingMachine(int slotCount);
        int getEmptySlotsCount() const;
        void addSlot(SnackSlot* slot);
    private:
        int allSlots;
        int freeSlots;
    };
}