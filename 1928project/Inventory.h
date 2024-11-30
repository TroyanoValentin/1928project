#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"

using namespace std;

class Inventory {
protected:
	string punch = "%========%\n| ������ |\n%========%";
	string pasport = "%=========%\n| ������� |\n%=========%";
	vector <string> inventory = { punch, pasport };
public:
	Inventory() {}
	virtual void InvDo() const = 0;
};

class BaseInv : public Inventory {
public:
	void InvDo() const override {
		cout << "[ �� ������� ��������� ]";
		cout << "\n��� ���������: \n";
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