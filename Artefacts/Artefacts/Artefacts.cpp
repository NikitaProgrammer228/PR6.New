// Artefacts.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;
class Art
{
public: string name, body, leftarm, rightarm, legs, helmet;
      int hp,mana, know,mm, atk,pr;
      string bdtype [5]{"Head","Left arm","Right arm","Legs","Chest"};
      
};
int main()
{
    
    Art Hood;
    Hood.bdtype [0];
    Hood.name = "Waffel's Hood";
    Hood.mana = 100;
    Hood.know = 25;
    Hood.mm = 80;
    Art Hood1;
    Hood1.bdtype [0];
    Hood1.name = "Tough Hood";
    Hood1.mana = 200;
    Hood1.know = 30;
    Hood1.mm = 120;
    
    Art Cloak;
    Cloak.bdtype [4];
    Cloak.name = "Cloak";
    Cloak.mana = 250;
    Cloak.know = 35;
    Cloak.hp = 100;
    Cloak.pr = 1;
    Cloak.mm = 160;

    
    Art Cloak2;
    Cloak2.bdtype [4];
    Cloak2.name = "Cum Cloak";
    Cloak2.atk = 45;
    Cloak2.pr = 2;
    Cloak2.mana = 450;
    Cloak2.know = 60;
    Cloak2.hp = 300;
    Cloak2.mm = 322;
    
    Art Ring1;
    Ring1.bdtype [1];
    Ring1.name = "Nikita's ring";
    Ring1.mm = 150;
    Ring1.know = 100;
    Art Ring2;
    Ring2.bdtype [1];
    Ring2.name = "Anal ring";
    Ring2.mm = 200;
    Ring2.know = 130;
    Ring2.hp = 50;
    Art Biblia;
    Biblia.bdtype[2];
    Biblia.hp = 250;
    Biblia.know = 200;
    Biblia.mm = 230;
    Biblia.name = "Holy Bible";
    Art ManaBoots;
    ManaBoots.name = "Mana Boots";
    ManaBoots.mana = 170;
    ManaBoots.mm = 50;
    Art Stick;
    Stick.mm = 200;
    Stick.name = "Wizard Stick";
    Stick.bdtype [2];
        //WizardArtefacts

    Art Sword;
    Sword.name = "Sword";
    Sword.atk = 175;
    Sword.bdtype[2];
    Sword.pr = 1;
    Art Sword1;
    Sword.name = "Fire Sword";
    Sword1.atk = 250;
    Sword1.bdtype[2];
    Sword1.pr = 2;
    Art Shield;
    Shield.name = "Shield";
    Shield.bdtype[1];
    Shield.pr =2;
    Shield.atk = 50;
    Art Shield1;
    Shield1.name = "Shield of Strenght";
    Shield1.bdtype[1];
    Shield1.pr =10;
    Shield1.atk = 65;
    Art Helm1;
    Helm1.name = "Helm #1";
    Helm1.pr = 7;
    Helm1.hp = 100;
    Helm1.bdtype [0];
    Art Helm;
    Helm.name = "Dominator Helm";
    Helm.pr = 9;
    Helm.bdtype [0];
    Art Chest;
    Chest.name = "Armor chest";
    Chest.pr = 11;
    Chest.bdtype [4];
    Art Chest1;
    Chest.name = "Armor chest #2";
    Chest.pr = 12;
    Chest.bdtype [4];
    Art Boots1;
    Boots1.name = "Travel Boots";
      Boots1.pr = 5;
      Boots1.hp = 200;
      Boots1.mana = 50;
      Boots1.bdtype [3];
                             //WarriorArtefacts

    Art Bow;
    Bow.name = "Vadim's Bow";
    Bow.atk = 150;
    Bow.bdtype [2];
    Bow.mm = 100;
    Art Bow1;
    Bow1.name =  "Wind Bow";
    Bow1.atk = 225;
    Bow1.bdtype [2];
    Bow1.mm = 145;


    
    Art Dagger;
    Dagger.name = "Cocky Dagger";
    Dagger.atk = 75;
    Dagger.bdtype [1];
    Art Dagger1;
    Dagger1.name = "Blink Dagger";
    Dagger1.atk = 90;
    Dagger1.bdtype [1];
    
    Art Jacket;
    Jacket.name = "Jimmy's Jacket";
    Jacket.hp = 250;
    Jacket.mana = 125;
    Jacket.pr = 2;
    Jacket.bdtype [4];
    Art Jacket1;
    Jacket1.name = "Bulls Jacket";
    Jacket1.hp = 700;
    Jacket1.mana = 250;
    Jacket1.pr = 3;
    Jacket1.bdtype [4];
    
    Art PT1;
    PT1.name = "PThi";
    PT1.hp = 75;
    PT1.mana = 100;
    PT1.mm = 125;
    PT1.atk = 150;
    PT1.know = 175;
    PT1.bdtype [3];
     //ArcherArtefacts




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
 