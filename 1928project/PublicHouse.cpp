#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Pictures.h"
using namespace std;

string skip = "\n������� [ Enter ] ��� ����������� ";

void showServices() {
    cout << "������ ����� ���������� ����\n" << endl;
    cout << "������:" << endl;
    cout << "1. \"96\" � ����������� ��������" << endl;
    cout << "2. \"GoodJob\" � ����������� ��������" << endl;
    cout << "3. \"HARDCORE\" � ����������� [???]" << endl;
}

void fullServices() {
    int choice;

    showServices();

    cout << "\n������� ����� ������: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "\n�� ������� ������ \"96\" � ����������� ��������." << endl;
        cout << "\n��������: ������ �������� � ���� ������� � ����������� � ��������, ��������������� ���������� ����." << endl;

        cin.ignore();

        UssrStr(skip);
        cin.get();

        Clear();
        break;
    case 2:
        cout << "\n�� ������� ������ \"GoodJob\" � ����������� ��������." << endl;
        cout << "\n��������: ������, ������������ �� ��������� � ���������, ��� ������� ������� ��� ������� ����� �����." << endl;
        cin.ignore();

        UssrStr(skip);
        cin.get();

        Clear();

        break;
    case 3:
        cout << "\n�� ������� ������ \"HARDCORE\" � ����������� ��������." << endl;
        cout << "\n��������: ����������� ������, ������������ ���������� � ������������� ����������� � ��������." << endl;
        cin.ignore();

        UssrStr(skip);
        cin.get();

        Clear();
        break;
    default:
        cout << "\n�������� �����. ����������, ���������� �����." << endl;
        break;
    }
    cin.ignore();

    UssrStr(skip);
    cin.get();

    Clear();
}