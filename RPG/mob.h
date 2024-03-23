#include <iostream>
using namespace std;

//klasa Mob
class Mob{
    private:
        string name;
        int level;
        int hp;
        int dmg;
        int wynikobr;
    public:
        static int id;
        void stats();
        void level_up(int);
        void death();
        Mob attack(Mob *); 
        Mob(int = 1, string = "default");

};

