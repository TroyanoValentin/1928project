#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Gan {
protected:
    string palca;
    string koctet_HANIMARS;
    string knife_SFN_Version_1;
    string pistol_Colt_13Trophies;
    string vintofca_SF911_Autmnfield;
    string rifle_NAHAN;
    string pylemyt_Fireson_P_1921;
    string pylemyt_Blackwing_L687;
    //////
    int palcaDamage;
    int koctetDamage;
    int knifeDamage;
    int pistolDamage;
    int vintofcaDamage;
    int rifleDamage;
    int pylemytFiresonDamage;
    int pylemytBlackwingDamage;

public:
    Gan()
        : palca("Палка"),
        koctet_HANIMARS("Коctет HANIMARS"),
        knife_SFN_Version_1("Нож SFN Version 1"),
        pistol_Colt_13Trophies("Пистолет Colt 13 Trophies"),
        vintofca_SF911_Autmnfield("Винтовка SF911 Autumnfield"),
        rifle_NAHAN("Винтовка NAHAN"),
        pylemyt_Fireson_P_1921("Пулемет Fireson P 1921"),
        pylemyt_Blackwing_L687("Пулемет Blackwing L687"),
        palcaDamage(10),
        koctetDamage(30),
        knifeDamage(25),
        pistolDamage(20),
        vintofcaDamage(35),
        rifleDamage(40),
        pylemytFiresonDamage(50),
        pylemytBlackwingDamage(55)
    {}
};

class Info : public Gan {
protected:
    string name;
    int skils;
    int hp;
    int money;
    int kol_vs;
    int palkaDamage;
    int koctetDamage;
    int knifeDamage;
    int pistolDamage;
    int vintofcaDamage;
    int rifleDamage;
    int pylemytFiresonDamage;
    int pylemytBlackwingDamage;

public:
    Info() : skils(0), hp(0), kol_vs(0), palkaDamage(10), koctetDamage(30),
        knifeDamage(25),
        pistolDamage(20),
        vintofcaDamage(35),
        rifleDamage(40),
        pylemytFiresonDamage(50),
        pylemytBlackwingDamage(55)
    {}
    virtual void printInfo() const = 0; //чисир виртул функция
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

    int getDamage() const { // Метод для получения урона 
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
        kol_vs = 0;
        money = 0;
    }

    void printInfo() const override {
        const_cast<Gl*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << palca << getDamage() << " урон\n";
        cout << " Money:    " << setw(10) << money << " \n";
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
        kol_vs = 0; // Пример: меньше 10 боёв
        money = 0;
    }

    void printInfo() const override {
        const_cast<Seller*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << palca << getDamage() << " урон\n";
        cout << " Money:    " << setw(10) << money << " \n";
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
        kol_vs = 0;
        money = 0;
    }

    void printInfo() const override {
        const_cast<The_townspeople*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << palca << getDamage() << " урон\n";
        cout << " Money:    " << setw(10) << money << " \n";
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
        kol_vs = 0;
        money = 0;
    }

    void printInfo() const override {
        const_cast<Mafia*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << palca << getDamage() << " урон\n";
        cout << " Money:    " << setw(10) << money << " \n";
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
        kol_vs = 0;
        money = 0;
    }

    void printInfo() const override {
        const_cast<Polis*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << palca << getDamage() << " урон\n";
        cout << " Money:    " << setw(10) << money << " \n";
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
        kol_vs = 0;
        money = 0;
    }

    void printInfo() const override {
        const_cast<Activists*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << palca << getDamage() << " урон\n";
        cout << " Money:    " << setw(10) << money << " \n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// Главная функция
int MainMenu() {
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
