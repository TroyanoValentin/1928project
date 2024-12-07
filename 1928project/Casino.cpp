#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <limits> 

using namespace std;

class SlotMachine {
protected:
    int cesh = 100; // Баланс
    int mani = 0;   // Ставка
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
            cout << "Игровой слот\n";
            cout << "Меню:\n";
            cout << "1 - Поставить ставку\n";
            cout << "2 - Посмотреть баланс\n";
            cout << "3 - Выход\n";
            cout << "Выберите опцию: ";
            cin >> key;
            system("cls");
            cout << endl;
            cout << endl;
            switch (key) {
            case 1:
                cout << "Сколько вы хотите поставить - ";
                cin >> mani;
                if (cin.fail() || mani <= 0) {
                    cout << "Некорректный ввод. Ставка должна быть положительным числом.\n";
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
                cout << "Выход из игры. Спасибо за игру!\n";
                return;
            default:
                cout << "Некорректный ввод. Пожалуйста, выберите снова.\n";
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
        symbols1 = { "Красный1", "Красный2", "Красный3", "Черный25", "Черный29", "Черный12", "Черный18", "Зеленый0" };
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
            cout << "Меню:\n";
            cout << "1 - Поставить ставку\n";
            cout << "2 - Посмотреть баланс\n";
            cout << "3 - Выход\n";
            cout << "Выберите опцию: ";
            cin >> key1;
            system("cls");
            cout << endl;
            cout << endl;
            if (key1 == 1) {
                cout << "Сколько вы хотите поставить - ";
                cin >> mani;
                if (cin.fail() || mani <= 0) {
                    cout << "Некорректный ввод. Ставка должна быть положительным числом.\n";
                    continue;
                }
                if (mani > cesh) {
                    cout << "Недостаточно средств для ставки!\n";
                    continue;
                }

                cesh -= mani;
                string a4 = getRandomSymbol1();
                cout << "Доступные варианты: ";
                for (const auto& symbol : symbols1) {
                    cout << symbol << " ";
                }
                cout << endl;
                cout << "\nВыберите вариант ставки: ";
                string vubor;
                cin >> vubor;
                cout << "|" << a4 << "|\n";
                if (a4 == vubor) {
                    cout << "Big WIN\n";
                    cesh += mani * 2;
                    cout << "Вы выиграли = " << (mani * 2) << endl;
                }
                else {
                    cout << "Вы проиграли\n";
                    cout << "Вы проиграли = " << mani << endl;
                }
            }
            else if (key1 == 2) {
                cout << "У вас осталось " << cesh << endl;
            }
            else if (key1 == 3) {
                cout << "Выход из игры. Спасибо за игру!\n";
                return;
            }
            else {
                cout << "Некорректный ввод. Пожалуйста, выберите снова.\n";
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
        symbols1 = { 6, 7, 8, 9, 10, 11, 12, 13, 14 }; 
        srand(static_cast<unsigned int>(time(0)));
    }

    int getRandomSymbol() {
        return symbols1[rand() % symbols1.size()];
    }

    void play1() {
        while (true) {
            int key1;
            cout << "Меню:\n";
            cout << "1 - Поставить ставку\n";
            cout << "2 - Посмотреть баланс\n";
            cout << "3 - Выход\n";
            cout << "Выберите опцию: ";
            cin >> key1;
            system("cls");
            cout << endl;
            cout << endl;
            if (key1 == 1) {
                cout << "Сколько вы хотите поставить - ";
                cin >> mani;
                if (cin.fail() || mani <= 0) {
                    cout << "Некорректный ввод. Ставка должна быть положительным числом.\n";
                    continue;
                }
                if (mani > cesh) {
                    cout << "Недостаточно средств для ставки!\n";
                    continue;
                }
                cesh -= mani;
                cout << "Карты для игры:\n";
                for (const auto& symbol : symbols1) {
                    cout << symbol << " ";
                }
                cout << endl;

                int chetchic = 0;
                while (true) {
                    cout << "1 - Достать карту\n";
                    int vubor;
                    cout << "Выберите опцию: ";
                    cin >> vubor;

                    if (vubor == 1) {
                        int drawnSymbol = getRandomSymbol();
                        cout << "Выпала карта: " << drawnSymbol << endl;
                        chetchic += drawnSymbol;
                        cout << "Текущий счёт: " << chetchic << endl; 
                        if (chetchic > 21) {
                            cout << "Вы проиграли, у вас перебор\n";
                            cesh -= mani; 
                            break; 
                        }
                    }
                    else {
                        cout << "Некорректный ввод, попробуйте снова.\n";
                    }
                }
                if (chetchic <= 21) {
                    if (chetchic == 21) {
                        cout << "Вы выиграли, собрав 21\n";
                        cesh += mani * 2;
                    }
                    else {
                        cout << "Вы проиграли, у вас меньше чем 21\n";
                    }
                }
            }
            else if (key1 == 2) {
                cout << "У вас осталось " << cesh << endl;
            }
            else if (key1 == 3) {
                cout << "Выход из игры. Спасибо за игру!\n";
                return;
            }
            else {
                cout << "Некорректный ввод. Пожалуйста, выберите снова.\n";
            }
        }
        system("cls");
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    int key_vubor;
    while (true) {
        cout << "\t\t\t\t\t\t\t\t\t\tCASINO\n";
        cout << "Выберите игру:\n";
        cout << "1 - Слот-машина\n";
        cout << "2 - Рулетка\n";
        cout << "3 - Игра 21\n";
        cout << "4 - Выход\n";
        cout << "Ваш выбор: ";
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
            cout << "Выход из игры. Спасибо за игру!\n";
            return 0;
        default:
            cout << "Некорректный ввод. Пожалуйста, выберите снова.\n";
        }
    }
    return 0;
}
