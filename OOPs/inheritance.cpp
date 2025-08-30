#include <iostream>

using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }

    int setAge(int age)
    {
        this->age = age;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
};

int main()
{
    Male *Kushal = new Male;

    Kushal->age = 19;

    cout << Kushal->getAge() << endl;
    Kushal->sleep();

    return 0;
}