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
		string sex_with = "мехгбеярмши лсфвхмю[???]"; // мехгбеярмюъ фемыхмю [???] / мехгбеярмши лсфвхмю [???]
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

void PHdo() {
	s96 ninetysix; sGoodJob GJ; sHardCore HC;
	PublicHouse* ptr96 = &ninetysix; PublicHouse* ptrGJ = &GJ; PublicHouse* ptrHC = &HC;
	cout << "бш гюькх б осакхвмши днл, оепед янани бш сбхдекх ьбюпжлемю б ьхйюпмни йпюямни ьсани.\nбш япюгс онмъкх, врн нм ашк йюй лхмхлсл йюй-рн ябъгюм я юдлхмхярпюжхеи дюммнцн йскэрспмнцн гюбедемхъ.";
	cout << "\n\nбюьх деиярбхъ:\n[1] - бняонкэгнбюрэяъ сяксцни\n[2] - сирх\n\nбюь бшанп: ";
	int vibor;
	cin >> vibor;
	switch (vibor) {
	case 1:
		cout << "бшаепхре сяксцс:\n[1] - сяксцю \"96\"\n[2] - сяксцю \"Good Job\"\n[3] - сяксцю \"Hard Core\"\n\nбюь бшанп : ";
		cin >> vibor;
		switch (vibor) {
		case 1:
			ptr96->Service();
			cout << "\n\nбюьх деиярбхъ:\n[1] - нялнрперэ\n[2] - нЙНМВХРЭ\n\nбюь бшанп: ";
			switch (vibor) {
			case 1:
				NoNameWoman96();
				break;
			case 2:
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}

};