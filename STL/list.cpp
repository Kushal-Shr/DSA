#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lst;

    lst.push_back(1);
    lst.push_front(0);

    cout << "Size: " << lst.size() << endl;
    for (int num : lst)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
