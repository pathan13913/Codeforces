#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insertHead(int data)
    {
        Node *new_node = new Node(data);

        new_node->next = head;
        head = new_node;
    }

    void insertTail(int data)
    {
        Node *new_node = new Node(data);

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void insertPosition(int poss, int data)
    {
        if (head == NULL)
            return;
        if (poss <= 0)
        {
            insertHead(data);
            return;
        }

        int find_poss = 0;
        Node *temp = head;
        while (temp->next != NULL && find_poss != poss - 1)
        {
            find_poss++;
            temp = temp->next;
        }
        Node *new_node = new Node(data);
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void insertValueAfter(int value, int data)
    {
        Node *temp = head;
        while (temp->next != NULL && temp->data != value)
        {
            temp = temp->next;
        }

        if (temp->data == value)
        {
            Node *new_node = new Node(data);
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }

    void insertValueBefore(int value, int data)
    {
        Node *temp = head;
        if (temp->data == value)
        {
            insertHead(data);
            return;
        }
        while (temp->next->next != NULL && temp->next->data != value)
        {
            temp = temp->next;
        }

        if (temp->next->data == value)
        {
            Node *new_node = new Node(data);
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }

    void deleteHead()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        head = temp->next;
        free(temp);
    }

    void deleteTail()
    {
        Node *curr = head;
        while (curr->next->next != NULL)
            curr = curr->next;

        Node *temp = curr->next;
        curr->next = NULL;
        free(temp);
    }

    void deletePosition(int poss)
    {
        Node *temp = head;
        if (temp == NULL)
            return;
        if (poss == 0)
        {
            deleteHead();
            return;
        }

        int find_poss = 0;
        while (temp->next != NULL && find_poss != poss - 1)
        {
            find_poss++;
            temp = temp->next;
        }
        Node *del_node = temp->next;
        temp->next = del_node->next;
        free(del_node);
    }

    void deleteValue(int value)
    {
        Node *temp = head;
        if (temp->data == value)
        {
            deleteHead();
            return;
        }
        while (temp->next->next != NULL && temp->next->data != value)
        {
            temp = temp->next;
        }
        if (temp->next->data == value)
        {
            Node *del_node = temp->next;
            temp->next = del_node->next;
            free(del_node);
        }
    }

    void deleteValueAfter(int value)
    {
        Node *temp = head;
        while (temp->next->next != NULL && temp->data != value)
        {
            temp = temp->next;
        }

        if (temp->data == value)
        {
            Node *del_node = temp->next;
            temp->next = del_node->next;
            free(del_node);
        }
    }

    void deleteValueBefore(int value)
    {

        Node *temp = head;
        if (temp->data == value)
            return;
        else if (temp->next->data == value)
        {
            deleteHead();
            return;
        }
        while (temp->next->next != NULL && temp->next->next->data != value)
        {
            temp = temp->next;
        }

        if (temp->next->next->data == value)
        {
            Node *del_node = temp->next;
            temp->next = del_node->next;
            free(del_node);
        }
    }

    void deletDublicate() // for soted list only
    {
        Node *curr = head;

        while (curr != NULL)
        {

            while (curr->next != NULL && curr->data == curr->next->data)
            {
                Node *temp = curr->next;
                curr->next = curr->next->next;
                free(temp);
            }

            curr = curr->next;
        }
    }

    int size()
    {
        int count = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void printReverse(Node *temp)
    {

        if (temp == NULL)
            return;

        printReverse(temp->next);
        cout << temp->data << " ";
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << " -> NULL" << endl;
    }

    void reverseLink()
    {
        Node *curr_node = head;
        Node *prev_node = NULL;

        while (curr_node != NULL)
        {
            Node *temp = curr_node->next;

            curr_node->next = prev_node;
            prev_node = curr_node;
            curr_node = temp;
        }
        head = prev_node;
    }
};

void reverseLinkAll(Node *head)
{

    Node *curr_node = head;
    Node *prev_node = NULL;

    while (curr_node != NULL)
    {

        Node *temp = curr_node->next;
        curr_node->next = prev_node;
        prev_node = curr_node;
        curr_node = temp;
    }
    head = prev_node;
}

Node *reverseLinkAlll(Node *head)
{
    Node *curr_node = head;
    Node *prev_node = NULL;

    while (curr_node != NULL)
    {
        Node *temp = curr_node->next;
        curr_node->next = prev_node;
        prev_node = curr_node;
        curr_node = temp;
    }

    return prev_node;
}

int main()
{
    cout << "Code Run" << endl;
    LinkedList list; // = LinkedList();
    list.insertTail(10);
    list.insertTail(20);
    list.insertTail(30);
    list.insertTail(40);
    list.insertTail(50);
    list.insertTail(60);

    // list.insertPosition(110,9);
    list.print();

    // list.deletDublicate();
    // cout << "After Delete Dublicate" << endl;
    // list.print();

    list.printReverse(list.head);
    // list.head = reverselinkAlll(list.head);
    // reverselinkAll(list.head);
    // list.reverseLink();

    // list.insertPosition(13, 9);

    // list.insertValueAfter(20, 1000);
    // list.insertValueBefore(110, 1000);

    // list.deletePosition(1);
    // list.deleteValue(130);
    // list.deleteValueAfter(15);
    // list.deleteValueBefore(20);
    // list.reverseLink();
    cout << endl;
    list.print();
    cout << "Code End" << endl;
    return 0;
}