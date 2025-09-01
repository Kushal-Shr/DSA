#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *&head)
{
    Node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int length(Node *&head)
{
    int len = 0;
    Node *curr = head;

    while (curr != NULL)
    {
        len++;
        curr = curr->next;
    }

    return len;
}

// insert at head
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *curr = new Node(data);
        head = curr;
        tail = curr;
    }
    else
    {
        Node *curr = head;
        Node *newNode = new Node(data);

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// insert at tail
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *curr = new Node(data);
        tail = curr;
        head = curr;
    }
    else
    {
        Node *curr = tail;
        Node *newNode = new Node(data);

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

// insert at some position
void insertAt(Node *&head, Node *&tail, int data, int pos)
{

    if (pos == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *curr = head;
    Node *newNode = new Node(data);

    int i = 0;
    while (i < pos)
    {
        curr = curr->next;
        i++;
    }

    if (curr == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    curr->prev->next = newNode;
    newNode->prev = curr->prev;
    curr->prev = newNode;
    newNode->next = curr;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 1);
    print(head);

    insertAtTail(head, tail, 4);
    print(head);

    insertAt(head, tail, 3, 1);
    print(head);

    cout << "Length: " << length(head) << endl;
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}