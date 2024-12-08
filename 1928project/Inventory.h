#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Pictures.h"
using namespace std;



class Inventory {
protected:
    string punch = "/========\\\n| ������ |\n\\========/"; //1
    string bonecrasher = "/========\\\n| ������ |\n\\========/"; //2
    string zatochka = "/=========\\\n| ������� |\n\\=========/"; //3
    string rose = "/===========\\\n|  �������  |\n| �De Buff� |\n\\===========/"; //4
    string stick = "/===$===\\\n| �4��4 |\n\\===$===/";
    string knife = "/=====\\\n| ��� |\n\\=====/";

    string fireson = "/--======--\\\n| �������� |\n|  P-1921  |\n\\--======--/";
    string blackwing = "/--======--\\\n| �������� |\n|   L687   |\n\\--======--/";
    string colt = "/--========--\\\n|   �����    |\n| 13Trophies |\n\\--========--/";
    string sf911 = "/--========--\\\n|  ��������  |\n|   SF911    |\n\\--========--/";

    string pasport = "%=========%\n| ������� |\n%=========%";

    string otm1 = "1====*====1\n| ������� |\n1=========1";
    string otm2 = "2==*===*==2\n| ������� |\n2=========2";
    string otm3 = "3=*==*==*=3\n| ������� |\n3=========3";

    string scotch = "%==========%\n| �������� |\n%==========% ";
    string lom = "%=====%\n| ��� |\n%=====%";
    string buff = "%==============%\n| ������� ���� |\n|   �De Buff�  |\n%==============%";
    string glass = "%========%\n| ������ |\n%========%";

    string franckohplant = "+-------------+\n|   ��������  |\n| ������ ���� |\n+-------------+";
    string healing = "+---------+\n| ������� |\n+---------+";

    vector <string> inventory = { punch, pasport, blackwing, scotch, lom, colt, buff, glass, healing, bonecrasher, franckohplant, sf911, zatochka, otm1, rose, otm2, stick, otm3, knife, fireson };
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
            cout << "\t\t\t\t    [ �� ������� ��������� ]\n\n";
            Bag();
            cout << endl << endl;

            string skip = "\n������� [ Enter ] ��� ����������� ";
            UssrStr(skip);
            cin.get();

            Clear();
            cout << "\n��� ���������: \n";
            for (int i = 0; i < inventory.size(); i++) {
                if ((inventory[i] == healing) || (inventory[i] == franckohplant)) {
                    GreenStr(inventory[i]);
                }
                else if ((inventory[i] == punch) || (inventory[i] == bonecrasher) || (inventory[i] == zatochka) || (inventory[i] == rose) || (inventory[i] == knife)) {
                    RedStr(inventory[i]);
                }
                else if ((inventory[i] == fireson) || (inventory[i] == blackwing) || (inventory[i] == colt) || (inventory[i] == sf911)) {
                    CyanStr(inventory[i]);
                }
                else if ((inventory[i] == otm1) || (inventory[i] == otm2) || (inventory[i] == otm3)) {
                    WhiteStr(inventory[i]);
                }
                else if (inventory[i] == stick) {
                    cout << "\033[38;5;57m" << inventory[i] << "\033[0m";
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