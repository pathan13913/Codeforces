
#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *parent, *left, *right;
    Node(int data) {
        this->data = data;
        parent = nullptr;
        left = nullptr;
        right = nullptr;
    }
    Node(int data, Node* parent) {
        this->data = data;
        this->parent = parent;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
public:
    Node* root;
    BST() {
        root = nullptr;
    }
    bool searchData(Node* r, int data) {
        if (not r)
            return false;
        if (r->data == data)
            return true;
        if (r->data > data)
            return searchData(r->left, data);
        return searchData(r->right, data);
    }
    bool searchData(int data) {
        return searchData(root, data);
    }
    Node* deleteData(Node* r, int data) {
        if (data == r->data) {
            // Number of child
            // 0 child case
            if (not r->left and not r->right) {
                delete r;
                return nullptr;
            }

            if (r->left and r->right) {
                return nullptr; //temporarily
            }
            if (r->left)
                return r->left;
            return r->right;

        }
        if (data < r->data)
            r->left = deleteData(r->left, data);
        else
            r->right = deleteData(r->right, data);
        return r;
    }
    Node* deleteData(int data) {
        return root = deleteData(root, data);
    }
    Node* insertData(Node* r, int data) {
        if (not r)
            return new Node(data);
        if (data < r->data)
            r->left = insertData(r->left, data);
        else
            r->right = insertData(r->right, data);
        return r;
    }
    Node* insertData(int data) {
        root = insertData(root, data);
        return root;
    }
    Node* getMinimum(Node* r) {
        Node* curr = r;
        while (curr->left) {
            curr = curr->left;
        }
        return curr;
    }
    Node* inorderSuccessor(Node* r) {
        if (r->right)
            return getMinimum(r->right);
    }
    string preOrder(Node* r) {
        string traversal;
        stringstream ss;
        ss << r->data;
        traversal += ss.str();
        if (r->left) {
            traversal += "->";
            traversal += preOrder(r->left);
        }
        if (r->right) {
            traversal += "->";
            traversal += preOrder(r->right);
        }
        return traversal;
    }
    string preOrder() {
        return preOrder(this->root);
    }
};

int getDepth(Node* r) {
    if (not r)
        return -1;
    return 1 + getDepth(r->parent);
}

int getHeight(Node* r) {
    if (not r)
        return -1;
    return 1 + max(getHeight(r->left), getHeight(r->right));
}



int main() {
    BST bst = BST();
    bst.insertData(13);
    bst.insertData(10);
    bst.insertData(8);
    bst.insertData(7);
    bst.insertData(12);
    bst.insertData(11);
    bst.insertData(16);
    bst.insertData(14);
    bst.insertData(15);
    bst.insertData(18);
    cout << bst.preOrder() << endl;
    if (bst.searchData(9))
        cout << "Found\n";
    else
        cout << "Not found\n";
    bst.deleteData(10);
    cout << bst.preOrder() << endl;
}