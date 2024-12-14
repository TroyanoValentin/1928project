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
    string stick = "/===$===\\\n| œ4À 4 |\n\\===$===/";
    string knife = "/=====\\\n| ÕŒ∆ |\n\\=====/";

    string fireson = "/--======--\\\n| ‘¿…≈–—ŒÕ |\n|  P-1921  |\n\\--======--/";
    string blackwing = "/--======--\\\n| ¡À› ¬»Õ√ |\n|   L687   |\n\\--======--/";
    string colt = "/--========--\\\n|    ŒÀ‹“    |\n| 13Trophies |\n\\--========--/";
    string sf911 = "/--========--\\\n|  ¬»Õ“Œ¬ ¿  |\n|   SF911    |\n\\--========--/";
    string nahan = "/--=======--\\\n| –≈¬ŒÀ‹≈–  |\n|   NAHAN   |\n\\--=======--/";

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

    vector <string> inventory = { punch, pasport };
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

            string choi = "¬€¡≈–»“≈ ƒ≈…—“¬»≈ ¬ »Õ¬≈Õ“¿–≈:\n[1] - œŒ ¿«¿“‹ »Õ¬≈Õ“¿–‹\n[2] - ¬€¡–¿“‹ ¬≈ƒ”Ÿ»… œ–≈ƒÃ≈“\n[3] -  –¿‘“\n\n¬¿ÿ ¬€¡Œ–: ";
            YellowStr(choi);
            int vbr1;
            cin >> vbr1;

            cin.ignore();

            UssrStr(skip);
            cin.get();

            Clear();

            if (vbr1 == 1) {
                cout << "\n¬¿ÿ »Õ¬≈Õ“¿–‹: \n";
                for (int i = 0; i < inventory.size(); i++) {
                    if ((inventory[i] == healing) || (inventory[i] == franckohplant)) {
                        GreenStr(inventory[i]);
                    }
                    else if ((inventory[i] == punch) || (inventory[i] == bonecrasher) || (inventory[i] == zatochka) || (inventory[i] == rose) || (inventory[i] == knife)) {
                        RedStr(inventory[i]);
                    }
                    else if ((inventory[i] == fireson) || (inventory[i] == blackwing) || (inventory[i] == colt) || (inventory[i] == sf911) || (inventory[i] == nahan)) {
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
            if (vbr1 == 2) {

            }

            if (vbr1 == 3) {
                int vbr2;
                cout << "\n◊“Œ ¬€ ÃŒ∆≈“≈ — –¿‘“»“‹: \n";
                for (int i = 0; i < inventory.size(); i++) {
                    if (inventory[i] == buff) {
                        cout << "\n[1] - –Œ«Œ◊ ¿ ìDe Buffî\n";
                    }
                }
                string craft = "\n\n◊“Œ ¬€ ’Œ“»“≈ — –¿‘“»“‹?\n¬¿ÿ ¬€¡Œ–: ";
                YellowStr(craft);
                cin >> vbr2;
                cin.ignore();

                UssrStr(skip);
                cin.get();

                Clear();
                if (vbr2 == 1) {
                    cout << "[ ¬€ — –¿‘“»À» œ–≈ƒÃ≈“ ]\n";
                    RedStr(rose);
                    cout << "\n»\n";
                    YellowStr(glass);
                    cout << endl;

                }
            }
        }
        catch (...) {
            string error = "\n[ ¬¿ÿ »Õ¬≈Õ“¿–‹ Õ≈ ÃŒ∆≈“ ¡€“‹ œ”—“ ]\n"; // universal

            [] { cout << "\n[ Õ≈ Õ¿…ƒ≈Õ€  ”À¿ » ]" << endl; } ();

            UssrStr(error);
        }

    }
};

class CheckInv : public Inventory {

};