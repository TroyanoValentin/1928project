#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Pictures.h"
using namespace std;


class Inventory {
protected:

    // ¡À»∆Õ»… ¡Œ…
    string punch = "/========\\\n|  ”À¿ » |\n\\========/"; //1

    string bonecrasher = "/========\\\n|  ¿—“≈“ |\n\\========/"; //2
    string zatochka = "/=========\\\n| «¿“Œ◊ ¿ |\n\\=========/"; //3
    string rose = "/===========\\\n|  –Œ«Œ◊ ¿  |\n| ìDe Buffî |\n\\===========/"; //4
    string stick = "/===$===\\\n| œ4À 4 |\n\\===$===/";
    string knife = "/=====\\\n| ÕŒ∆ |\n\\=====/";

    // ƒ¿À‹Õ»… ¡Œ…
    string fireson = "/--======--\\\n| ‘¿…≈–—ŒÕ |\n|  P-1921  |\n\\--======--/";
    string blackwing = "/--======--\\\n| ¡À› ¬»Õ√ |\n|   L687   |\n\\--======--/";
    string colt = "/--========--\\\n|    ŒÀ‹“    |\n| 13Trophies |\n\\--========--/";
    string sf911 = "/--========--\\\n|  ¬»Õ“Œ¬ ¿  |\n|   SF911    |\n\\--========--/";
    string nahan = "/--=======--\\\n| –≈¬ŒÀ‹≈–  |\n|   NAHAN   |\n\\--=======--/";

    // ’–≈Õ‹
    string pasport = "%=========%\n| œ¿—œŒ–“ |\n%=========%";

    // Œ“Ã€◊ »
    string otm1 = "1====*====1\n| Œ“Ã€◊ ¿ |\n1=========1";
    string otm2 = "2==*===*==2\n| Œ“Ã€◊ ¿ |\n2=========2";
    string otm3 = "3=*==*==*=3\n| Œ“Ã€◊ ¿ |\n3=========3";

    // Ã¿“≈–»¿À€
    string scotch = "%==========%\n| »«ŒÀ≈Õ“¿ |\n%==========% ";
    string lom = "%=====%\n| ÀŒÃ |\n%=====%";
    string buff = "%==============%\n| ¡”“€À ¿ œ»¬¿ |\n|   ìDe Buffî  |\n%==============%";
    string glass = "%========%\n| —“≈ ÀŒ |\n%========%";

    // ƒÀﬂ ’»ÀÀ
    string franckohplant = "+-------------+\n|   –¿—“≈Õ»≈  |\n| ‘–¿Õ÷¿  Œ’¿ |\n+-------------+";
    string healing = "+---------+\n| À≈◊»À ¿ |\n+---------+";

    vector <string> inventory = { punch, pasport, buff, stick, buff, franckohplant, scotch, lom };
public:
    string stWpn = punch;
    Inventory() {}
};

class BaseInv : public Inventory {
public:
    void InvDo(bool* sour) {
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

            string choi = "¬€¡≈–»“≈ ƒ≈…—“¬»≈ ¬ »Õ¬≈Õ“¿–≈:\n[1] - œŒ ¿«¿“‹ »Õ¬≈Õ“¿–‹\n[2] - ¬€¡–¿“‹ ¬≈ƒ”Ÿ»… œ–≈ƒÃ≈“\n[3] -  –¿‘“\n[4] - ¬€’Œƒ\n\n¬¿ÿ ¬€¡Œ–: ";
            YellowStr(choi);
            int vbr1;
            cin >> vbr1;

            cin.ignore();

            UssrStr(skip);
            cin.get();

            Clear();

            if (vbr1 == 1) {
                cout << "\nŒÛÊËÂ ‚ ‚Â‰Û˘ÂÈ ÛÍÂ: \n";
                RedStr(stWpn);
                cout << endl << endl;

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
                        cout << "\033[38;2;255;0;255m" << inventory[i] << "\033[0m";
                    }
                    else {
                        YellowStr(inventory[i]);
                    }
                    cout << "\n";
                }
                cout << endl;

                UssrStr(skip);
                cin.get();

                Clear();
            }
            if (vbr1 == 2) {
                cout << "\n¬€¡»–»“≈  ¿ Œ… œ–≈ƒÃ≈“ ’Œ“»“≈ ¬«ﬂ“‹ ¬ –” ”: \n";
                for (int i = 0; i < inventory.size(); i++) {
                    if ((inventory[i] == punch) || (inventory[i] == bonecrasher) || (inventory[i] == zatochka) || (inventory[i] == rose) || (inventory[i] == stick) || (inventory[i] == knife)
                        || (inventory[i] == fireson) || (inventory[i] == blackwing) || (inventory[i] == colt) || (inventory[i] == sf911) || (inventory[i] == nahan)) {
                        RedStr(inventory[i]);
                        cout << "\n";
                    }
                }
                cout << "\n¬¿ÿ ¬€¡Œ–: ";
                string pred;
                cin >> pred;

                if (pred == "kulaki") {
                    stWpn = punch;
                }
                if (pred == "kostet") {
                    stWpn = bonecrasher;
                }
                if (pred == "zatochka") {
                    stWpn = zatochka;
                }
                if (pred == "rosachka") {
                    stWpn = rose;
                }
                if (pred == "palka") {
                    stWpn = stick;
                }
                if (pred == "nozh") {
                    stWpn = knife;
                }
                if (pred == "faerson") {
                    stWpn = fireson;
                }
                if (pred == "blackwing") {
                    stWpn = blackwing;
                }
                if (pred == "colt") {
                    stWpn = colt;
                }
                if (pred == "sf911") {
                    stWpn = sf911;
                }
                if (pred == "nagan") {
                    stWpn = nahan;
                }

                cout << endl;

                UssrStr(skip);
                cin.get();

                Clear();
            }

            if (vbr1 == 3) {

                bool craft1 = false;
                bool craft2 = false;
                bool craft3 = false;
                bool craft4 = false;
                bool craft5 = false;
                bool craft6 = false;

                int vbr2;
                cout << "\n◊“Œ ¬€ ÃŒ∆≈“≈ — –¿‘“»“‹: \n";


                auto it1 = find(inventory.begin(), inventory.end(), buff);
                auto it2 = find(inventory.begin(), inventory.end(), franckohplant);
                auto it3 = find(inventory.begin(), inventory.end(), glass);
                auto it4 = find(inventory.begin(), inventory.end(), scotch);
                auto it5 = find(inventory.begin(), inventory.end(), lom);


                if (it1 != inventory.end()) {
                    cout << "\n[1] - –Œ«Œ◊ ¿ ìDe Buffî\n";
                    craft1 = true;
                }
                if (it2 != inventory.end()) {
                    cout << "\n[2] - À≈◊»À ¿\n";
                    craft2 = true;
                }

                if ((it3 != inventory.end()) && (it4 != inventory.end())) {
                    cout << "\n[3] - «¿“Œ◊ ¿\n";
                    craft3 = true;
                }

                if ((it5 != inventory.end()) && (it4 != inventory.end())) {
                    cout << "\n[4] -  ¿—“≈“\n";
                    craft4 = true;
                }

                if ((it5 != inventory.end()) && (it4 != inventory.end())) {
                    cout << "\n[5] - Œ“Ã€◊ ¿ LVL: 1\n";
                    craft5 = true;
                }

                if ((it5 != inventory.end()) && (it4 != inventory.end()) && (it3 != inventory.end())) {
                    cout << "\n[6] - Œ“Ã€◊ ¿ LVL: 2\n";
                    craft6 = true;
                }

                string craft = "\n\n◊“Œ ¬€ ’Œ“»“≈ — –¿‘“»“‹?\n¬¿ÿ ¬€¡Œ–: ";
                YellowStr(craft);
                cin >> vbr2;
                cin.ignore();

                UssrStr(skip);
                cin.get();

                Clear();

                if (vbr2 == 1) {
                    if (craft1 == false) {
                        cout << "[ ›“Œ√Œ Õ≈“ ¬ —œ»— ≈  –¿‘“Œ¬ ]\n\n";
                    }
                    else {
                        cout << "[ ¬€ — –¿‘“»À» œ–≈ƒÃ≈“ ]\n\n";
                        RedStr(rose);
                        cout << "\n\t»\n";
                        YellowStr(glass);
                        cout << endl;
                        pushUP_rose_glass();
                    }

                    UssrStr(skip);
                    cin.get();

                    Clear();
                }
                if (vbr2 == 2) {
                    if (craft2 == false) {
                        cout << "[ ›“Œ√Œ Õ≈“ ¬ —œ»— ≈  –¿‘“Œ¬ ]\n\n";
                    }
                    else {
                        cout << "[ ¬€ — –¿‘“»À» œ–≈ƒÃ≈“ ]\n\n";
                        GreenStr(healing);
                        cout << endl;
                        pushUP_healing();
                    }

                    UssrStr(skip);
                    cin.get();

                    Clear();
                }
                if (vbr2 == 3) {
                    if (craft3 == false) {
                        cout << "[ ›“Œ√Œ Õ≈“ ¬ —œ»— ≈  –¿‘“Œ¬ ]\n\n";
                    }
                    else {
                        cout << "[ ¬€ — –¿‘“»À» œ–≈ƒÃ≈“ ]\n\n";
                        RedStr(zatochka);
                        cout << endl;
                        pushUP_zatochka();
                    }

                    UssrStr(skip);
                    cin.get();

                    Clear();
                }

                if (vbr2 == 4) {
                    if (craft4 == false) {
                        cout << "[ ›“Œ√Œ Õ≈“ ¬ —œ»— ≈  –¿‘“Œ¬ ]\n\n";
                    }
                    else {
                        cout << "[ ¬€ — –¿‘“»À» œ–≈ƒÃ≈“ ]\n\n";
                        RedStr(bonecrasher);
                        cout << endl;
                        pushUP_bonecrasher();
                    }

                    cin.ignore();
                    UssrStr(skip);
                    cin.get();

                    Clear();
                }

                if (vbr2 == 5) {
                    if (craft5 == false) {
                        cout << "[ ›“Œ√Œ Õ≈“ ¬ —œ»— ≈  –¿‘“Œ¬ ]\n\n";
                    }
                    else {
                        cout << "[ ¬€ — –¿‘“»À» œ–≈ƒÃ≈“ ]\n\n";
                        WhiteStr(otm1);
                        cout << endl;
                        pushUP_Otm1();
                    }

                    cin.ignore();
                    UssrStr(skip);
                    cin.get();

                    Clear();
                }

                if (vbr2 == 6) {
                    if (craft6 == false) {
                        cout << "[ ›“Œ√Œ Õ≈“ ¬ —œ»— ≈  –¿‘“Œ¬ ]\n\n";
                    }
                    else {
                        cout << "[ ¬€ — –¿‘“»À» œ–≈ƒÃ≈“ ]\n\n";
                        WhiteStr(otm2);
                        cout << endl;
                        pushUP_Otm2();
                    }

                    cin.ignore();
                    UssrStr(skip);
                    cin.get();

                    Clear();
                }
            }
            if (vbr1 == 4) {
                string z = "\n[ ¬€ «¿ –€À» »Õ¬≈“Õ¿–‹ ]";
                UssrStr(z);
                *sour = 0;
            }
        }
        catch (...) {
            string error = "\n[ ¬¿ÿ »Õ¬≈Õ“¿–‹ Õ≈ ÃŒ∆≈“ ¡€“‹ œ”—“ ]\n"; // universal

            [] { cout << "\n[ Õ≈ Õ¿…ƒ≈Õ€  ”À¿ » ]" << endl; } ();

            UssrStr(error);
        }

    }

    void pushUP_rose_glass() {
        inventory.push_back(glass);
        inventory.push_back(rose);

        string valueToRemove = buff;

        auto it = find(inventory.begin(), inventory.end(), valueToRemove);
        if (it != inventory.end()) {
            inventory.erase(it);
        }
    }

    void pushUP_healing() {
        inventory.push_back(healing);

        string valueToRemove = franckohplant;

        auto it = find(inventory.begin(), inventory.end(), valueToRemove);
        if (it != inventory.end()) {
            inventory.erase(it);
        }
    }

    void pushUP_zatochka() {
        inventory.push_back(zatochka);

        string valueToRemove1 = glass;
        string valueToRemove2 = scotch;

        auto it1 = find(inventory.begin(), inventory.end(), valueToRemove1);
        auto it2 = find(inventory.begin(), inventory.end(), valueToRemove2);
        if (it1 != inventory.end() && it2 != inventory.end()) {
            inventory.erase(it1);
            inventory.erase(it2);
        }
    }

    void pushUP_bonecrasher() {
        inventory.push_back(bonecrasher);

        string valueToRemove1 = lom;
        string valueToRemove2 = scotch;

        auto it1 = find(inventory.begin(), inventory.end(), valueToRemove1);
        auto it2 = find(inventory.begin(), inventory.end(), valueToRemove2);
        if (it1 != inventory.end() && it2 != inventory.end()) {
            inventory.erase(it1);
            inventory.erase(it2);
        }
    }

    void pushUP_Otm1() {
        inventory.push_back(otm1);

        string valueToRemove1 = lom;
        string valueToRemove2 = scotch;

        auto it1 = find(inventory.begin(), inventory.end(), valueToRemove1);
        auto it2 = find(inventory.begin(), inventory.end(), valueToRemove2);
        if (it1 != inventory.end() && it2 != inventory.end()) {
            inventory.erase(it1);
            inventory.erase(it2);
        }
    }

    void pushUP_Otm2() {
        inventory.push_back(otm2);

        string valueToRemove1 = lom;
        string valueToRemove2 = scotch;
        string valueToRemove3 = glass;

        auto it1 = find(inventory.begin(), inventory.end(), valueToRemove1);
        auto it2 = find(inventory.begin(), inventory.end(), valueToRemove2);
        auto it3 = find(inventory.begin(), inventory.end(), valueToRemove3);
        if (it1 != inventory.end() && it2 != inventory.end() && it3 != inventory.end()) {
            inventory.erase(it1);
            inventory.erase(it2);
        }
    }
};

class CheckInv : public Inventory {
    // ”–Õ€, ﬂŸ» », «¿–Œ—ÿ»≈ ”√À€
/*
”–Õ€: ÀŒÃ, —“≈ ÀŒ, ¡”“€À ¿ œ»¬¿ ìDe Buffî
ﬂŸ» »: ÀŒÃ, —“≈ ÀŒ, »«ŒÀ≈Õ“¿, ÕŒ∆
«¿–Œ—ÿ»≈ ”√À€: –¿—“≈Õ»≈ ‘–¿Õ÷¿  Œ’¿
 ŒÕ≈÷ À¿¡»–»Õ“¿: œ¿À ¿ (◊»“)
*/
public:
    void ChUrn() {
        srand(time(NULL));
        string OpisGroup = "\n[ ¬˚ Â¯ËÎË ÓÒÏÓÚÂÚ¸ ”–Õ” ]\n[ ¬ ”–Õ≈ ‚˚ Ì‡¯ÎË ]:\n";
        YellowStr(OpisGroup);
        int r = rand() % 5;
        if (r == 3) {
            cout << "\n";
            YellowStr(lom);
            cout << "\n";
            inventory.push_back(franckohplant);
        }
        else if (r == 4) {
            cout << "\n";
            YellowStr(glass);
            cout << "\n";
            inventory.push_back(glass);
        }
        else if (r == 5) {
            cout << "\n";
            YellowStr(buff);
            cout << "\n";
            inventory.push_back(buff);
        }
        else {
            string nol = "\n[x] Õ » ◊ ≈ √ Œ [x]";
            UssrStr(nol);
        }
        cout << "\n\n[  ŒÕ≈÷ Œ¡€— ¿ ]" << endl;
    }
    void ChBox() {
        srand(time(NULL));
        string OpisGroup = "\n[ ¬˚ Â¯ËÎË ÓÒÏÓÚÂÚ¸ ﬂŸ» ]\n[¬ ﬂŸ» ≈ ‚˚ Ì‡¯ÎË ]:\n";
        int r = rand() % 5;
        PurpleStr(OpisGroup);
        if (r == 3) {
            cout << "\n";
            YellowStr(lom);
            cout << "\n";
            inventory.push_back(franckohplant);
        }
        if (r == 4) {
            cout << "\n";
            YellowStr(glass);
            cout << "\n";
            inventory.push_back(glass);
        }
        if (r == 5) {
            cout << "\n";
            RedStr(knife);
            cout << "\n";
            inventory.push_back(knife);
        }
        else {
            string nol = "\n[x] Õ » ◊ ≈ √ Œ [x]";
            UssrStr(nol);
        }
        cout << "\n\n[  ŒÕ≈÷ Œ¡€— ¿ ]" << endl;
    }
    void ChWalls() {
        srand(time(NULL));
        string OpisGroup = "\n[ ¬˚ Â¯ËÎË ÓÒÏÓÚÂÚ¸ «¿–Œ—ÿ»… ”√ŒÀ]\n[¬ «¿–Œ—ÿ≈Ã ”√À” ‚˚ Ì‡¯ÎË ]:\n";
        GreenStr(OpisGroup);
        int r = rand() % 1;
        if (r == 0) {
            string nol = "\n[x] Õ » ◊ ≈ √ Œ [x]";
            UssrStr(nol);
        }
        else {
            cout << "\n";
            GreenStr(franckohplant);
            cout << "\n";
            inventory.push_back(franckohplant);

        }
        cout << "\n\n[  ŒÕ≈÷ Œ¡€— ¿ ]" << endl;
    }
    void ChLab() {
        string OpisGroup = "\n[ ¬˚ Û‚Ë‰ÂÎË ÙËÓÎÂÚÓ‚˚È Ò‚ÂÚ ‚ À¿¡»–»Õ“≈]\n[¬ À¿¡»–»Õ“≈ ‚˚ Ì‡¯ÎË ]:\n";
        GreenStr(OpisGroup);
        cout << "\033[38;2;255;0;255m" << stick << "\033[0m";
        inventory.push_back(stick);
    }
};

void DoAllInv() {

    bool* sour1 = nullptr;
    sour1 = new bool;
    *sour1 = true;

    BaseInv inv;
    Inventory* ptr1 = &inv;
    while (*sour1 == true) {
        inv.InvDo(sour1);
    }
}

void CheckInvUrn() {
    CheckInv inv1;
    Inventory* ptr2 = &inv1;
    inv1.ChUrn();
}

void CheckInvBox() {
    CheckInv inv2;
    Inventory* ptr3 = &inv2;
    inv2.ChBox();
}

void CheckInvWalls() {
    CheckInv inv3;
    Inventory* ptr4 = &inv3;
    inv3.ChWalls();
}

void CheckInvLab() {
    CheckInv inv4;
    Inventory* ptr5 = &inv4;
    inv4.ChLab();
}