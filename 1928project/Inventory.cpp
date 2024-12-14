#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Pictures.h"
using namespace std;


class Inventory {
protected:
    // ������� ���
    string punch = "/========\\\n| ������ |\n\\========/"; //1
    string bonecrasher = "/========\\\n| ������ |\n\\========/"; //2
    string zatochka = "/=========\\\n| ������� |\n\\=========/"; //3
    string rose = "/===========\\\n|  �������  |\n| �De Buff� |\n\\===========/"; //4
    string stick = "/===$===\\\n| �4��4 |\n\\===$===/";
    string knife = "/=====\\\n| ��� |\n\\=====/";

    // ������� ���
    string fireson = "/--======--\\\n| �������� |\n|  P-1921  |\n\\--======--/";
    string blackwing = "/--======--\\\n| �������� |\n|   L687   |\n\\--======--/";
    string colt = "/--========--\\\n|   �����    |\n| 13Trophies |\n\\--========--/";
    string sf911 = "/--========--\\\n|  ��������  |\n|   SF911    |\n\\--========--/";
    string nahan = "/--=======--\\\n| ��������  |\n|   NAHAN   |\n\\--=======--/";

    // �����
    string pasport = "%=========%\n| ������� |\n%=========%";

    // �������
    string otm1 = "1====*====1\n| ������� |\n1=========1";
    string otm2 = "2==*===*==2\n| ������� |\n2=========2";
    string otm3 = "3=*==*==*=3\n| ������� |\n3=========3";

    // ���������
    string scotch = "%==========%\n| �������� |\n%==========% ";
    string lom = "%=====%\n| ��� |\n%=====%";
    string buff = "%==============%\n| ������� ���� |\n|   �De Buff�  |\n%==============%";
    string glass = "%========%\n| ������ |\n%========%";

    // ��� ����
    string franckohplant = "+-------------+\n|   ��������  |\n| ������ ���� |\n+-------------+";
    string healing = "+---------+\n| ������� |\n+---------+";

    vector <string> inventory = { punch, pasport, buff, stick, buff, franckohplant };
public:
    Inventory() {}
};

class BaseInv : public Inventory {
public:
    void InvDo() {
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

            string choi = "�������� �������� � ���������:\n[1] - �������� ���������\n[2] - ������� ������� �������\n[3] - �����\n\n��� �����: ";
            YellowStr(choi);
            int vbr1;
            cin >> vbr1;

            cin.ignore();

            UssrStr(skip);
            cin.get();

            Clear();

            if (vbr1 == 1) {
                cout << "\n��� ���������: \n";
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

            }

            if (vbr1 == 3) {
                int vbr2;
                cout << "\n��� �� ������ ���������: \n";
                for (int i = 0; i < inventory.size(); i++) {
                    if (inventory[i] == buff) {
                        cout << "\n[1] - ������� �De Buff�\n";
                    }
                    if (inventory[i] == franckohplant) {
                        cout << "\n[2] - �������\n";
                    }
                    if (inventory[i] == glass && inventory[i] == scotch) {
                        cout << "\n[2] - �������\n";
                    }
                }
                string craft = "\n\n��� �� ������ ���������?\n��� �����: ";
                YellowStr(craft);
                cin >> vbr2;
                cin.ignore();

                UssrStr(skip);
                cin.get();

                Clear();
                if (vbr2 == 1) {
                    cout << "[ �� ��������� ������� ]\n\n";
                    RedStr(rose);
                    cout << "\n�\n";
                    YellowStr(glass);
                    cout << endl;


                    UssrStr(skip);
                    cin.get();

                    Clear();
                    pushUP_rose_glass();
                }
                if (vbr2 == 2) {
                    cout << "[ �� ��������� ������� ]\n\n";
                    GreenStr(healing);
                    cout << endl;


                    UssrStr(skip);
                    cin.get();

                    Clear();
                    pushUP_healing();
                }
                if (vbr2 == 3) {
                    cout << "[ �� ��������� ������� ]\n\n";
                    RedStr(zatochka);
                    cout << endl;


                    UssrStr(skip);
                    cin.get();

                    Clear();
                    pushUP_zatochka();
                }
            }
        }
        catch (...) {
            string error = "\n[ ��� ��������� �� ����� ���� ���� ]\n"; // universal

            [] { cout << "\n[ �� ������� ������ ]" << endl; } ();

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
        if (it1 != inventory.end()) {
            inventory.erase(it1);
        }

        auto it2 = find(inventory.begin(), inventory.end(), valueToRemove2);
        if (it2 != inventory.end()) {
            inventory.erase(it2);
        }
    }
};

class CheckInv : public Inventory {

};