#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq;

    // push_back() & push_front() --> adds elements to the back and front of the deque
    dq.push_back(1);
    dq.push_front(0);

    cout << dq.size() << endl;
    for (int num : dq)
    {
        cout << num << " ";
    }
    cout << endl;

    dq.push_back(2);
    dq.push_front(-1);

    cout << dq.size() << endl;
    for (int num : dq)
    {
        cout << num << " ";
    }
    cout << endl;

    // pop_back() & pop_front() --> removes elements from the back and front of the deque
    dq.pop_back();
    dq.pop_front();

    cout << dq.size() << endl;
    for (int num : dq)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}