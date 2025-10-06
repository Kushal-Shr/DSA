// operates in LIFO order
// Operations:
// 1. push
// 2. pop
// 3. peek
// 4. empty

#include <iostream>

using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int val)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = val;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack underflow" << endl;
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
            cout << "Stack is Empty" << endl;
    }

    bool empty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    // stack<int> st;

    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.pop();
    // st.push(4);
    // st.pop();

    // cout << st.top() << endl;
    // cout << st.empty() << endl;

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    st.pop();

    return 0;
}