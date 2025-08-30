#include <iostream>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

    string speak()
    {
        return "Speaking";
    }
};

class Dog : public Animal
{
public:
    string name;

public:
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name = name;
    }
};

class GermanShepherd : public Dog
{
};

int main()
{
    GermanShepherd *d = new GermanShepherd;
    d->setName("Tommy");

    cout << d->getName() << " " << d->speak();

    return 0;
}