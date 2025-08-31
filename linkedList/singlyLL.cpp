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

// insert at some position
void insertAt(Node *&head, Node *&tail, int d, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, d);
        return;
    }

    Node *newNode = new Node(d);

    Node *temp = head;

    int i = 0;

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// delete by position
void deletePosition(Node *&head, Node *&tail, int pos)
{
    if (pos == 0)
    {
        head = head->next;
        return;
    }

    int i = 0;
    Node *temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp->next->next == NULL)
    {
        temp->next = NULL;
        tail = temp;
        return;
    }

    temp->next = temp->next->next;
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

    insertAtTail(tail, 9);
    print(head);

    insertAtHead(head, 1);
    print(head);

    insertAt(head, tail, 7, 3);
    print(head);

    insertAt(head, tail, 4, 2);
    print(head);

    deletePosition(head, tail, 2);
    print(head);

    deletePosition(head, tail, 0);
    print(head);

    deletePosition(head, tail, 3);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    return 0;
}