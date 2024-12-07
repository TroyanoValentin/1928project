#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Pictures.h"
using namespace std;



class Inventory {
protected:
    string punch = "%========%\n| ������ |\n%========%";

    string pasport = "%=========%\n| ������� |\n%=========%";

    string scotch = "%==========%\n| �������� |\n%==========% ";
    string lom = "%=====%\n| ��� |\n%=====%";
    string buff = "%==============%\n| ������� ���� |\n|   �De Buff�  |\n%==============%";
    string glass = "%========%\n| ������ |\n%========%";

    string healing = "%=========%\n| ������� |\n%=========%";

    vector <string> inventory = { punch, pasport, scotch, lom, buff, glass, healing };
public:
    Inventory() {}
    virtual void InvDo() const = 0;
};

class BaseInv : public Inventory {
public:
    void InvDo() const override {
        try {
            if (inventory.size() == 0) {
                throw inventory;
            }
            cout << "\t\t\t\t    [ �� ������� ��������� ]\n\n" << backpack;
            cout << endl << endl;

            string skip = "\n������� [ Enter ] ��� ����������� ";
            UssrStr(skip);
            cin.get();

            Clear();
            cout << "\n��� ���������: \n";
            for (int i = 0; i < inventory.size(); i++) {
                if (inventory[i] == healing) {
                    GreenStr(inventory[i]);
                }
                else if (inventory[i] == punch) {
                    RedStr(inventory[i]);
                }
                else {
                    YellowStr(inventory[i]);
                }
                cout << "\n";
            }
        }
        catch (...) {
            string error = "\n[ ��� ��������� �� ����� ���� ���� ]\n"; // universal

            [] { cout << "\n[ �� ������� ������ ]" << endl; } ();

            UssrStr(error);
        }

    }
};

class CraftInv : public Inventory {

};

class CheckInv : public Inventory {

};