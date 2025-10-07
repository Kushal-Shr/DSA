#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    solve(st, x);

    st.push(num);
}

int main()
{
    stack<int> st;

    st.push(7);
    st.push(4);
    st.push(5);
    st.push(1);

    solve(st, 9);

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout << st.top();

    return 0;
}