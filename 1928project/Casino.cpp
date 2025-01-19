
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <limits>


using namespace std;
void displayCards() {
    setlocale(LC_ALL, "Russian");

    cout << " --------- \t\t\t " << " --------- \t\t\t " << " --------- \t\t\t " << " --------- \n";
    cout << "| J       |\t\t\t " << "| 10      |\t\t\t " << "| K       |\t\t\t " << "| Q       |\n";
    cout << "|         |\t\t\t " << "|         |\t\t\t " << "|         |\t\t\t " << "|         |\n";
    cout << "|    S    |\t\t\t " << "|     B   |\t\t\t " << "|     R   |\t\t\t " << "|     P   |\n";
    cout << "|         |\t\t\t " << "|         |\t\t\t " << "|         |\t\t\t " << "|         |\n";
    cout << "|       J |\t\t\t " << "|      10 |\t\t\t " << "|      K  |\t\t\t " << "|      Q  |\n";
    cout << " --------- \t\t\t " << " --------- \t\t\t " << " --------- \t\t\t " << " --------- \n";
}
class SlotMachine {
protected:
    int cesh = 100; // ������
    int mani = 0;   // ������
private:
    vector<char> symbols;

public:
    SlotMachine() {

        symbols = { '@', '#', ',', '^', '&', '*', '?', '<' };
        srand(static_cast<unsigned int>(time(0)));
    }

    char getRandomSymbol() {

        return symbols[rand() % symbols.size()];
    }

    void displayInfo(char a1, char a2, char a3) {

        cout << "|" << a1 << "|" << a2 << "|" << a3 << "|" << endl;
    }

    void play() {

        while (true) {
            int key;
            char a1 = getRandomSymbol();
            char a2 = getRandomSymbol();
            char a3 = getRandomSymbol();
            cout << "������� ����\n";
            cout << "����:\n";
            cout << "1 - ��������� ������\n";
            cout << "2 - ���������� ������\n";
            cout << "3 - �����\n";
            cout << "�������� �����: ";
            cin >> key;
            system("cls");
            cout << endl;
            cout << endl;
            switch (key) {
            case 1:
                cout << "������� �� ������ ��������� - ";
                cin >> mani;
                if (cin.fail() || mani <= 0) {
                    cout << "������������ ����. ������ ������ ���� ������������� ������.\n";
                    break;
                }
                if (mani > cesh) {
                    cout << "������������ ������� ��� ������!\n";
                    break;
                }
                cesh -= mani;
                displayInfo(a1, a2, a3);
                if (a1 == a2 && a2 == a3) {
                    cout << "Big WIN\n";
                    cesh += mani * 2;
                    cout << "�� �������� = " << (mani * 2) << endl;
                }
                else {
                    cout << "�� ���������\n";
                    cout << "�� ��������� = " << mani << endl;
                }
                break;
            case 2:
                cout << "� ��� �������� " << cesh << endl;
                break;
            case 3:
                cout << "����� �� ����. ������� �� ����!\n";
                return;
            default:
                cout << "������������ ����. ����������, �������� �����.\n";
            }
        }
        system("cls");
    }
};

class Ruletca : public SlotMachine {
private:
    vector<string> symbols1;

public:
    Ruletca() {

        symbols1 = { "�������1", "�������2", "�������3", "������25", "������29", "������12", "������18", "�������0" };
        srand(static_cast<unsigned int>(time(0)));
    }

    string getRandomSymbol1() {

        return symbols1[rand() % symbols1.size()];
    }

    void play1() {

        while (true) {
            int key1;
            cout << "        _______\n";
            cout << "      /         \\\n";
            cout << "     |    0      |\n";
            cout << "    /  1   15    \\\n";
            cout << "   |  2        4  |\n";
            cout << "   |  3        2  |\n";
            cout << "   |  25   18    1 |\n";
            cout << "    \\  29  12    /\n";
            cout << "     |           |\n";
            cout << "      \\_________/\n";
            cout << "����:\n";
            cout << "1 - ��������� ������\n";
            cout << "2 - ���������� ������\n";
            cout << "3 - �����\n";
            cout << "�������� �����: ";
            cin >> key1;
            system("cls");
            cout << endl;
            cout << endl;
            if (key1 == 1) {
                cout << "������� �� ������ ��������� - ";
                cin >> mani;
                if (cin.fail() || mani <= 0) {
                    cout << "������������ ����. ������ ������ ���� ������������� ������.\n";
                    continue;
                }
                if (mani > cesh) {
                    cout << "������������ ������� ��� ������!\n";
                    continue;
                }

                cesh -= mani;
                string a4 = getRandomSymbol1();
                cout << "��������� ��������: ";
                for (const auto& symbol : symbols1) {
                    cout << symbol << " ";
                }
                cout << endl;
                cout << "\n�������� ������� ������: ";
                string vubor;
                cin >> vubor;
                cout << "|" << a4 << "|\n";
                if (a4 == vubor) {
                    cout << "Big WIN\n";
                    cesh += mani * 2;
                    cout << "�� �������� = " << (mani * 2) << endl;
                }
                else {
                    cout << "�� ���������\n";
                    cout << "�� ��������� = " << mani << endl;
                }
            }
            else if (key1 == 2) {
                cout << "� ��� �������� " << cesh << endl;
            }
            else if (key1 == 3) {
                cout << "����� �� ����. ������� �� ����!\n";
                return;
            }
            else {
                cout << "������������ ����. ����������, �������� �����.\n";
            }
        }
        system("cls");
    }
};

class A21 : public SlotMachine {
private:
    vector<int> symbols1;

public:
    A21() {
        setlocale(LC_ALL, "Russian");
        symbols1 = { 6, 7, 8, 9, 10, 11, 12, 13, 14 };
        srand(static_cast<unsigned int>(time(0)));
    }

    int getRandomSymbol() {
        setlocale(LC_ALL, "Russian");
        return symbols1[rand() % symbols1.size()];
    }

    void play1() {
        setlocale(LC_ALL, "Russian");
        while (true) {
            int key1;
            cout << endl;
            cout << endl;
            displayCards();
            cout << "����:\n";
            cout << "1 - ��������� ������\n";
            cout << "2 - ���������� ������\n";
            cout << "3 - �����\n";
            cout << "�������� �����: ";
            cin >> key1;
            system("cls");
            cout << endl;
            cout << endl;
            if (key1 == 1) {
                cout << "������� �� ������ ��������� - ";
                cin >> mani;
                if (cin.fail() || mani <= 0) {
                    cout << "������������ ����. ������ ������ ���� ������������� ������.\n";
                    continue;
                }
                if (mani > cesh) {
                    cout << "������������ ������� ��� ������!\n";
                    continue;
                }
                cesh -= mani;
                cout << "����� ��� ����:\n";
                for (const auto& symbol : symbols1) {
                    cout << symbol << " ";
                }
                cout << endl;

                int chetchic = 0;
                while (true) {
                    cout << "1 - ������� �����\n";
                    cout << "2 - ����\n";
                    int vubor;
                    cout << "�������� �����: ";
                    cin >> vubor;

                    if (vubor == 1) {
                        int drawnSymbol = getRandomSymbol();
                        cout << "������ �����: " << drawnSymbol << endl;
                        chetchic += drawnSymbol;
                        cout << "������� ����: " << chetchic << endl;
                        if (chetchic > 21) {
                            cout << "�� ���������, � ��� �������\n";
                            cesh -= mani;
                            break;
                        }
                        if (chetchic == 21) {
                            cout << "�� ��������\n";
                            break;
                        }
                    }
                    if (vubor == 2) {
                        if (chetchic <= 21) {
                            if (chetchic == 21) {
                                cout << "�� ��������, ������ 21\n";
                                cesh += mani * 2;
                                break;
                            }
                            if (chetchic < 21) {
                                cout << "�� ���������, � ��� ������ ��� 21\n";
                                break;
                            }
                            if (chetchic > 21) {
                                cout << "�� ��������� � ��� ������ 21\n";
                                break;
                            }
                        }
                    }
                }
                if (chetchic <= 21) {
                    if (chetchic == 21) {
                        cout << "�� ��������, ������ 21\n";
                        cesh += mani * 2;
                    }
                    else {
                        cout << "�� ���������, � ��� ������ ��� 21\n";
                    }
                }
            }
            if (key1 == 2) {
                cout << "� ��� �������� " << cesh << endl;
            }
            if (key1 == 3) {
                cout << "����� �� ����. ������� �� ����!\n";
                return;
            }
            else {
                cout << "������������ ����. ����������, �������� �����.\n";
            }
        }
        system("cls");
    }
};
int MainCasino() {
    setlocale(LC_ALL, "Russian");
    int key_vubor;
    while (true) {
        cout << "\t\t\t\t\t\tCASINO\n";
        displayCards();
        cout << endl;
        cout << endl;
        cout << "�������� ����:\n";
        cout << "1 - ����-������\n";
        cout << "2 - �������\n";
        cout << "3 - ���\n";
        cout << "4 - �����\n";
        cout << "��� �����: ";
        cin >> key_vubor;
        system("cls");
        cout << endl;
        cout << endl;
        switch (key_vubor) {
        case 1: {
            SlotMachine slot;
            slot.play();
            break;
        }
        case 2: {
            Ruletca rulet;
            rulet.play1();
            break;
        }
        case 3: {
            A21 a21;
            a21.play1();
            break;
        }
        case 4:
            cout << "����� �� ����. ������� �� ����!\n";
            return 0;
        default:
            cout << "������������ ����. ����������, �������� �����.\n";
        }
    }
    return 0;
}
