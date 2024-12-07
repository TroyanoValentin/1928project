#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Pictures.h"
using namespace std;



class Inventory {
protected:
    string punch = "/========\\\n|  ”À¿ » |\n\\========/"; //1
    string bonecrasher = "/========\\\n|  ¿—“≈“ |\n\\========/"; //2
    string zatochka = "/=========\\\n| «¿“Œ◊ ¿ |\n\\=========/"; //3
    string rose = "/===========\\\n|  –Œ«Œ◊ ¿  |\n| ìDe Buffî |\n\\===========/"; //4
    string stick = "/=======\\\n| œ4À 4 |\n\\=======/";

    string pasport = "%=========%\n| œ¿—œŒ–“ |\n%=========%";

    string otm1 = "1====*====1\n| Œ“Ã€◊ ¿ |\n1=========1";
    string otm2 = "2==*===*==2\n| Œ“Ã€◊ ¿ |\n2=========2";
    string otm3 = "3=*==*==*=3\n| Œ“Ã€◊ ¿ |\n3=========3";

    string scotch = "%==========%\n| »«ŒÀ≈Õ“¿ |\n%==========% ";
    string lom = "%=====%\n| ÀŒÃ |\n%=====%";
    string buff = "%==============%\n| ¡”“€À ¿ œ»¬¿ |\n|   ìDe Buffî  |\n%==============%";
    string glass = "%========%\n| —“≈ ÀŒ |\n%========%";

    string franckohplant = "+-------------+\n|   –¿—“≈Õ»≈  |\n| ‘–¿Õ÷¿  Œ’¿ |\n+-------------+";
    string healing = "+---------+\n| À≈◊»À ¿ |\n+---------+";

    vector <string> inventory = { punch, pasport, scotch, lom, buff, glass, healing, bonecrasher, franckohplant, zatochka, otm1, rose, otm2, stick, otm3 };
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
            cout << "\t\t\t\t    [ ¬€ Œ“ –€À» »Õ¬≈Õ“¿–‹ ]\n\n";
            Bag();
            cout << endl << endl;

            string skip = "\nÕ¿∆Ã»“≈ [ Enter ] ƒÀﬂ œ–ŒƒŒÀ∆≈Õ»ﬂ ";
            UssrStr(skip);
            cin.get();

            Clear();
            cout << "\n¬¿ÿ »Õ¬≈Õ“¿–‹: \n";
            for (int i = 0; i < inventory.size(); i++) {
                if ((inventory[i] == healing) || (inventory[i] == franckohplant)) {
                    GreenStr(inventory[i]);
                }
                else if ((inventory[i] == punch) || (inventory[i] == bonecrasher) || (inventory[i] == zatochka) || (inventory[i] == rose)) {
                    RedStr(inventory[i]);
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
            string error = "\n[ ¬¿ÿ »Õ¬≈Õ“¿–‹ Õ≈ ÃŒ∆≈“ ¡€“‹ œ”—“ ]\n"; // universal

            [] { cout << "\n[ Õ≈ Õ¿…ƒ≈Õ€  ”À¿ » ]" << endl; } ();

            UssrStr(error);
        }

    }
};

class CraftInv : public Inventory {

};

class CheckInv : public Inventory {

};