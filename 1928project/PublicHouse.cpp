#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
#include "Inventory.h"

using namespace std;

class PublicHouse {
protected:
	double dollars;
public:
	PublicHouse() {}
	virtual void Service() const = 0;
};

class s96 : public PublicHouse {
	void Service() const override {
		string sex_with = "����������� ������� [???]"; // ����������� ������� [???] / ����������� ������� [???]
	}
};

class sGoodJob : public PublicHouse {
	void Service() const override {
		string sex_with = "����������� ������� [???]"; // ����������� ������� [???] / ����������� ������� [???]
	}
};

class sHardCore : public PublicHouse {
	void Service() const override {
		string sex_with = "����������� �������[???]"; // ����������� ������� [???] / ����������� ������� [???]
	}
};

void NoNameWoman96() {
	cout << "\n[ �� ����� �������� �� ������ ��������� ������� ��� ����, ]\n [ �� ����� ������ ������ ����� ������ �� �� ������� ]\n";
}

void NoNameWomanGJ() {
	cout << "\n[ �� ����� �������� �� ������ ��������� ������� ����� ����, ]\n [ �� ����� ������ ������ ����� Ũ ��� �� �� ������� ]\n";
}

void NoNameMan() {
	cout << "\n[ �� ����� �������� �� ������ ��������� ������� ����� ����, ]\n [ �� ������� ����������� �������� ������� � ר���� ��������� �������  ]\n";
}

class PHdo : public PublicHouse {
	cout << "�� ����� � ��������� ���, ����� ����� �� ������� ��������� � �������� ������� �����.\n�� ����� ������, ��� �� ��� ��� ������� ���-�� ������ � �������������� ������� ����������� ���������.";
	cout << "\n\n���� ��������:\n[1] - ��������������� �������\n[2] - ����\n\n��� �����: ";
	int vibor;
	cin >> vibor;
	switch (vibor) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	}
};