//Уважаемые друзья! Товарищи! Поздравляю всех нас с открытием первого общего командного проекта «1928»! Старт: 17.11.2024
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Inventory.h"
#include "PublicHouse.h"
#include "Casino.h"
#include "Colors.h"
#include "Text.h"
#include "Pictures.h"
#include "Locations.h"
#include "Stores.h"
#include "Fight.h"
using namespace std;
// ModularCodeBlocks.cpp : По предложению Кирилла, было принято решение разбить все локации на одинаковые части, из которых, как конструктор, можно будет собрать и снова!
/*
[*] - точка нахождения
[@] - магазин
[#] - место обыска
[%]
[]
*/

/*   Стандартная функция части локации
void Hall_threePoint() {
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]#\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            while (CHOISE != 2) {
                cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]$\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE)
                {
                case 1:
                    CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]@\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE)
                        {
                        case 1:
                            CHOISE = -100;
                            cout << "///"; // Здесь функция того места, куда мы придём *-*-* -->
                            CHOISE = 2;
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
}
*/


void Hall_CrossRoad() { // "КОРИДОР" с магазином 1
    int CHOISE = -100;
    while (CHOISE != 3) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ НАЛЕВО\n\t\t[2] ПОЙТИ НАПРАВО\n\t\t[3] ВЕРНУТЬСЯ \n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            // тут поворот
            break;
        case 2:
            CHOISE = -100;
            // тут поворот
            break;
        case 4:
            DoAllInv();
            break;
        }
    }
}


void Hall_threePoints_Place() { // "КОРИДОР" с точкой интереса (осмотреться, обыскать, свернуть)
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\t\t[3] \n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            while (CHOISE != 3) {
                cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ДЕЙСТВИЕ/ИЗМЕНЕНИЕ МАРШРУТА\n\t\t[3] ВЕРНУТЬСЯ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE)
                {
                case 1:
                    CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE)
                        {
                        case 1:
                            CHOISE = -100;
                            cout << "///"; // Здесь функция того места, куда мы придём *-%-* --> v -->
                            break;
                        }
                    }
                    break;
                case 2: // Точка Интереса
                    cout << "***"; // Здесь функция того места, куда мы придём *-%-* --> v -->
                    break;
                case 3:
                    DoAllInv();
                    break;
                }
            }
        case 4:
            DoAllInv();
            break;
        }
    }
}

/*void InnerSide_of_Liberty() { // Внутри Статуи Освобождения - не нужнв
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[ЧТО ДЕЛАТЬ]\n\t\t===========\n\n\t\t[1] ПОДНЯТЬСЯ ПО ЛЕСТНИЦЕ\n\t\t[2] УПЛЫТЬ\n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE) {
        case 1:
            int CHOISE = -100;
            while (CHOISE != 2) {
                cout << "\n\n\t\t============\n\t\t[ЧТО ДЕЛАТЬ]\n\t\t===========\n\n\t\t[1] ПОДОЙТИ К ПОСТАМЕНТУ СТАТУИ\n\t\t[2] СПУСТИТЬСЯ ПО ЛЕСТНИЦЕ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE) {
                case 1:
                    int CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[ЧТО ДЕЛАТЬ]\n\t\t===========\n\n\t\t[1] ВЗЛОМАТЬ ЗАМОК НА ДВЕРИ (3)\n\t\t[2] ОТОЙТИ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE) {
                        case 1:
                            // Здесь проверяем инвентарь
                            int CHOISE = -100;
                            while (CHOISE != 3) {
                                cout << "\n\n\t\t*Внутри статуи было очень темно. Свет, проникающий из дверного проёма, еле освещал пол, доски которого просырели и разбухли настолько, что, кажется, вот-вот проломился бы, Но раз они выдерживают те два трупа в углу, то вам со своими 59 кг веса бояться нечего.\n\t\tВы ощупываете помещение: справа от входа распологается лестница, о ступеньки которой вы споткнулись. Под лестницей два ... ящика? Рядом с ними, напротив входа, лежат два трупа. Посередине помещения - огромная металлическая балка, в которую вы врезались и сверху что-то посыпалось... Больше, пройдя вдоль стены, вы ничего не обнаружили.*\n\n\t\t============\n\t\t[ЧТО ДЕЛАТЬ]\n\t\t===========\n\n\t\t[1] ОСМОТРЕТЬ ЯЩИКИ (3)\n\t\t[2] ПОДНЯТЬСЯ ПО МЕТАЛЛИЧЕСКОЙ ЛЕСТНИЦЕ\n\t\t[3] ВЫЙТИ\n\n\t\t: ";
                                cin >> CHOISE;
                                switch (CHOISE) {
                                case 1:
                                    break;
                                case 2:
                                    int CHOISE = -100;
                                    while (CHOISE != 1) {
                                        cout << "\n\n\t\t*Лестница вывела вас в комнату в голове статуи. Из двух прорезей для глаз открывается вид на море, но из-за -5 по зрению вы не можете им насладиться \n\t\t(Тут должен был быть лор, но он не вошли в срок)*\n\n\t\t============\n\t\t[ЧТО ДЕЛАТЬ]\n\t\t===========\n\n\t\t[1] СПУСТИТЬСЯ\n\n\t\t: ";
                                        cin >> CHOISE;
                                    }
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }
}
*/

void Marshrut() {
    cout << "\n\n\t\t============\n\t\t[МАРШРУТ  №2]\n\t\t============\n\n\t\t[1] Кров-Стрит\n\t\t[2] Офис Райан-Индастриз\n\t\t[3] Городская Администрация\n\t\t[4] Набережная\n\t\t[5] Эд.Оил Билдинг\n\t\t[6] МакАртурСтил-Бласт\n\t\t[7] Плантации Генриха Гейл\n\n\t\t=============\n\t\t[RI.Reel.FAC]\n\t\t=============\n\n\t\t: ";

}


















































void Hall_threePoint1_4() {
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]#\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            while (CHOISE != 2) {
                cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]$\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE)
                {
                case 1:
                    CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]@\n\t\t===========\n\n\t\t[1] ВОЙТИ В ЗДАНИЕ\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE)
                        {
                        case 1:
                            CHOISE = -100;
                            // Тут Казино
                            CHOISE = -100;
                            break;
                        case 3:
                            DoAllInv();
                            break;
                        }
                    }
                    break;

                }
            }
        }
    }
}

void Hall_threePoint1_3() {
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]#\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            while (CHOISE != 2) {
                cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]$\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE)
                {
                case 1:
                    CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]@\n\t\t===========\n\n\t\t[1] СВЕРНУТЬ В ПЕРЕУЛОК\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE)
                        {
                        case 1:
                            CHOISE = -100;
                            Hall_threePoint1_4();
                            CHOISE = -100;
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
}

void Hall_threePoint1_2() {
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]#\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            while (CHOISE != 2) {
                cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]$\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE)
                {
                case 1:
                    CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]@\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE)
                        {
                        case 1:
                            CHOISE = -100;
                            cout << "///"; // Давайте ещё один магазин
                            CHOISE = -100;
                            break;
                        case 3:
                            DoAllInv();
                            break;
                        }

                    }
                    break;
                }
            }
        case 3:
            DoAllInv();
            break;
        }
    }
}
void Hall_threePoints_Place1_2() { // "КОРИДОР" с точкой интереса (осмотреться, обыскать, свернуть)
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\t\t[3] \n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            while (CHOISE != 3) {
                cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] СВЕРНУТЬ В ПЕРЕУЛОК\n\t\t[3] ВЕРНУТЬСЯ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE)
                {
                case 1:
                    CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE)
                        {
                        case 1:

                            Hall_threePoint1_3();
                            CHOISE = -100;
                            break;
                        case 3:
                            DoAllInv();
                            break;
                        }
                    }
                    break;
                case 2:
                    // Пусть тут бой будет
                    CHOISE = -100;
                    break;
                case 4:
                    DoAllInv();
                    break;
                }

            }
        }
    }
}

void Hall_threePoints_Place1_1() { // "КОРИДОР" с точкой интереса (осмотреться, обыскать, свернуть)
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\t\t[3] \n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            while (CHOISE != 3) {
                cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] СВЕРНУТЬ В ПЕРЕУЛОК\n\t\t[3] ВЕРНУТЬСЯ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE)
                {
                case 1:
                    CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE)
                        {
                        case 1:
                            CHOISE = -100;
                            cout << "\n\n\t\t*В переулке стоит мусорный ящик*\n\n\t\t============\n\t\t[ЧТО ДЕЛАТЬ]\n\t\t===========\n\n\t\t[1] ОБЫСКАТЬ\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                            cin >> CHOISE;
                            if (CHOISE == 1) {
                                CheckInvBox();

                            }
                            CHOISE = -100;
                            break;
                        case 3:
                            DoAllInv();
                            break;
                        }
                    }
                    break;
                case 2: // Точка Интереса
                    Hall_threePoint1_2();
                    CHOISE = -100;
                    break;
                case 4:
                    DoAllInv();
                    break;
                }
            }
        }
    }
}

void Hall_CrossRoad1() { // РАЗВИЛКА
    int CHOISE = -100;
    while (CHOISE != 3) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ НАЛЕВО\n\t\t[2] ПОЙТИ НАПРАВО\n\t\t[3] ПЕРЕЙТИ ДОРОГУ \n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            Hall_threePoints_Place1_2();
            CHOISE = -100;
            break;
        case 2:
            CHOISE = -100;
            Hall_threePoints_Place1_1();
            CHOISE = -100;
            break;
        case 4:
            DoAllInv();
            break;
        }
    }
}

void Hall_threePoints_Place2() { // "КОРИДОР" с магазином 1
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ \n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            CHOISE = -100;
            while (CHOISE != 3) {
                cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ЗАЙТИ В МАГАЗИН\n\t\t[3] ВЕРНУТЬСЯ\n\n\t\t: ";
                cin >> CHOISE;
                switch (CHOISE)
                {
                case 1:
                    CHOISE = -100;
                    while (CHOISE != 2) {
                        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]\n\t\t===========\n\n\t\t[1] ПОЙТИ ПРЯМО\n\t\t[2] ВЕРНУТЬСЯ\n\n\t\t: ";
                        cin >> CHOISE;
                        switch (CHOISE)
                        {
                        case 1:
                            CHOISE = -100;
                            cout << "ТУПИК";
                            break;
                        case 3:
                            DoAllInv();
                            break;
                        }

                    }
                    break;
                case 2: // Точка Интереса
                    cout << "***"; // ТУТ МАГАЗИН
                    CHOISE = -100;
                    break;
                case 4:
                    DoAllInv();
                    break;
                }
            }
        }
    }
}


void Start() { // Старт
    int CHOISE = -100;
    while (CHOISE != 2) {
        cout << "\n\n\t\t============\n\t\t[КУДА ПОЙТИ]#\n\t\t===========\n\n\t\t[1] АВТОБУСНАЯ ОСТАНОВКА\n\t\t[2] ПЕРЕЙТИ ДОРОГУ\n\t\t[3] ПРОЙТИ ПРЯМО\n\n\t\t: ";
        cin >> CHOISE;
        switch (CHOISE)
        {
        case 1:
            Marshrut();
            cout << "***ЕГО НЕ СУЩЕСТВУЕТ***";
            cin.ignore();
            CHOISE = -100;
            break;
        case 2:
            Hall_CrossRoad1();
            CHOISE = -100;
            break;
        case 3:
            Hall_threePoints_Place2();
            CHOISE = -100;
            break;
        case 4:
            DoAllInv();
            break;
        case 5:
            CheckInvBox();
            break;
        case 6:
            CheckInvUrn();
            break;
        case 7:
            CheckInvWalls();
            break;
        case 8:
            CheckInvLab();
            break;
        case 9:
            PublicalHouse();
            break;
        case 10:
            cout << MainCasino();
            break;
        case 11:
            cout << MainMenu();
            break;
        case 12:
            cout << MainMenu();
            break;
        }


    }
}

void Confederal_States_Coat_of_Arms() {
    cout << R"(


       --::..                                                                ::-.:- ..     
    =--:==-.:-:.                                                          .--..-=----=     
     :-. .:--::--                                                       .-:.:--:...:-..    
   .=-:-:....:-:-=-.                                                  :-=::::.::::-:.-     
     ::..:::--:-=-+=::.                                            .:-==---:--::.. :-.     
  -=:::-:....:-=-=:::..:                                          :. ..=+==::.. .:-::.=:   
   .::...:::..::-:.:-::.:                                        - :::..:-:..::::...::.    
   :::-:::..:::----:--:: :             ........                 - .::-:-:==::.:::::-:::    
   .:::....:::::--::-:-:  :         ..  ..::   :               :  ::-::=+-:::::.....::     
      :--:.:::::--: .:.:: ..        ..:-:.      -.            :  :-.-..:--:.:...:-:.       
    .--:::::....::---::::. :.           :.      .-           .. ..:.::-=::.....::::--      
     .--.  .:::::-: .-.:::. .:          -.       -:         :. .-:-..:.:-::..::..:=.       
       ..-=. .::::-=+.: :.:.  ::       ::.      ..-      .::  ::.::.:--:::::: .-:          
        :::--:...:::-.-.::.::.. .:::..:-::.:::.::-:.:::::  .:-::...::-:::....-=::          
         .-:  ::.  :--- :::::-::. .     .. : .  ...      ..:.::::. =:-:.. .::::=.          
          ..--.  .:..:=-=..:-.:.:::..:  .  .  ..  . ::.:::.::::. -::-..::.  :-             
            :.:-. ... .--.= :::-.:.::: . .   .  .   :::::::.-.--::=:.... .-:.:             
              -..-: .:..---:-+ .-::-::  .  .  .   . :--.::..-:-.:-:.::.:-..-               
                 -.-: ::.:.:-:-:=::-:- .   .        ::=:-=.---..-.-:.:-.-                  
                   ::.-..: ::.-:.=:-:- . ..  .... ..=:-:=::-.:: -. - ..                    
                      -:-.:= .: -..==- ..: :..- :...=-- .-.-. =.:-::                       
                         : -:=.:- -:+.:....:=-.:...:-+:: -::::- :                          
                              : ::--+:.:..:-==::.:..:=:-:- :                               
                                  .:=:-..-.+++=.::::-=                                     
                                  .-=:-=.+===+-=+:==:-                                     
                                  .-:--.=::=::=:=:.=:-.                                    
                            ....::.-..=.=::=::=.=:.- -......                               
                         .:::..::--===------:::::::-==--::...:..                           
                         ::------=-:::-----:::::--:::.:-=----:.....                        
                          ::...:::.:-:.-..-:-::-..:..-:..:..:---:..                        
                              -:--=:::-..-:.:.:-..:-..:=:...   :--                         
                             -.. -:::+:::+.:-.::=..--:.:....:                              
                                .-:. =:::-::=:::::.:: ..:                                  
                                     =-  ::- -.=  :-.                                      
                                          .   : 
 

                           CONFEDERATION OF COLUMBIAN STATES


)";
}

void TimeLine() {
    cout << R"(
   [ **.09.1928 ;  near Atlantical Ocean ;  Old-Yorkness ]

 )";
}


int main()
{
    setlocale(LC_ALL, "Russian");
    Confederal_States_Coat_of_Arms();
    TimeLine();
    Start();
}