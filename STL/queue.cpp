#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Size: " << q.size() << endl;

    cout << "Front: " << q.front() << endl;

    q.pop();

    cout << "Front: " << q.front() << endl;

    return 0;
}