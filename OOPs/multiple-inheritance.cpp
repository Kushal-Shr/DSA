#include <iostream>

using namespace std;

class Living
{
public:
    void eat()
    {
        cout << "Eating\n";
    }
    void breath()
    {
        cout << "Breathing\n";
    }
};

class NonLiving
{
public:
    void roll()
    {
        cout << "Rolling\n";
    }
};

class Object : public Living, public NonLiving
{
};

int main()
{
    Object *obj = new Object;

    obj->eat();
    obj->roll();

    return 0;
}