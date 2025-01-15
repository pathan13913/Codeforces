#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
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
            return new Node(data);
        if (data < root->data)
            root->left = insertNode(root->left, data);
        else
            root->right = insertNode(root->right, data);
        return root;
    }

    void print_Pre_In_Post()
    {
        printPreorder();
        cout << endl;
        printInorder();
        cout << endl;
        printPostorder();
        cout << endl;
    }
    void printPreorder()
    {
        cout << "preorder  : ";
        printPreorder(this->root);
    }
    void printPreorder(Node *root)
    {
        if (root == NULL)
            return;
        cout << root->data << " ";
        printPreorder(root->left);
        printPreorder(root->right);
    }
    void printInorder()
    {
        cout << "inorder   : ";
        printInorder(this->root);
    }
    void printInorder(Node *root)
    {
        if (root == NULL)
            return;
        printInorder(root->left);
        cout << root->data << " ";
        printInorder(root->right);
    }
    void printPostorder()
    {
        cout << "postorder : ";
        printPostorder(this->root);
    }
    void printPostorder(Node *root)
    {
        if (root == NULL)
            return;
        printPostorder(root->left);
        printPostorder(root->right);
        cout << root->data << " ";
    }

    void searchData(int data)
    {
        int find = searchData(this->root, data);
        if (find == 1)
            cout << data << " is found" << endl;
        else
            cout << data << " is not found" << endl;
    }
    bool searchData(Node *root, int data)
    {
        if (root == NULL)
            return false;
        if (root->data == data)
            return true;
        if (data < root->data)
            return searchData(root->left, data);
        else
            return searchData(root->right, data);
    }

    int maxData()
    {
        return maxData(this->root);
    }
    int maxData(Node *root)
    {
        if (root->right == NULL)
            return root->data;
        return maxData(root->right);
    }
    int minData()
    {
        return minData(this->root);
    }
    int minData(Node *root)
    {
        if (root->left == NULL)
            return root->data;
        return minData(root->left);
    }

    Node *maxNode()
    {
        return maxNode(this->root);
    }
    Node *maxNode(Node *root)
    {
        if (root->right == NULL)
            return root;
        return maxNode(root->right);
    }
    Node *minNode()
    {
        return minNode(this->root);
    }
    Node *minNode(Node *root)
    {
        if (root->left == NULL)
            return root;
        return minNode(root->left);
    }

    void deleteNode(int data)
    {
        root = deleteNode(this->root, data);
    }
    Node *deleteNode(Node *root, int data)
    {
        if (root == NULL)
            return NULL;
        if (data < root->data)
            root->left = deleteNode(root->left, data);
        else if (data > root->data)
            root->right = deleteNode(root->right, data);
        else
        {
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                root = NULL;
                return root;
            }
            else if (root->left == NULL)
            {
                Node *temp = root;
                root = root->right;
                delete temp;
                return root;
            }
            else if (root->right == NULL)
            {
                Node *temp = root;
                root = root->left;
                delete temp;
                return root;
            }
            else
            {
                Node *temp = minNode(root->right);
                root->data = temp->data;
                deleteNode(root->right, root->data);
                return root;
            }
        }
    }

    int heightBST()
    {
        return heightBST(this->root);
    }
    int heightBST(Node *root)
    {
        if (root == NULL)
            return -1;
        return 1 + max(heightBST(root->left), heightBST(root->right));
    }

    int countNodes()
    {
        return countNodes(this->root);
    }
    int countNodes(Node *root)
    {
        if (root == NULL)
            return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int sumNodesValue()
    {
        return sumNodesValue(this->root);
    }
    int sumNodesValue(Node *root)
    {
        if (root == NULL)
            return 0;
        return root->data + sumNodesValue(root->left) + sumNodesValue(root->right);
    }

    int countLeafNodes()
    {
        return countLeafNodes(this->root);
    }
    int countLeafNodes(Node *root)
    {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        return countLeafNodes(root->left) + countLeafNodes(root->right);
    }

    void printLevelOrder()
    {
        printLevelOrder(this->root);
        printLevelOrderNewLine(this->root);
    }
    void printLevelOrder(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *temp = q.front();
            cout << temp->data << " ";
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
        cout << endl;
    }
    void printLevelOrderNewLine(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if (temp == NULL)
            {
                cout << endl;
                if (!q.empty())
                    q.push(NULL);
            }
            else
            {
                cout << temp->data << " ";
                if (temp->left != NULL)
                    q.push(temp->left);
                if (temp->right != NULL)
                    q.push(temp->right);
            }
        }
    }

    int sumKthlevel(int k)
    {
        return sumKthlevel(this->root, k);
    }
    int sumKthlevel(Node *root, int k)
    {
        if (root == NULL)
            return 0;
        if (k == 0)
            return root->data;
        return sumKthlevel(root->left, k - 1) + sumKthlevel(root->right, k - 1);
    }
};

class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }

    void insertNode(int data)
    {
        root = insertNode(this->root, data);
    }
    Node *insertNode(Node *root, int data) // why do not work this code
    {
        if (root == NULL)
            return new Node(data);
        else if (root->left == NULL)
            root->left = insertNode(root->left, data);
        else
            root->right = insertNode(root->right, data);
        return root;
    }
    void inOrder()
    {
        inOrder(this->root);
    }
    void inOrder(Node *root)
    {
        if (root == NULL)
            return;
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
};

// Node* buildTreeFrom_Pre_In(int pre[], int in[])
// {
//     int start = 0;
//     int end = (sizeof(pre) / sizeof(pre[0])) -1 ;
//     return buildTreeFrom_Pre_In(pre, in, start, end);
// }
// Node* buildTreeFrom_Pre_In(int pre[], int in[], int start, int end)
// {
//     static int index = 0;
//     if (start > end || index >= sizeof(pre) / sizeof(pre[0]))
//         return NULL;
//     Node *root = new Node(pre[index]);
//     index++;
//     if (start == end)
//         return root;
//     int poss = findposs(in, start, end, root->data);
//     root->left = buildTreeFrom_Pre_In(pre, in, start, poss - 1);
//     root->right = buildTreeFrom_Pre_In(pre, in, poss + 1, end);
//     return root;
// }

// Node* buildTreeFrom_Post_In(int post[], int in[])
// {
//     int start = 0;
//     int end = sizeof(post) / sizeof(post[0]);
//     return buildTreeFrom_Post_In(post, in, start, end-1);
// }
// Node* buildTreeFrom_Post_In(int post[], int in[], int start, int end)
// {
//     static int index = end;
//     if (start > end)
//         return NULL;
//     Node *root = new Node(post[index]);
//     index--;
//     if (start == end)
//         return root;
//     int poss = findposs(in, start, end, root->data);
//     root->right = buildTreeFrom_Post_In(post, in, poss + 1, end);
//     root->left = buildTreeFrom_Post_In(post, in, start, poss - 1);
//     return root;
// }

int findposs(int arr[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == key)
            return i;
    }
}

void inOrderprintout(Node *root)
{
    if (root == NULL)
        return;
    inOrderprintout(root->left);
    cout << root->data << " ";
    inOrderprintout(root->right);
}

int main()
{
    int arr[] = {10, 5, 15, 3, 7, 12, 18}; // 10, 5, 15, 3, 7, 12, 18
    int n = sizeof(arr) / sizeof(arr[0]);

    BST bst; //=  BST();

    for (int i = 0; i < n; i++)
        bst.insertNode(arr[i]);

    cout << bst.root->data << endl;

    bst.print_Pre_In_Post();

    bst.searchData(12);
    bst.searchData(20);

    cout << "Height of BST is : " << bst.heightBST() << endl;
    cout << "Max data in BST is : " << bst.maxData() << endl;
    cout << "Min data in BST is : " << bst.minData() << endl;
    cout << "Nodes of BST is : " << bst.countNodes() << endl;
    cout << "Sum of Nodes Value of BST is : " << bst.sumNodesValue() << endl;
    cout << "Leaf Nodes of BST is : " << bst.countLeafNodes() << endl;
    bst.printLevelOrder();
    cout << bst.sumKthlevel(1) << endl;

    // int preOrderr[] = {10, 5, 3, 7, 15, 12, 18};
    // int inOrderr[] = {3, 5, 7, 10, 12, 15, 18};
    // int postOrderr[] = {3, 7, 5, 12, 18, 15, 10};

    // Node *n = buildTreeFrom_Pre_In(preOrder, inOrder);
    // inOrderprintout(n);
    // cout<<n->data;

    // bst.deleteNode(10);
    // bst.print_Pre_In_Post();

    // Tree tree; //=  BST();

    // for (int i = 0; i < n; i++)
    //     tree.insertNode(arr[i]);

    // cout << tree.root->data << endl;

    // cout << tree.root->left->data << endl;
    // cout << tree.root->right->data << endl;

    // cout << tree.root->left->left->data << endl;
    // cout << tree.root->left->right->data << endl;

    // cout << tree.root->right->left->data << endl;
    // cout << tree.root->right->right->data << endl;

    // tree.inOrder();
    cout << "\nok all are ok \n";

    return 0;
}
