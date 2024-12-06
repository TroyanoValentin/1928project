//Casino
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>
#include <cstdlib>
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
            system("cls");
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
    void exit1() const {

    }
};
//слот
class Ruletca : public SlotMachine {
private:
    vector<string> symbols1;
public:
    Ruletca() {
        symbols1 = { "Красный1 ","Красный2","Красный3","Черный25","Черный29","Черный12","Черный18","Зеленый0"};
        srand(static_cast<unsigned int>(time(0)));
    }

    string getRandomSymbol1() {
        return symbols1[rand() % symbols1.size()];
    }

    void displayInfo1(string a4) {
        cout << "|" << a4 << "|" << endl;
    }

    void play1() {
        int key1;
        while (true) {
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
            if (key1 == 1) {
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
                cout << endl;
                cout << endl;
                for (const auto& symbol : symbols1) {
                    cout << symbol << " ";
                }
                cout << endl;
                cout << "\nВыберите вариант ставки: ";
                string vubor;
                cin >> vubor;
                displayInfo1(a4);
                if (a4 == vubor) {
                    cout << "Big WIN\n";
                    cesh += mani * 2;
                    cout << "Вы выиграли = " << (mani * 2) << endl;
                    cout << endl;
                }

                else {
                    cout << "Вы проиграли\n";
                    cout << "Вы проиграли = " << mani << endl;
                    cout << endl;
                }
            }//key == 1
            if (key1 == 2) {
                cout << "У вас осталось " << cesh << endl;
                cout << endl;
            }// key1 == 2
            if (key1 == 3) {
                exit(0);
            }//key1 == 3
            if (key1 != 1 || key1 != 2 || key1 != 3) {
                cout << "Некорректный ввод. Пожалуйста, выберите снова.\n";
                cout << endl;
            }//if
        }
    }
};
//рулетка

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

    void displayInfo1(string a4) {
        cout << "|" << a4 << "|" << endl;
    }
    void play1() {
        int key1;
        while (true) {
            cout << "Меню:\n";
            cout << "1 - Поставить ставку\n";
            cout << "2 - Посмотреть баланс\n";
            cout << "3 - Выход\n";
            cout << "Выберите опцию: ";
            cin >> key1;
            system("cls");
            if (key1 == 1) {
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

                cout << "Карты для игры: \\n\\n";
                for (const auto& symbol : symbols1) {
                    cout << symbol << " ";
                }
                cout << endl;
                cout << "1 - Достать карту\\n";
                cout << "2 - СТОП!\\n";
                int vubor;
                while (true) {
                    cout << "Выберите опцию: ";
                    cin >> vubor;
                    int chetchic;
                    if (vubor == 1) {
                       
                        int drawnSymbol = getRandomSymbol();
                        cout << "Выпала карта: " << drawnSymbol << endl;
                        chetchic += drawnSymbol;
                    }
                     if (vubor == 2) {
                        cout << "Стоп\\n";
                        if (chetchic == 21) {
                            cout << "Вы выйграли собрав 21\n";
                        }
                        if (chetchic < 21) {
                            cout << "Вы проиграли у вас меньше чем 21\n";
                    }
                    else {
                        cout << "Некорректный ввод, попробуйте снова.\\n";
                    }
                     if (chetchic > 21) {
                         cout << "Вы проиграли у вас перебор\n";
                     }
                }
                
            }//key == 1
            if (key1 == 2) {
                cout << "У вас осталось " << cesh << endl;
                cout << endl;
            }// key1 == 2
            if (key1 == 3) {
                exit(0);
            }//key1 == 3
            if (key1 != 1 || key1 != 2 || key1 != 3) {
                cout << "Некорректный ввод. Пожалуйста, выберите снова.\n";
                cout << endl;
            }//if
        }
    }
};
    int main() {
        setlocale(LC_ALL, "Russian");
        int key_vubor;//выбор  игры
        while (true) {
            cout << "\t\t\t\t\t\t\t\t\t\tCASINO\n";
            cout << " --------- \t\t\t " << " --------- \t\t\t " << " --------- \t\t\t " << " --------- \n";
            cout << "| J       |\t\t\t " << "| 10      |\t\t\t " << "| K       |\t\t\t " << "| Q       |\n";
            cout << "|         |\t\t\t " << "|         |\t\t\t " << "|         |\t\t\t " << "|         |\n";
            cout << "|    ♥    |\t\t\t " << "|     ♣   |\t\t\t " << "|     ♦   |\t\t\t " << "|     ♠   |\n";
            cout << "|         |\t\t\t " << "|         |\t\t\t " << "|         |\t\t\t " << "|         |\n";
            cout << "|       J |\t\t\t " << "|      10 |\t\t\t " << "|      K  |\t\t\t " << "|      Q  |\n";
            cout << " --------- \t\t\t " << " --------- \t\t\t " << " --------- \t\t\t " << " --------- \n";
            cout << "Меню:\n";
            cout << "1 - Слоты\n";
            cout << "2 - Рулетка\n";
            cout << "3 - 21\n";
            cout << "Выберите опцию:";
            cin >> key_vubor;
            system("cls");
            cout << endl;
            cout << endl;
            if (key_vubor == 1) {
                SlotMachine slotMachine;
                slotMachine.play();
            }
            if (key_vubor == 2) {
                Ruletca ruletca;
                ruletca.play1();
            }
            if (key_vubor == 3) {
                A21 a21;
                a21.play1();
            }
        }
        return 0;
        }//while
};
