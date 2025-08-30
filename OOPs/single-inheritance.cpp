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
private:
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

int main()
{
    Dog *d = new Dog;
    d->setName("Tommy");

    cout << d->getName() << " " << d->speak();

    return 0;
}