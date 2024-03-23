#include <iostream>
#include "mob.h"
using namespace std;
#include <random>
#include <stdlib.h>

int Mob::id = 0;

int main()
{
    Mob hero(1, "Bohater");
    hero.stats();
    Mob spider(1, "Spider");
    spider.stats();
    int x = 0;
    // hero.attack(&spider);
    // cout << endl;
    // spider.attack(&hero);
    // cout << endl;
    // hero.attack(&spider);
    // cout << endl;
    // spider.attack(&hero);
    // cout << endl;
    // hero.attack(&spider);
    // cout << endl;z
    // spider.attack(&hero);
    // cout << endl;
    // hero.attack(&spider);
    // cout << endl;

    while (x != 2)
    {
        cout << "1 - Atak " << endl;
        cout << "2 - Ucieczka " << endl;
        cin >> x;
        if (x != 2)
        {
            hero.attack(&spider);
            cout << endl;
            spider.attack(&hero);
            hero.death();
            cout << endl;
            spider.death();
        }
    }
    cin.get();
    return 0;
}
