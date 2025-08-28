#include <iostream>

using namespace std;

class Hero
{
public:
    string name;
    int health;
    char level;

    // default constructor
    Hero()
    {
        cout << "Constructor Called" << endl;
    }

    // parameterised constructor
    Hero(string name, int health, char level)
    {
        this->name = name;
        this->health = health;
        this->level = level;
    }
};

int main()
{
    Hero *kushu = new Hero("Kushal", 98, 'A');

    cout << kushu->name << ' ' << kushu->level << " " << kushu->health << endl;

    return 0;
}