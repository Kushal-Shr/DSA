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

bool isCircular(Node *head)
{
    Node *curr = head->next;

    if (head == NULL)
    {
        return NULL;
    }

    else
    {
        while (curr != NULL && curr != head)
        {
            curr = curr->next;
        }

        if (curr == head)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    Node *head = new Node(5);

    bool Circular = isCircular(head);

    cout << isCircular << endl;

    return 0;
}