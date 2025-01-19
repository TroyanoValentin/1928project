#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Text.h"
#include "Pictures.h"
using namespace std;
class Wallet {
protected:
    int Money_Dollars = 100;
public:
    Wallet() {
        this->Money_Dollars = Money_Dollars;
    }
    void Wallet1() {
        if (Money_Dollars < 70) {
            Money_Dollars++;
        }
        else {
          
        }
    }
};

class WINCHER : public Wallet {
    bool exit_is_WINCHER = 1;
    int choice_shop;
    int choice_shop_product;
    int choice_yes_or_no1;
    int choice_yes_or_no2;
    int choice_yes_or_no3;
    int choice_yes_or_no4;
    int choice_yes_or_no5;
    int choice_yes_or_no6;
    int choice_yes_or_no7;
    int choice_yes_or_no8;
public:
    void WINCHER_() {
        cout << "—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
        cout << "\033[48;2;0;0;255m\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tWINCHER est." << "\033[0m";
        cout << "\n\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t    \033[48;2;255;0;0mАссортимент магазина:\033[0m";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t       \033[38;5;15m\033[48;2;30;30;30mКоличество товаров в магазине: 8\033[0m\033[0m";
        cout << "\n\n\t\t\t\t\t\t\t1)\033[38;2;255;0;255m Чит - Оружие! Палка          \033[0m   \033[38;2;255;225;0m[400 руб.]\033[0m \033[38;2;255;0;255m(донат на карту)\033[0m";
        cout << "\n\t\t\t\t\t\t\t2) Кастет HAIMARS                  \033[38;5;46m[9$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t3) Нож SFN Version 1 (USN Mark 1)  \033[38;5;46m[42$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t4) Пистолет Colt 13Trophies        \033[38;5;46m[100$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t5) Винтовка SF911 Autmnfield       \033[38;5;46m[150$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t6) Револьвер NAHAN                 \033[38;5;46m[25$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t7) Пулемёт Файерсон P-1921         \033[38;5;46m[210$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t8) Пулемёт Blackwing L687          \033[38;5;46m[235$]\033[0m";
        cout << "\n\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";

        while (exit_is_WINCHER = 1) {
            cout << "\n\n\t\t\t\t\t\t\t\033[48;2;0;0;255mВыберите действие\033[0m \n\n\t\t\t\t\t\t\t[1] Уйти \n\t\t\t\t\t\t\t[2] Выбрать товар для покупки\n\n\t\t\t\t\t\t\t\033[48;2;255;0;0mВаш выбор:\033[0m ";
            cin >> choice_shop;
            if (choice_shop == 1) {
                cout << "\n\t\t\t\t\t\t\tДо свидания!\n\n\n\n\n";
                exit_is_WINCHER = 0;
                break;
            }
            else {
                cout << "\n\t\t\t\t\t\t\tЧто вы хотите приобрести? Введите номер товара из списка ассортимента магазина: ";
                cin >> choice_shop_product;
                switch (choice_shop_product) {
                case 1:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Чит - Оружие! Палка» стоимостью 400 рублей. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no1;
                    if (choice_yes_or_no1 == 1) {
                        if (Money_Dollars > 5) {
                            Money_Dollars -= 5;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Чит - Оружие! Палка»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 2:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Кастет HAIMARS» стоимостью 9$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no2;
                    if (choice_yes_or_no2 == 1) {
                        if (Money_Dollars > 9) {
                            Money_Dollars -= 9;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Кастет HAIMARS»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 3:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Нож SFN Version 1 (USN Mark 1)» стоимостью 42$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no3;
                    if (choice_yes_or_no3 == 1) {
                        if (Money_Dollars > 42) {
                            Money_Dollars -= 42;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Нож SFN Version 1 (USN Mark 1)»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 4:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Пистолет Colt 13Trophies» стоимостью 100$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no4;
                    if (choice_yes_or_no4 == 1) {
                        if (Money_Dollars > 100) {
                            Money_Dollars -= 100;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Пистолет Colt 13Trophies»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        } 
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 5:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Винтовка SF911 Autmnfield» стоимостью 150$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no5;
                    if (choice_yes_or_no5 == 1) {
                        if (Money_Dollars > 150) {
                            Money_Dollars -= 150;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Винтовка SF911 Autmnfield»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 6:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Револьвер NAHAN» стоимостью 25$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no6;
                    if (choice_yes_or_no6 == 1) {
                        if (Money_Dollars > 25) {
                            Money_Dollars -= 25;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Револьвер NAHAN»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 7:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Пулемёт Файерсон P-1921» стоимостью 210$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no7;
                    if (choice_yes_or_no7 == 1) {
                        if (Money_Dollars > 210) {
                            Money_Dollars -= 210;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Пулемёт Файерсон P-1921»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 8:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Пулемёт Blackwing L687» стоимостью 235$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no8;
                    if (choice_yes_or_no8 == 1) {
                        if (Money_Dollars > 235) {
                            Money_Dollars -= 235;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Пулемёт Blackwing L687»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                default:
                    cout << "\n\t\t\t\t\t\t\tОшибка! Вероятно, вы опечатались, но у нас нету товара под таким номером в списке ассортимента магазина.";
                    cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                }
            }
        }
    }
};




class HOUR_for_HOME : public Wallet {
    bool exit_is_HOUR_for_HOME = 1;
    int choice_shop1;
    int choice_shop_product1;
    int choice_yes_or_no9;
    int choice_yes_or_no10;
public:
    void HOUR_for_HOME_() {
        cout << "—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
        cout << "\033[48;2;0;0;255m\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tHOUR for HOME" << "\033[0m";
        cout << "\n\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t    \033[48;2;255;0;0mАссортимент магазина:\033[0m";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t       \033[38;5;15m\033[48;2;30;30;30mКоличество товаров в магазине: 2\033[0m\033[0m";
        cout << "\n\t\t\t\t\t\t\t1) Изолента       \033[38;5;46m[2$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t2) Стекло         \033[38;5;46m[1$]\033[0m";
        cout << "\n\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";

        while (exit_is_HOUR_for_HOME = 1) {
            cout << "\n\n\t\t\t\t\t\t\t\033[48;2;0;0;255mВыберите действие\033[0m \n\n\t\t\t\t\t\t\t[1] Уйти \n\t\t\t\t\t\t\t[2] Выбрать товар для покупки\n\n\t\t\t\t\t\t\t\033[48;2;255;0;0mВаш выбор:\033[0m ";
            cin >> choice_shop1;
            if (choice_shop1 == 1) {
                cout << "\n\t\t\t\t\t\t\tДо свидания!\n\n\n\n\n";
                exit_is_HOUR_for_HOME = 0;
                break;
            }
            else {
                cout << "\n\t\t\t\t\t\t\tЧто вы хотите приобрести? Введите номер товара из списка ассортимента магазина: ";
                cin >> choice_shop_product1;
                switch (choice_shop_product1) {
                case 1:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Изолента» стоимостью 2$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no9;
                    if (choice_yes_or_no9 == 1) {
                        if (Money_Dollars > 2) {
                            Money_Dollars -= 2;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Изолента»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 2:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Стекло» стоимостью 1$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no10;
                    if (choice_yes_or_no10 == 1) {
                        if (Money_Dollars > 1) {
                            Money_Dollars -= 1;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Стекло»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                       
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                default:
                    cout << "\n\t\t\t\t\t\t\tОшибка! Вероятно, вы опечатались, но у нас нету товара под таким номером в списке ассортимента магазина.";
                    cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                }
            }
        }
    }
};



class WERLOCK_FARMACY : public Wallet {
    bool exit_is_WERLOCK_FARMACY = 1;
    int choice_shop2;
    int choice_shop_product2;
    int choice_yes_or_no11;
    int choice_yes_or_no12;
    int choice_yes_or_no13;
    int choice_yes_or_no14;
    int choice_yes_or_no15;
    int choice_yes_or_no16;
public:
    void WERLOCK_FARMACY_() {
        cout << "—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
        cout << "\033[48;2;0;0;255m\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tWERLOCK FARMACY" << "\033[0m";
        cout << "\n\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t    \033[48;2;255;0;0mАссортимент магазина:\033[0m";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t       \033[38;5;15m\033[48;2;30;30;30mКоличество товаров в магазине: 6\033[0m\033[0m";
        cout << "\n\t\t\t\t\t\t\t1) Микстура Belladonna             \033[38;5;46m[5$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t2) Таблетки Asp.VENOMUS            \033[38;5;46m[2$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t3) Сироп Mercurios                 \033[38;5;46m[1.5$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t4) Бинт                            \033[38;5;46m[0.9$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t5) Обезболивающие Tetanu           \033[38;5;46m[1.2$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t6) Инъекция Novic                  \033[38;5;46m[2.5$]\033[0m";
        cout << "\n\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";

        while (exit_is_WERLOCK_FARMACY = 1) {
            cout << "\n\n\t\t\t\t\t\t\t\033[48;2;0;0;255mВыберите действие\033[0m \n\n\t\t\t\t\t\t\t[1] Уйти \n\t\t\t\t\t\t\t[2] Выбрать товар для покупки\n\n\t\t\t\t\t\t\t\033[48;2;255;0;0mВаш выбор:\033[0m ";
            cin >> choice_shop2;
            if (choice_shop2 == 1) {
                cout << "\n\t\t\t\t\t\t\tДо свидания!\n\n\n\n\n";
                exit_is_WERLOCK_FARMACY = 0;
                break;
            }
            else {
                cout << "\n\t\t\t\t\t\t\tЧто вы хотите приобрести? Введите номер товара из списка ассортимента магазина: ";
                cin >> choice_shop_product2;
                switch (choice_shop_product2) {
                case 1:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Микстура Belladonna» стоимостью 5$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no11;
                    if (choice_yes_or_no11 == 1) {
                        if (Money_Dollars > 5) {
                            Money_Dollars -= 5;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Микстура Belladonna»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 2:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Таблетки Asp.VENOMUS» стоимостью 2$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no12;
                    if (choice_yes_or_no12 == 1) {
                        if (Money_Dollars > 2) {
                            Money_Dollars -= 2;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Таблетки Asp.VENOMUS»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 3:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Сироп Mercurios» стоимостью 1.5$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no13;
                    if (choice_yes_or_no13 == 1) {
                        if (Money_Dollars > 1.5) {
                            Money_Dollars -= 1.5;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Сироп Mercurios»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 4:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Бинт» стоимостью 0.9$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no14;
                    if (choice_yes_or_no14 == 1) {
                        if (Money_Dollars > 0.9) {
                            Money_Dollars -= 0.9;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Бинт»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 5:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Обезболивающие Tetanu» стоимостью 1.2$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no15;
                    if (choice_yes_or_no15 == 1) {
                        if (Money_Dollars > 1.2) {
                            Money_Dollars -= 1.2;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Обезболивающие Tetanu»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 6:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Инъекция Novic» стоимостью 2.5$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no16;
                    if (choice_yes_or_no16 == 1) {
                        if (Money_Dollars > 2.5) {
                            Money_Dollars -= 2.5;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Инъекция Novic»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                default:
                    cout << "\n\t\t\t\t\t\t\tОшибка! Вероятно, вы опечатались, но у нас нету товара под таким номером в списке ассортимента магазина.";
                    cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                }
            }
        }
    }
};



class Nelegal : public Wallet {
    bool exit_is_Nelegal = 1;
    int choice_shop3;
    int choice_shop_product3;
    int choice_yes_or_no17;
    int choice_yes_or_no18;
    int choice_yes_or_no19;
    int choice_yes_or_no20;
    int choice_yes_or_no21;
    int choice_yes_or_no22;
public:
    void Nelegal_() {
        cout << "—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
        cout << "\033[48;2;0;0;255m\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tНЕЛЕГАЛЬНАЯ ТОРГОВЛЯ" << "\033[0m";
        cout << "\n\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t    \033[48;2;255;0;0mАссортимент магазина:\033[0m";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t       \033[38;5;15m\033[48;2;30;30;30mКоличество товаров в магазине: 6\033[0m\033[0m";
        cout << "\n\t\t\t\t\t\t\t1) Абсент С++С на пляже            \033[38;5;46m[14.48$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t2) Виски Atlantica                 \033[38;5;46m[1.5$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t3) Текила Pablo's                  \033[38;5;46m[1.25$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t4) Вино Impёrium Stol'tzs          \033[38;5;46m[1$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t5) Водка Victory                   \033[38;5;46m[0.7$]\033[0m";
        cout << "\n\t\t\t\t\t\t\t6) Пиво De' Buff                   \033[38;5;46m[0.4$]\033[0m";
        cout << "\n\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";

        while (exit_is_Nelegal = 1) {
            cout << "\n\n\t\t\t\t\t\t\t\033[48;2;0;0;255mВыберите действие\033[0m \n\n\t\t\t\t\t\t\t[1] Уйти \n\t\t\t\t\t\t\t[2] Выбрать товар для покупки\n\n\t\t\t\t\t\t\t\033[48;2;255;0;0mВаш выбор:\033[0m ";
            cin >> choice_shop3;
            if (choice_shop3 == 1) {
                cout << "\n\t\t\t\t\t\t\tДо свидания!\n\n\n\n\n";
                exit_is_Nelegal = 0;
                break;
            }
            else {
                cout << "\n\t\t\t\t\t\t\tЧто вы хотите приобрести? Введите номер товара из списка ассортимента магазина: ";
                cin >> choice_shop_product3;
                switch (choice_shop_product3) {
                case 1:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Абсент С++С на пляже» стоимостью 14.48$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no17;
                    if (choice_yes_or_no17 == 1) {
                        if (Money_Dollars > 14.48) {
                            Money_Dollars -= 14.48;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Абсент С++С на пляже»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 2:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Виски Atlantica» стоимостью 1.5$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no18;
                    if (choice_yes_or_no18 == 1) {
                        if (Money_Dollars > 1.5) {
                            Money_Dollars -= 1.5;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Виски Atlantica»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 3:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Текила Pablo's» стоимостью 1.25$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no19;
                    if (choice_yes_or_no19 == 1) {
                        if (Money_Dollars > 1.25) {
                            Money_Dollars -= 1.25;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Текила Pablo's»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 4:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Вино Impёrium Stol'tzs» стоимостью 1$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no20;
                    if (choice_yes_or_no20 == 1) {
                        if (Money_Dollars > 1) {
                            Money_Dollars -= 1;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Вино Impёrium Stol'tzs»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 5:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Водка Victory» стоимостью 0.7$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no21;
                    if (choice_yes_or_no21 == 1) {
                        if (Money_Dollars > 0.7) {
                            Money_Dollars -= 0.7;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Водка Victory»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                case 6:
                    cout << "\n\t\t\t\t\t\t\tВы выбрали «Пиво De' Buff» стоимостью 0.4$. Вы уверены, что хотите приобрести этот товар? \n\n\t\t\t\t\t\t\t[1] Да\n\t\t\t\t\t\t\t[2] Нет\n\n\t\t\t\t\t\t\tВаш выбор: ";
                    cin >> choice_yes_or_no22;
                    if (choice_yes_or_no22 == 1) {
                        if (Money_Dollars > 0.4) {
                            Money_Dollars -= 0.4;
                            cout << "\n\t\t\t\t\t\t\tУспешно! Вы приобрели «Пиво De' Buff»";
                        }
                        else {
                            cout << "\n\t\t\t\t\t\t\tНедостаточно средств";
                        }
                        cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                    }
                    else {
                        break;
                    }
                    break;
                default:
                    cout << "\n\t\t\t\t\t\t\tОшибка! Вероятно, вы опечатались, но у нас нету товара под таким номером в списке ассортимента магазина.";
                    cout << "\n\n—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————";
                }
            }
        }
    }
};

void StoreWincher() {
    WINCHER obj;
    Wallet* ptr = &obj;
    obj.Wallet1();
    obj.WINCHER_();
}

void StoreHOUR() {
    HOUR_for_HOME obj;
    Wallet* ptr = &obj;
    obj.Wallet1();
    obj.HOUR_for_HOME_();
}

void StoreWERLOCK() {
    WERLOCK_FARMACY obj;
    Wallet* ptr = &obj;
    obj.Wallet1();
    obj.WERLOCK_FARMACY_();
}

void StoreNelegal() {
    Nelegal obj;
    Wallet* ptr = &obj;
    obj.Wallet1();
    obj.Nelegal_();
}