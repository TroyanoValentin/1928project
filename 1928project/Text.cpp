#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Gan {
protected:
    int palca;
    int koctet_HANIMARS;
    int knife_SFN_Version_1;
    int pistol_Colt_13Trophies;
    int vintofca_SF911_Autmnfield;
    int rifle_NAHAN;
    int pylemyt_Fireson_P_1921;
    int pylemyt_Blackwing_L687;

public:
    Gan() {
        palca = 10;
        koctet_HANIMARS = 15;
        knife_SFN_Version_1 = 25;
        pistol_Colt_13Trophies = 35;
        vintofca_SF911_Autmnfield = 40;
        rifle_NAHAN = 20;
        pylemyt_Fireson_P_1921 = 50;
        pylemyt_Blackwing_L687 = 55;
    }
};

class Vyvod : public Gan {
public:
    void displayWeaponsInfo() {
        cout << "1. Палка: " << palca << " урон\n";
        cout << "2. Кулак ХАНИМАРС: " << koctet_HANIMARS << " урон\n";
        cout << "3. Нож SFN Версия 1: " << knife_SFN_Version_1 << " урон\n";
        cout << "4. Пистолет Colt 13 Trophies: " << pistol_Colt_13Trophies << " урон\n";
        cout << "5. Винтовка SF911 Autumnfield: " << vintofca_SF911_Autmnfield << " урон\n";
        cout << "6. Револьвер NAHAN: " << rifle_NAHAN << " урон\n";
        cout << "7. Пулемет Fyerson P-1921: " << pylemyt_Fireson_P_1921 << " урон\n";
        cout << "8. Пулемет Blackwing L687: " << pylemyt_Blackwing_L687 << " урон\n";
    }
};

class Info {
protected:
    string name;
    int skils;
    int hp;
    int kol_vs; // количество боёв
    int palkaDamage; // Урон от палки

public:
    Info() : skils(0), hp(0), kol_vs(0), palkaDamage(10) {} // Инициализация урона от палки

    virtual void printInfo() const = 0;

    void increaseSkills() {
        if (kol_vs > 20) {
            skils += 3; // Увеличиваем на 3, если больше 20 боёв
        }
        else if (kol_vs > 10) {
            skils += 2; // Увеличиваем на 2, если больше 10 боёв
        }
        // Ограничиваем максимальное значение навыков до 12
        if (skils > 12) {
            skils = 12;
        }
    }

    string getStars() const {
        int starCount = skils / 2;
        return string(starCount, '*');
    }

    int getPalkaDamage() const { // Метод для получения урона от палки
        return palkaDamage;
    }
};

// абстрактный класс для вывода информации
class Gl : public Info {
public:
    Gl() {
        name = "Мак Оуен Оруэл";
        skils = 6;
        hp = 100;
        kol_vs = 22;
    }

    void printInfo() const override {
        const_cast<Gl*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << "палка : " << getPalkaDamage() << " урон\n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// информация о Продавце
class Seller : public Info {
public:
    Seller() {
        name = "Продавец";
        skils = 6;
        hp = 100;
        kol_vs = 8; // Пример: меньше 10 боёв
    }

    void printInfo() const override {
        const_cast<Seller*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << "палка : " << getPalkaDamage() << " урон\n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// информация о Горожанах
class The_townspeople : public Info {
public:
    The_townspeople() {
        name = "Горожане";
        skils = 6;
        hp = 100;
        kol_vs = 15;
    }

    void printInfo() const override {
        const_cast<The_townspeople*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << "палка : " << getPalkaDamage() << " урон\n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// информация о Мафии
class Mafia : public Info {
public:
    Mafia() {
        name = "Мафия";
        skils = 6;
        hp = 100;
        kol_vs = 5;
    }

    void printInfo() const override {
        const_cast<Mafia*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << "палка : " << getPalkaDamage() << " урон\n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// информация о Полицейских
class Polis : public Info {
public:
    Polis() {
        name = "Полицеские";
        skils = 6;
        hp = 100;
        kol_vs = 20;
    }

    void printInfo() const override {
        const_cast<Polis*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << "палка : " << getPalkaDamage() << " урон\n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// информация об Активистах
class Activists : public Info {
public:
    Activists() {
        name = "Активисты";
        skils = 6;
        hp = 100;
        kol_vs = 11;
    }

    void printInfo() const override {
        const_cast<Activists*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << "палка : " << getPalkaDamage() << " урон\n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// Главная функция
int main() {
    setlocale(LC_ALL, "Russian");

    Gl object_Gl;
    Seller object_Seller;
    The_townspeople object_Townspeople;
    Mafia object_Mafia;
    Polis object_Polis;
    Activists object_Activists;

    Info* vuvod;

    // Вывод информации о каждом персонаже
    vuvod = &object_Gl;
    vuvod->printInfo();
    cout << endl;

    vuvod = &object_Seller;
    vuvod->printInfo();
    cout << endl;

    vuvod = &object_Townspeople;
    vuvod->printInfo();
    cout << endl;

    vuvod = &object_Mafia;
    vuvod->printInfo();
    cout << endl;

    vuvod = &object_Polis;
    vuvod->printInfo();
    cout << endl;

    vuvod = &object_Activists;
    vuvod->printInfo();
    cout << endl;
    return 0;
}
