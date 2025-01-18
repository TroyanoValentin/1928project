#include <iostream>
#include <string>
using namespace std;
void Les() {
    string message = "Вы умерли заблужившись в лесу\n";
    cout << "\033[31m" << message << "\033[0m";
    cout << "\033[31m" << "\tВЫ ПРОИГРАЛИ\n" << "\033[0m";
}

void Ytonyl() {
    string message = "Вы умерли утонув в воде\n";
    cout << "\033[31m" << message << "\033[0m";
    cout << "\033[31m" << "\tВЫ ПРОИГРАЛИ\n" << "\033[0m";
}

void Boy() {
    string message = "Вы погибли в бою\n"; 
    cout << "\033[31m" << message << "\033[0m";
    cout << "\033[31m" << "\tВЫ ПРОИГРАЛИ\n" << "\033[0m";
}

void Ifarkt() {
    string message = "Вы умерли от инфаркта\n";
    cout << "\033[31m" << message << "\033[0m";
    cout << "\033[31m" << "\tВЫ ПРОИГРАЛИ\n" << "\033[0m";
}

void Vysota() {
    string message = "Вы умерли упав с высоты\n";
    cout << "\033[31m" << message << "\033[0m";
    cout << "\033[31m" << "\tВЫ ПРОИГРАЛИ\n" << "\033[0m";
}

int main() {
    setlocale(LC_ALL, "Russian");
    Les();
    Ytonyl();
    Boy();
    Ifarkt();
    Vysota();
    return 0; 
}
