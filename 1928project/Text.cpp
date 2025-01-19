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
        : palca("�����"),
        koctet_HANIMARS("��ct�� HANIMARS"),
        knife_SFN_Version_1("��� SFN Version 1"),
        pistol_Colt_13Trophies("�������� Colt 13 Trophies"),
        vintofca_SF911_Autmnfield("�������� SF911 Autumnfield"),
        rifle_NAHAN("�������� NAHAN"),
        pylemyt_Fireson_P_1921("������� Fireson P 1921"),
        pylemyt_Blackwing_L687("������� Blackwing L687"),
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
    virtual void printInfo() const = 0; //����� ������ �������
    void increaseSkills() {
        if (kol_vs > 20) {
            skils += 3; // ����������� �� 3, ���� ������ 20 ���
        }
        else if (kol_vs > 10) {
            skils += 2; // ����������� �� 2, ���� ������ 10 ���
        }
        // ������������ ������������ �������� ������� �� 12
        if (skils > 12) {
            skils = 12;
        }
    }

    string getStars() const {
        int starCount = skils / 2;
        return string(starCount, '*');
    }

    int getDamage() const { // ����� ��� ��������� ����� 
        return palkaDamage;
    }
};

// ����������� ����� ��� ������ ����������
class Gl : public Info {
public:
    Gl() {
        name = "��� ���� �����";
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
        cout << " Gan:     " << setw(10) << palca << getDamage() << " ����\n";
        cout << " Money:    " << setw(10) << money << " \n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// ���������� � ��������
class Seller : public Info {
public:
    Seller() {
        name = "��������";
        skils = 6;
        hp = 100;
        kol_vs = 0; // ������: ������ 10 ���
        money = 0;
    }

    void printInfo() const override {
        const_cast<Seller*>(this)->increaseSkills();
        cout << "+-------------------------+\n";
        cout << " Name:    " << setw(10) << left << name << " \n";
        cout << " HP:      " << setw(10) << hp << " \n";
        cout << " kol_vs:  " << setw(10) << kol_vs << " \n";
        cout << " Gan:     " << setw(10) << palca << getDamage() << " ����\n";
        cout << " Money:    " << setw(10) << money << " \n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// ���������� � ���������
class The_townspeople : public Info {
public:
    The_townspeople() {
        name = "��������";
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
        cout << " Gan:     " << setw(10) << palca << getDamage() << " ����\n";
        cout << " Money:    " << setw(10) << money << " \n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// ���������� � �����
class Mafia : public Info {
public:
    Mafia() {
        name = "�����";
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
        cout << " Gan:     " << setw(10) << palca << getDamage() << " ����\n";
        cout << " Money:    " << setw(10) << money << " \n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// ���������� � �����������
class Polis : public Info {
public:
    Polis() {
        name = "����������";
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
        cout << " Gan:     " << setw(10) << palca << getDamage() << " ����\n";
        cout << " Money:    " << setw(10) << money << " \n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// ���������� �� ����������
class Activists : public Info {
public:
    Activists() {
        name = "���������";
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
        cout << " Gan:     " << setw(10) << palca << getDamage() << " ����\n";
        cout << " Money:    " << setw(10) << money << " \n";
        cout << " Skills:  " << getStars() << " \n";
        cout << "+-------------------------+\n";
    }
};

// ������� �������
int MainMenu() {
    setlocale(LC_ALL, "Russian");

    Gl object_Gl;
    Seller object_Seller;
    The_townspeople object_Townspeople;
    Mafia object_Mafia;
    Polis object_Polis;
    Activists object_Activists;

    Info* vuvod;

    // ����� ���������� � ������ ���������
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

