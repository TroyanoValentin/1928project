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
		string sex_with = "мехгбеярмюъ фемыхмю [???]"; // мехгбеярмюъ фемыхмю [???] / мехгбеярмши лсфвхмю [???]
	}
};

class sGoodJob : public PublicHouse {
	void Service() const override {
		string sex_with = "мехгбеярмюъ фемыхмю [???]"; // мехгбеярмюъ фемыхмю [???] / мехгбеярмши лсфвхмю [???]
	}
};

class sHardCore : public PublicHouse {
	void Service() const override {
		string sex_with = "мехгбеярмши лсфвхмю[? ? ? ]"; // мехгбеярмюъ фемыхмю [???] / мехгбеярмши лсфвхмю [???]
	}
};

void NoNameWoman96() {
	cout << "\n[ бн бпелъ опнжеяяю бш пеьхкх нялнрперэ дебсьйс мюд бюлх, ]\n [ мн нянан мхвецн мнбнцн йпнле ыюбекъ бш ме сбхдекх ]\n";
}

void NoNameWomanGJ() {
	cout << "\n[ бн бпелъ опнжеяяю бш пеьхкх нялнрперэ дебсьйс оепед бюлх, ]\n [ мн нянан мхвецн мнбнцн йпнле е╗ мнц бш ме сбхдекх ]\n";
}

void NoNameMan() {
	cout << "\n[ бн бпелъ опнжеяяю бш пеьхкх нялнрперэ лсфвхмс оепед бюлх, ]\n [ бш сбхдекх релмнйнфецн йпеойнцн лсфвхмс б в╗пмнл кюрейямнл йнярчле  ]\n";
}

class PHdo : public PublicHouse {

};