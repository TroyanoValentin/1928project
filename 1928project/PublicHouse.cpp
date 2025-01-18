#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Pictures.h"
using namespace std;

string skip = "\nНАЖМИТЕ [ Enter ] ДЛЯ ПРОДОЛЖЕНИЯ ";

void showServices() {
    cout << "Список услуг публичного дома\n" << endl;
    cout << "Услуги:" << endl;
    cout << "1. \"96\" с неизвестной девушкой" << endl;
    cout << "2. \"GoodJob\" с неизвестной девушкой" << endl;
    cout << "3. \"HARDCORE\" с неизвестным [???]" << endl;
}

void fullServices() {
    int choice;

    showServices();

    cout << "\nВведите номер услуги: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "\nВы выбрали услугу \"96\" с неизвестной девушкой." << endl;
        cout << "\nОписание: Услуга включает в себя общение и развлечение с девушкой, предоставляющей уникальный опыт." << endl;

        cin.ignore();

        UssrStr(skip);
        cin.get();

        Clear();
        break;
    case 2:
        cout << "\nВы выбрали услугу \"GoodJob\" с неизвестной девушкой." << endl;
        cout << "\nОписание: Услуга, направленная на поддержку и мотивацию, где девушка поможет вам достичь ваших целей." << endl;
        cin.ignore();

        UssrStr(skip);
        cin.get();

        Clear();

        break;
    case 3:
        cout << "\nВы выбрали услугу \"HARDCORE\" с неизвестным мужчиной." << endl;
        cout << "\nОписание: Интенсивная услуга, предлагающая уникальные и захватывающие впечатления с партнёром." << endl;
        cin.ignore();

        UssrStr(skip);
        cin.get();

        Clear();
        break;
    default:
        cout << "\nНеверный выбор. Пожалуйста, попробуйте снова." << endl;
        break;
    }
    cin.ignore();

    UssrStr(skip);
    cin.get();

    Clear();
}