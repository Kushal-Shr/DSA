#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    insertAtBottom(st, x);

    st.push(num);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
        return;

    int num = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, num);
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top() << endl;

    reverseStack(st);

    cout << st.top() << endl;

    return 0;
}