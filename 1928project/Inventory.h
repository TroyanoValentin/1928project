#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Pictures.h"
using namespace std;


class Inventory {
protected:
    // акхфмхи ани
    string punch = "/========\\\n| йскюйх |\n\\========/"; //1
    string bonecrasher = "/========\\\n| йюярер |\n\\========/"; //2
    string zatochka = "/=========\\\n| гюрнвйю |\n\\=========/"; //3
    string rose = "/===========\\\n|  пнгнвйю  |\n| ⌠De Buff■ |\n\\===========/"; //4
    string stick = "/===$===\\\n| о4кй4 |\n\\===$===/";
    string knife = "/=====\\\n| мнф |\n\\=====/";

    // дюкэмхи ани
    string fireson = "/--======--\\\n| тюиепянм |\n|  P-1921  |\n\\--======--/";
    string blackwing = "/--======--\\\n| акщйбхмц |\n|   L687   |\n\\--======--/";
    string colt = "/--========--\\\n|   йнкэр    |\n| 13Trophies |\n\\--========--/";
    string sf911 = "/--========--\\\n|  бхмрнбйю  |\n|   SF911    |\n\\--========--/";
    string nahan = "/--=======--\\\n| пебнкэеп  |\n|   NAHAN   |\n\\--=======--/";

    // упемэ
    string pasport = "%=========%\n| оюяонпр |\n%=========%";

    // нрлшвйх
    string otm1 = "1====*====1\n| нрлшвйю |\n1=========1";
    string otm2 = "2==*===*==2\n| нрлшвйю |\n2=========2";
    string otm3 = "3=*==*==*=3\n| нрлшвйю |\n3=========3";

    // люрепхюкш
    string scotch = "%==========%\n| хгнкемрю |\n%==========% ";
    string lom = "%=====%\n| кнл |\n%=====%";
    string buff = "%==============%\n| асршкйю охбю |\n|   ⌠De Buff■  |\n%==============%";
    string glass = "%========%\n| ярейкн |\n%========%";

    // дкъ ухкк
    string franckohplant = "+-------------+\n|   пюяремхе  |\n| тпюмжю йную |\n+-------------+";
    string healing = "+---------+\n| кевхкйю |\n+---------+";

    vector <string> inventory = { punch, pasport, buff, stick, buff, franckohplant, scotch, lom };
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
            cout << "\t\t\t\t    [ бш нрйпшкх хмбемрюпэ ]\n\n";
            Bag();
            cout << endl << endl;

            string skip = "\nмюфлхре [ Enter ] дкъ опнднкфемхъ ";
            UssrStr(skip);
            cin.get();

            Clear();

            string choi = "бшаепхре деиярбхе б хмбемрюпе:\n[1] - онйюгюрэ хмбемрюпэ\n[2] - бшапюрэ бедсыхи опедлер\n[3] - йпютр\n[4] - бшунд\n\nбюь бшанп: ";
            YellowStr(choi);
            int vbr1;
            cin >> vbr1;

            cin.ignore();

            UssrStr(skip);
            cin.get();

            Clear();

            if (vbr1 == 1) {
                cout << "\nбюь хмбемрюпэ: \n";
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

                bool craft1 = false;
                bool craft2 = false;
                bool craft3 = false;
                bool craft4 = false;

                int vbr2;
                cout << "\nврн бш лнфере яйпютрхрэ: \n";


                auto it1 = find(inventory.begin(), inventory.end(), buff);
                auto it2 = find(inventory.begin(), inventory.end(), franckohplant);
                auto it3 = find(inventory.begin(), inventory.end(), glass);
                auto it4 = find(inventory.begin(), inventory.end(), scotch);
                auto it5 = find(inventory.begin(), inventory.end(), lom);


                if (it1 != inventory.end()) {
                    cout << "\n[1] - пнгнвйю ⌠De Buff■\n";
                    craft1 = true;
                }
                if (it2 != inventory.end()) {
                    cout << "\n[2] - кевхкйю\n";
                    craft2 = true;
                }

                if ((it3 != inventory.end()) && (it4 != inventory.end())) {
                    cout << "\n[3] - гюрнвйю\n";
                    craft3 = true;
                }

                if ((it5 != inventory.end()) && (it4 != inventory.end())) {
                    cout << "\n[4] - йюярер\n";
                    craft4 = true;
                }

                string craft = "\n\nврн бш унрхре яйпютрхрэ?\nбюь бшанп: ";
                YellowStr(craft);
                cin >> vbr2;
                cin.ignore();

                UssrStr(skip);
                cin.get();

                Clear();

                if (vbr2 == 1) {
                    if (craft1 == false) {
                        cout << "[ щрнцн мер б яохяйе йпютрнб ]\n\n";
                    }
                    else {
                        cout << "[ бш яйпютрхкх опедлер ]\n\n";
                        RedStr(rose);
                        cout << "\n\tх\n";
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
                        cout << "[ щрнцн мер б яохяйе йпютрнб ]\n\n";
                    }
                    else {
                        cout << "[ бш яйпютрхкх опедлер ]\n\n";
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
                        cout << "[ щрнцн мер б яохяйе йпютрнб ]\n\n";
                    }
                    else {
                        cout << "[ бш яйпютрхкх опедлер ]\n\n";
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
                        cout << "[ щрнцн мер б яохяйе йпютрнб ]\n\n";
                    }
                    else {
                        cout << "[ бш яйпютрхкх опедлер ]\n\n";
                        RedStr(bonecrasher);
                        cout << endl;
                        pushUP_bonecrasher();
                    }

                    cin.ignore();
                    UssrStr(skip);
                    cin.get();

                    Clear();
                }
            }
            if (vbr1 == 4) {
                string z = "\n[ бш гюйпшкх хмбермюпэ ]";
                UssrStr(z);
            }
        }
        catch (...) {
            string error = "\n[ бюь хмбемрюпэ ме лнфер ашрэ осяр ]\n"; // universal

            [] { cout << "\n[ ме мюидемш йскюйх ]" << endl; } ();

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
};

class CheckInv : public Inventory {

};