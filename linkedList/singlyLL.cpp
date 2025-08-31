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
        this->next = NULL;
    }
};

// insert at head
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

// print
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *newNode = new Node(3);

    insertAtHead(newNode, 5);
    insertAtHead(newNode, 7);
    insertAtHead(newNode, 8);

    print(newNode);

    return 0;
}