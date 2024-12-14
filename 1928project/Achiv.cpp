#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "Colors.h"
using namespace std;

void ACH() {
	string line_of_achiv;
	fstream achiv;
	achiv.open("Achiv.txt");
	if (achiv.is_open()) {
		while (getline(achiv, line_of_achiv)) {
			cout << line_of_achiv << endl;
		}
	}
	else {
		cout << "\n[ ÎØÈÁÊÀ ]\n";
	}
	achiv.close();
}
// ÏËÀÍÈÐÅÒÑß ÄÎÄÅËÀÒÜ Ê ÊÎÍÖÓ ÐÀÁÎÒÛ, ÊÀÊ ÂÑ¨ ÑÂßÇÀÍÍÎÅ Ñ ÈÍÂÅÍÒÀÐ¨Ì È ÏÓÁËÈ×ÍÛÌ ÄÎÌÎÌ ÁÓÄÅÒ ÑÄÅËÀÍÍÎ