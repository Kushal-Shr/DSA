#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createTree(Node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
        return NULL;

    cout << "Enter data left to " << root->val << ": ";
    root->left = createTree(root->left);

    cout << "Enter data right to " << root->val << ": ";
    root->right = createTree(root->right);

    return root;
}

void countLeafNode(Node *root, int &count)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        count++;

    countLeafNode(root->left, count);
    countLeafNode(root->right, count);
}

int main()
{
    Node *root = NULL;
    root = createTree(root);
    int count = 0;
    countLeafNode(root, count);
    cout << count;
    return 0;
}