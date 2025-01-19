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
    cout << "[1] - \"96\" � ����������� ��������" << endl;
    cout << "[2] - \"GoodJob\" � ����������� ��������" << endl;
    cout << "[3] - \"HARDCORE\" � ����������� [???]" << endl;
}

void fullServices() {
    int choice;
    int c = 1;

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

        while ((c != 2) && (c != 3)) {
            cout << "\n[96] �������� ��������: \n[1] - �����������\n[2] - ��������\n[3] - ����\n�����: ";
            cin >> c;
            if (c == 1) {
                cout << "\n[ �� ������ ��������� ���� ��������� ]";
                cin.ignore();

                UssrStr(skip);
                cin.get();
                Clear();
                cout << "[ ������ ����� ����������� �� �� �������, ������ ����... ���-�� ���� ������ ������������ ������� ]";
            }
            if (c == 2) {
                cin.ignore();
                cout << "[ �� �������� ���� ����... ���� �� ��� �������? �����, ��� � ������ ������� � ����� ]\n[ � ����� �� ������ ����? ��� ����� ������ ������� ��������... ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
            if (c == 3) {
                cin.ignore();
                cout << "[ �� ������ ���� ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
        }
        break;
    case 2:
        cout << "\n�� ������� ������ \"GoodJob\" � ����������� ��������." << endl;
        cout << "\n��������: ������, ������������ �� ��������� � ���������, ��� ������� ������� ��� ������� ����� �����." << endl;
        cin.ignore();

        UssrStr(skip);
        cin.get();

        while ((c != 2) && (c != 3)) {
            cout << "\n[GoodJob] �������� ��������: \n[1] - �����������\n[2] - ��������\n[3] - ����\n�����: ";
            cin >> c;
            if (c == 1) {
                cout << "\n[ �� ������ ��������� ���� ���������, �� ����� �������� ]";
                cin.ignore();

                UssrStr(skip);
                cin.get();
                Clear();
                cout << "[ ��... ������ �� ��������, ����� ������ ����-�� �������� �� ������� ������� ���� � ����� ������ ]";
            }
            if (c == 2) {
                cin.ignore();
                cout << "[ ������� ���� ����... ���� ����� ������... �� ��� �� ����� ������ �� �������� ����... ]\n[ �� ��� ��� ��� ������ �������... ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
            if (c == 3) {
                cin.ignore();
                cout << "[ �� ������ ���� ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
        }

        break;
    case 3:
        cout << "\n�� ������� ������ \"HARDCORE\" � ����������� ��������." << endl;
        cout << "\n��������: ����������� ������, ������������ ���������� � ������������� ����������� � ��������." << endl;
        cin.ignore();

        UssrStr(skip);
        cin.get();

        while ((c != 2) && (c != 3)) {
            cout << "\n[HARDCORE] �������� ��������: \n[1] - �����������\n[2] - ��������\n[3] - ����\n�����: ";
            cin >> c;
            if (c == 1) {
                cout << "\n[ �� ������ �����������, ���� �� ��� � ���� �� � ���� ����� �������� �������� � ���������� ������� � ����� ����������� ��� � ������� ������ ����� ���� ]";
                cin.ignore();

                UssrStr(skip);
                cin.get();
                Clear();
                cout << "[ ������������ �� ���������, ��� ������ ����� ������ �... ]";
            }
            if (c == 2) {
                cin.ignore();
                cout << "[ ������� � ��� ��������... ������ ����, � ��� ��... �� ����� ���-�� ���� �������, �� ������� ��� �� ������ ]\n[ ��� ���������... �� ��� ���������, ��� �� ������ �� virgin ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
            if (c == 3) {
                cin.ignore();
                cout << "[ �� ������ ���� �� ������ ]\n";
                UssrStr(skip);
                cin.get();
                Clear();
            }
        }

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

void PublicalHouse() {
    cout << "\n[ �� ����� � ��������� ��� ]\n\n";
    fullServices();
}