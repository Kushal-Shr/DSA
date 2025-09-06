#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = this;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    Node *newNode = new Node(data);

    if (tail == NULL)
    {
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void print(Node *tail)
{
    Node *curr = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != curr);

    cout << endl;
}

int main()
{
    Node *node1 = new Node(5);

    Node *tail = node1;

    insertNode(tail, 5, 7);
    insertNode(tail, 7, 8);
    insertNode(tail, 8, 9);
    insertNode(tail, 5, 6);

    print(tail);

    return 0;
}