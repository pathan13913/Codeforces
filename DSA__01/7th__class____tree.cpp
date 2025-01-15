#include <bits/stdc++.h>
using namespace std;
  
class Node
{
public:
    int data;
    Node *parent, *left, *right;
    Node(int data)
    {
        this->data = data;
        parent = nullptr;
        left = nullptr;
        right = nullptr;
    }
    Node(int data, Node *parent)
    {
        this->data = data;
        this->parent = parent;
        left = nullptr;
        right = nullptr;
    }
};

int getDepth(Node *r)
{
    if (not r)
        return -1;
    return 1 + getDepth(r->parent);
}

int getHeight(Node *r)
{
    if (not r)
        return -1;
    return 1 + max(getHeight(r->left), getHeight(r->right));
}

string preOrder(Node *r)
{
    string traversal;
    traversal += to_string(r->data);
    if (r->left)
    {
        traversal += "->";
        traversal += preOrder(r->left);
    }
    if (r->right)
    {
        traversal += "->";
        traversal += preOrder(r->right);
    }
    return traversal;
}
string inOrder(Node *r)
{
    string traversal;

    if (r->left)
    {

        traversal += inOrder(r->left);
        traversal += "->";
    }
    traversal += to_string(r->data);
    if (r->right)
    {
        traversal += "->";
        traversal += inOrder(r->right);
    }
    return traversal;
}

string postOrder(Node *r)
{
    string traversal;

    if (r->left)
    {
        traversal += postOrder(r->left);
        traversal += "->";
    }

    if (r->right)
    {
        traversal += postOrder(r->right);
        traversal += "->";
    }
    
    traversal += to_string(r->data);
    return traversal;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(6, root);
    root->right = new Node(8, root);
    root->left->right = new Node(11, root->left);
    root->right->left = new Node(9, root->right);
    root->right->right = new Node(7, root->right);
    cout << getDepth(root->left) << endl;
    cout << getHeight(root) << endl;
    cout << preOrder(root) << endl;
    cout << inOrder(root) << endl;
    cout << postOrder(root) << endl;
}
