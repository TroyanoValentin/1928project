#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"

using namespace std;

class Inventory {
protected:
	vector <string> inventory = { " ”À¿ »", "œ¿—œŒ–“" };
public:
	Inventory() {}
	virtual void InvDo() const = 0;
};

class BaseInv : public Inventory {
public:
	void InvDo() const override {
		cout << "[ ¬€ Œ“ –€À» »Õ¬≈Õ“¿–‹ ]";
		cout << "\n¬¿ÿ »Õ¬≈Õ“¿–‹: ";
		for (int i = 0; i < inventory.size(); i++) {
			cout << "[" << inventory[i] << "] ";
		}
	}
};

class CraftInv : public Inventory {

};

class CheckInv : public Inventory {

};