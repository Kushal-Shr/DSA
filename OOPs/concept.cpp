#include <iostream>

using namespace std;

class Hero
{
private:
    int health;

public:
    string name;
    char level;

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }
};

int main()
{
    Hero a;

    a.level = 'A';
    a.setHealth(94);

    cout << a.level << endl;
    cout << a.getHealth() << endl;

    Hero *b = new Hero;

    b->level = 'B';
    b->setHealth(100);

    cout << b->level << endl;
    cout << b->getHealth() << endl;

    return 0;
}