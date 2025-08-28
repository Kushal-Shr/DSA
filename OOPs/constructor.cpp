#include <iostream>

using namespace std;

class Hero
{
public:
    string name;
    int health;
    char level;

    // parameterised constructor
    Hero(string name, int health, char level)
    {
        this->name = name;
        this->health = health;
        this->level = level;
    }

    // copy contructor
    Hero(Hero &temp)
    {
        this->name = temp.name;
        this->health = temp.health;
        this->level = temp.level;
    }

    ~Hero()
    {
        cout << "Destructed!!!" << endl;
    }
};

int main()
{
    Hero *kushu = new Hero("Kushal", 98, 'A');

    cout << kushu->name << ' ' << kushu->level << " " << kushu->health << endl;

    Hero kushal(*kushu);

    cout << kushal.name << ' ' << kushal.level << " " << kushal.health << endl;

    delete kushu;

    return 0;
}