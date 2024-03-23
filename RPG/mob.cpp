#include <iostream>
#include "mob.h"
#include <string>
#include <random>
#include <time.h>
#include <stdlib.h>

using namespace std;
// nazwa Moba
Mob::Mob(int lvl, string _name)
{
    id++;
    this->name = _name + to_string(id);
    this->level_up(lvl);
}
//atak, randomizer ktory polega na wylosowaniu: 1.zwykly atak, 2.cios krytyczny, 3. nietrafienie
Mob Mob::attack(Mob *target)
{

   
        int random = rand() % 101;

        if (random > 90)
        {
            // critical
            this->wynikobr = 2;
        }
        else if (random > 39 && random < 91)
        {
            // hit
            this->wynikobr = 1;
        }
        else
        {
            // miss
            this->wynikobr = 0;
        }

    target->hp -= this->dmg * wynikobr;
    cout << this->name << " Atakuje: " << target->name << ".\n";
    cout << target->name << " Obrywa za " << this->dmg * wynikobr << ". HP wynosi: " << target->hp << "  teraz.\n";
    return *target;
}
//levelup zmienia level postaci, statystki hp i dmg sie skalują wraz z Levelem
void Mob::level_up(int lvl)
{
    if (lvl > 0 && lvl < 100)
    {
        this->level = lvl;
        this->hp = level * 10 + 40;
        this->dmg = level * 10;
    }
}
//statystki
void Mob::stats()
{
    cout << this->name << endl;
    cout << "level: " << this->level << endl;
    cout << "hp   : " << this->hp << endl;
    cout << "dmg  : " << this->dmg << endl;
    
}
//Funkcja smierc jesli hp wyniesie 0 to program sie zatrzymuje
void Mob::death()
{
    if (this->hp <= 0)
    {
        cout << this->name << " Umiera" << endl
             << endl;
        system("pause");
        exit(0);
    }
}