//Casino
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>

using namespace std;

class SlotMachine {
protected:
    int cesh = 100; // Баланс
    int mani = 0;   // Ставка
private:
    vector<char> symbols;
public:
    SlotMachine() {
        symbols = { '@', '#', '$', '^', '&', '*', '?', '<' };
        srand(static_cast<unsigned int>(time(0)));
    }

    char getRandomSymbol() {
        return symbols[rand() % symbols.size()];
    }

    void displayInfo(char a1, char a2, char a3) {
        cout << "|" << a1 << "|" << a2 << "|" << a3 << "|" << endl;
    }

    void play() {
        int key;
        char a1 = getRandomSymbol();
        char a2 = getRandomSymbol();
        char a3 = getRandomSymbol();
        while (true) { 
            cout << "Игровой слот\n";
            cout << "Меню:\n";
            cout << "1 - Поставить ставку\n";
            cout << "2 - Посмотреть баланс\n";
            cout << "3 - Выход\n";
            cout << "Выберите опцию: ";
            cin >> key;
            switch (key) {
            case 1:
                cout << "Сколько вы хотите поставить - ";
                cin >> mani;
                if (cin.fail() || mani <= 0) {
                    cout << "Некорректный ввод. Ставка должна быть + числом.\n";
                    break;
                }
                if (mani > cesh) {
                    cout << "Недостаточно средств для ставки!\n";
                    break;
                }
                cesh -= mani;
                displayInfo(a1, a2, a3);
                if (a1 == a2 && a2 == a3) {
                    cout << "Big WIN\n";
                    cesh += mani * 2; 
                    cout << "Вы выиграли = " << (mani * 2) << endl;
                }
                else {
                    cout << "Вы проиграли\n";
                    cout << "Вы проиграли = " << mani << endl;
                }
                break;

            case 2:
                cout << "У вас осталось " << cesh << endl;
                break;

            case 3:
                exit(0);

            default:
                cout << "Некорректный ввод. Пожалуйста, выберите снова.\n";
            }
        }
    }
};
//слот
class Ruletca : public SlotMachine {
private:
    vector<string> symbols1;
public:
    Ruletca() {
        symbols1 = { "Красный 1", "Красный 2", "Красный 3", "Черный 1", "Черный 2", "Черный 3", "Зеленый 0" };
        srand(static_cast<unsigned int>(time(0)));
    }

    string getRandomSymbol1() {
        return symbols1[rand() % symbols1.size()];
    }

    void displayInfo1(string a4) {
        cout << "|" << a4 << "|" << endl;
    }

    void play1() {
        int keyy;
        while (true) {
            cout << "        _______\n";
            cout << "      /         \\\n";
            cout << "     |    0      |\n";
            cout << "    /  32  15    \\\n";
            cout << "   |  19        4  |\n";
            cout << "   |  21        2  |\n";
            cout << "   |  25   18    7 |\n";
            cout << "    \\  29  12    /\n";
            cout << "     |    3      |\n";
            cout << "      \\_________/\n";
            cout << "Меню:\n";
            cout << "1 - Поставить ставку\n";
            cout << "2 - Посмотреть баланс\n";
            cout << "3 - Выход\n";
            cout << "Выберите опцию: ";
            cin >> keyy;
            switch (keyy) {
            case 4:
                cout << "Сколько вы хотите поставить - ";
                cin >> mani;
                if (cin.fail() || mani <= 0) {
                    cout << "Некорректный ввод. Ставка должна быть + числом.\n";
                    break;
                }
                if (mani > cesh) {
                    cout << "Недостаточно средств для ставки!\n";
                    break;
                }
                cesh -= mani;
                string a4 = getRandomSymbol1();
                cout << "Доступные варианты: ";
                for (const auto& symbol : symbols1) {
                    cout << symbol << " ";
                }
                cout << "\nВыберите вариант ставки: ";
                string vubor;
                getline(cin, vubor);
                displayInfo1(a4);
                if (a4 == vubor) {
                    cout << "Big WIN\n";
                    cesh += mani * 2;
                    cout << "Вы выиграли = " << (mani * 2) << endl;
                }
                else {
                    cout << "Вы проиграли\n";
                    cout << "Вы проиграли = " << mani << endl;
                }
                break;
            case 2:
                cout << "У вас осталось " << cesh << endl;
                break;

            case 3:
                exit(0);
            default:
                cout << "Некорректный ввод. Пожалуйста, выберите снова.\n";
            }
        }
    }
};
//рулетка
class A21 : public SlotMachine {
private:
    vector<int> symbols2;
public:
    A21() {
        symbols2 = { 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 };
        srand(static_cast<unsigned int>(time(0)));
    }
    int getRandomSymbol2() {
        return symbols2[rand() % symbols2.size()];
    }

    void displayInfo2(int a5) {
        cout << "|" << a5 << "|" << endl;
    }
    void play2() {
        while (true) {
            cout << " --------- \t " << " --------- \n";
            cout << "| A       |\t " << "| K       |\n";
            cout << "|         |\t " << "|         |\n";
            cout << "|    ♥    |\t " << "|     ♣   |\n";
            cout << "|         |\t " << "|         |\n";
            cout << "|       A |\t " << "|       K |\n";
            cout << " --------- \t " << " --------- \n";
            cout << "Меню:\n";
            cout << "1 - Поставить ставку\n";
            cout << "2 - Посмотреть баланс\n";
            cout << "3 - Выход\n";
            cout << "Выберите опцию: ";

};
int main() {
    setlocale(LC_ALL, "Russian");
    SlotMachine slotMachine;
    slotMachine.play();

    Ruletca ruletca;
    ruletca.play1();

}
