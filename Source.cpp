#include "Machine.h"
#include <iostream>​
using namespace std;
int main() {
	Machine::Snack* bounty = new Machine::Snack("Bounty", 50, 490);
	Machine::Snack* snickers = new Machine::Snack("Snickers", 45, 600);
	Machine::SnackSlot* slot = new Machine::SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	Machine::VendingMachine* machine = new Machine::VendingMachine(20 /*Количество слотов для снеков*/);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат
	Machine::SnackSlot* slot1 = new Machine::SnackSlot(10);
	machine->addSlot(slot1);
	Machine::SnackSlot* slot2 = new Machine::SnackSlot(10);
	machine->addSlot(slot2);
	cout <<"Number of empty slots = " << machine->getEmptySlotsCount();// Должно выводить количество пустых слотов для снеков
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}