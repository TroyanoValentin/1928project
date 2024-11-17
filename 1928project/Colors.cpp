#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void RedStr(string str) {
	cout << "\033[31m" << str << "\033[0m";
}

void BlueStr(string str) {
	cout << "\033[34m" << str << "\033[0m";
}

void GreenStr(string str) {
	cout << "\033[32m" << str << "\033[0m";
}

void YellowStr(string str) {
	cout << "\033[33m" << str << "\033[0m";
}

void PurpleStr(string str) {
	cout << "\033[35m" << str << "\033[0m";
}

void CyanStr(string str) {
	cout << "\033[36m" << str << "\033[0m";
}

void WhiteStr(string str) {
	cout << "\033[37m" << str << "\033[0m";
}

void BlackStr(string str) {
	cout << "\033[30m" << str << "\033[0m";
}

void RedBg(string str) {
	cout << "\033[41m" << str << "\033[0m";
}

void BlueBg(string str) {
	cout << "\033[44m" << str << "\033[0m";
}

void GreenBg(string str) {
	cout << "\033[42m" << str << "\033[0m";
}

void YellowBg(string str) {
	cout << "\033[43m" << str << "\033[0m";
}

void PurpleBg(string str) {
	cout << "\033[45m" << str << "\033[0m";
}

void CyanBg(string str) {
	cout << "\033[46m" << str << "\033[0m";
}

void WhiteBg(string str) {
	cout << "\033[47m" << str << "\033[0m";
}

void BlackBg(string str) {
	cout << "\033[40m" << str << "\033[0m";
}

void Clear() {
	cout << "\033[2J\033[1;1H";
}