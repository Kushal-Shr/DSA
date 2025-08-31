#include <iostream>

using namespace std;

class A
{
public:
    string name;
    void sayHello()
    {
        cout << "Hello Kushal" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    A obj;
    string name = "Shubhangi";

    obj.sayHello(name);
    return 0;
}