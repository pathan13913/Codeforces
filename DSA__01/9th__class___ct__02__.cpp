  #include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right, *parent;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        this->parent = NULL;
    }
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }

    void insertNode(int data)
    {
        root = insertNode(this->root, data);
    }
    Node *insertNode(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);;
        }
        if (data < root->data)
        {
            root->left = insertNode(root->left, data);
            root->left->parent = root;

        }
        else
        {
            root->right = insertNode(root->right, data);
            root->right->parent = root;

        }
        return root;
    }
    void postOrder()
    {
        postOrder(this->root);
    }
    void postOrder(Node *root)
    {
        if (root == NULL)
            return;
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
     Node *lcm(int a, int b)
    {
        return lcm(this->root, a, b);
    }
    Node *lcm(Node *root, int a, int b)
    {
        if (root == NULL)
            return root;
        if (a < root->data && b < root->data)
            return lcm(root->left, a, b);
        else if (a > root->data && b > root->data)
            return lcm(root->right, a, b);
        return root;
    }
};

int main()
{
    int arr[] = {13, 10, 8, 7, 12, 11, 16, 14, 15, 18};
    BST bst;
    for (int i = 0; i < 10; i++)
        bst.insertNode(arr[i]);

    bst.postOrder();
cout<<endl;

    Node *ans = bst.lcm(7, 18);
     cout <<ans->data;
     cout<<endl;
     cout<<bst.root->right->left->parent->data;



    return 0;
}
