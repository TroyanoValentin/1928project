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
    cout << "[1] - \"96\" с неизвестной девушкой" << endl;
    cout << "[2] - \"GoodJob\" с неизвестной девушкой" << endl;
    cout << "[3] - \"HARDCORE\" с неизвестным [???]" << endl;
}

void fullServices() {
    int choice;
    int c = 1;

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

        while ((c != 2) && (c != 3)) {
            cout << "\n[96] Выберите действие: \n[1] - Осмотреться\n[2] - Окончить\n[3] - Уйти\nВыбор: ";
            cin >> c;
            if (c == 1) {
                cout << "\n[ Вы решили осмотреть ваше положение ]";
                cin.ignore();

                UssrStr(skip);
                cin.get();
                Clear();
                cout << "[ Ничего особо интересного вы не увидели, только лишь... что-то лишь слешка напоминавшее монстра ]";
            }
            if (c == 2) {
                cin.ignore();
                cout << "[ Вы окончили свои дела... Было ли вам приятно? Очень, как в старые времена с женой ]\n[ А стоит ли измена того? Вас очень сильно терзают сомнения... ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
            if (c == 3) {
                cin.ignore();
                cout << "[ Вы просто ушли ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
        }
        break;
    case 2:
        cout << "\nВы выбрали услугу \"GoodJob\" с неизвестной девушкой." << endl;
        cout << "\nОписание: Услуга, направленная на поддержку и мотивацию, где девушка поможет вам достичь ваших целей." << endl;
        cin.ignore();

        UssrStr(skip);
        cin.get();

        while ((c != 2) && (c != 3)) {
            cout << "\n[GoodJob] Выберите действие: \n[1] - Осмотреться\n[2] - Окончить\n[3] - Уйти\nВыбор: ";
            cin >> c;
            if (c == 1) {
                cout << "\n[ Вы решили осмотреть ваше положение, во время процесса ]";
                cin.ignore();

                UssrStr(skip);
                cin.get();
                Clear();
                cout << "[ Вы... ничего не заметили, особо трудно кого-то заметить за высокой стенкой лишь с одной дыркой ]";
            }
            if (c == 2) {
                cin.ignore();
                cout << "[ Окончив свои дела... Было очень влажно... Но вам от этого больше не хотелось жить... ]\n[ Ну или вам это только кажется... ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
            if (c == 3) {
                cin.ignore();
                cout << "[ Вы просто ушли ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
        }

        break;
    case 3:
        cout << "\nВы выбрали услугу \"HARDCORE\" с неизвестным мужчиной." << endl;
        cout << "\nОписание: Интенсивная услуга, предлагающая уникальные и захватывающие впечатления с партнёром." << endl;
        cin.ignore();

        UssrStr(skip);
        cin.get();

        while ((c != 2) && (c != 3)) {
            cout << "\n[HARDCORE] Выберите действие: \n[1] - Осмотреться\n[2] - Окончить\n[3] - Уйти\nВыбор: ";
            cin >> c;
            if (c == 1) {
                cout << "\n[ Вы решили осмотреться, ведь на вас с того ни с сего напал злостный Шварцман в вульгарном костюме и начал привязывать вас к кровати против вашей воли ]";
                cin.ignore();

                UssrStr(skip);
                cin.get();
                Clear();
                cout << "[ Осмотревшись вы понимаете, что сейчас будет полная ж... ]";
            }
            if (c == 2) {
                cin.ignore();
                cout << "[ Окончив в вас Шварцмен... Просто ушел, а как же... Не успев что-то даже сказать, вы увидили как он уходит ]\n[ Вас развязали... Но вас волновало, что вы больше не virgin ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
            if (c == 3) {
                cin.ignore();
                cout << "[ Вы просто ушли от страха ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
        }

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

void PublicalHouse() {
    cout << "\n[ Вы вошли в ПУБЛИЧНЫЙ ДОМ ]\n\n";
    fullServices();
}