// Герои меча и магии.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
#include <string>

class Person
{
public: string name, clas, art, nav;
    int hp , lvl = 1, xp = 0 , xplvl = 100 , atk, pr , know, mm, gold = 500, mana;



};
int main()
{
    a:
    int x;
    cout << "Choose your destiny:\n 1 - Warrior\n 2 - Wizard\n 3 - Archer \n ";
    cin >> x;
    Person warrior;
    Person wizard;
    Person archer;
    switch (x)
    {
    case 1:
        cout << "Enter name your hero:\n";
        cin >> warrior.name;
        warrior.clas = "Warrior";
        warrior.hp = 2000;
        warrior.pr = 7;
        warrior.know = 0;
        warrior.mana = 0;
        warrior.atk = 150;
        warrior.mm = 0;
        cout << "Clas - " << warrior.clas << "\n";
        cout << "Hp - " << warrior.hp << "\n";
        cout << "Lvl - " << warrior.lvl << "\n";
        cout << "Xp - " << warrior.xp << "/" << warrior.xplvl << "\n";
        cout << "Atk - " << warrior.atk << "\n";
        cout << "Pr - " << warrior.pr << "\n";
        cout << "Know - " << warrior.know << "\n";
        cout << "mm - " << warrior.mm << "\n";
        cout << "Gold - " << warrior.gold << "\n";
        cout << "Mana - " << warrior.mana << "\n";
        cout << "\n";
        
        break;
    case 2:
        
        cout << "Enter name your hero:\n";
        cin >> wizard.name;
        wizard.clas = "Wizard";
        wizard.hp = 1000;
        wizard.pr = 1;
        wizard.know = 250;
        wizard.mana = 400;
        wizard.atk = 100;
        wizard.mm = 150;
        cout << "Clas - " << wizard.clas << "\n";
        cout << "Hp - " << wizard.hp << "\n";
        cout << "Lvl - " << wizard.lvl << "\n";
        cout << "Xp - " << wizard.xp << "/" << wizard.xplvl << "\n";
        cout << "Atk - " << wizard.atk << "\n";
        cout << "Pr - " << wizard.pr << "\n";
        cout << "Know - " << wizard.know << "\n";
        cout << "mm - " << wizard.mm << "\n";
        cout << "Gold - " << wizard.gold << "\n";
        cout << "Mana - " << wizard.mana << "\n";
        cout << "\n";
        
        break;
    case 3:
        cout << "Enter name your hero:\n";
        cin >> archer.name;
        archer.clas = "Archer";
        archer.hp = 1500;
        archer.pr = 3;
        archer.know = 100;
        archer.mana = 200;
        archer.atk = 200;
        archer.mm = 50;
        cout << "Clas - " << archer.clas << "\n";
        cout << "Hp - " << archer.hp << "\n";
        cout << "Lvl - " << archer.lvl << "\n";
        cout << "Xp - " << archer.xp <<  "/" << archer.xplvl << "\n";
        cout << "Atk - " << archer.atk << "\n";
        cout << "Pr - " << archer.pr << "\n";
        cout << "Know - " << archer.know << "\n";
        cout << "mm - " << archer.mm << "\n";
        cout << "Gold - " << archer.gold << "\n";
        cout << "Mana - " << archer.mana << "\n";
        cout << "\n";
        break;

    default:
        break;
        
    }
    goto a;
    std::cout >> "Тест"
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
