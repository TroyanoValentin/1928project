#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"

using namespace std;

class Inventory {
protected:
	string punch = "%========%\n|  ”À¿ » |\n%========%";
	string pasport = "%=========%\n| œ¿—œŒ–“ |\n%=========%";
	vector <string> inventory = { punch, pasport };
public:
	Inventory() {}
	virtual void InvDo() const = 0;
};

class BaseInv : public Inventory {
public:
	void InvDo() const override {
		cout << "[ ¬€ Œ“ –€À» »Õ¬≈Õ“¿–‹ ]";
		cout << "\n¬¿ÿ »Õ¬≈Õ“¿–‹: \n";
		for (int i = 0; i < inventory.size(); i++) {
			YellowStr(inventory[i]);
			cout << "\n";
		}
	}
};

class CraftInv : public Inventory {

};

class CheckInv : public Inventory {

};