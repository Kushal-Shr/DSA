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

// insert at tail
void insertAtTail(Node *&tail, int d)
{
    Node *newNode = new Node(d);

    tail->next = newNode;
    tail = tail->next;
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
    cout << endl;
}

int main()
{
    Node *newNode = new Node(3);
    print(newNode);

    Node *head = newNode;
    Node *tail = newNode;

    insertAtTail(tail, 5);
    print(head);

    insertAtTail(tail, 7);
    print(head);

    insertAtHead(head, 1);
    print(head);

    return 0;
}