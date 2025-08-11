#include <iostream>

using namespace std;

void print(int n)
{
    if (n == 0)
        return;

    cout << n << endl;

    print(n - 1);
}

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    print(num);

    return 0;
}