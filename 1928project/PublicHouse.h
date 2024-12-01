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
	string sex_with;
public:
	PublicHouse() {}
	virtual void Service() const = 0;
};

class s96 : public PublicHouse {

};

class sGoodJob : public PublicHouse {

};

class sHardCore : public PublicHouse {

};