#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> st;

    st.push("Hello");
    st.push("World");
    st.push("Hello");
    st.push("Kushal");

    cout << "Size: " << st.size() << endl;

    cout << "Top element: " << st.top() << endl;

    st.pop();

    cout << "Size: " << st.size() << endl;

    cout << "Top element: " << st.top() << endl;

    return 0;
}