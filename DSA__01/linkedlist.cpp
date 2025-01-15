#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = nullptr;
    }
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }
    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void insertAtTail(int data)
    {
        Node *curr = head;
        while (curr->next)
            curr = curr->next;
        Node *newNode = new Node(data);
        curr->next = newNode;
    }
    void insertAfter(int x, int y)
    {
        Node *curr = head;
        while (curr and curr->data != x)
            curr = curr->next;
        if (not curr)
        {
            cout << x << " not found\n";
            return;
        }
        Node *newNode = new Node(y);
        newNode->next = curr->next;
        curr->next = newNode;
    }
    void deleteHead()
    {
        if (not head)
            return;
        Node *temp = head;
        head = head->next;
        free(temp);
    }
    void deleteTail()
    {
        Node *curr = head;
        while (curr->next->next)
            curr = curr->next;
        Node *temp = curr->next;
        curr->next = nullptr;
        free(temp);
    }

    void deleteValue(int value)
    {
        Node *curr = head;
        Node *prev = nullptr;

        // If the head node itself holds the value to be deleted
        if (curr != nullptr && curr->data == value)
        {
            head = curr->next; // Change head
            delete curr;       // free old head
            return;
        }

        // Search for the value to be deleted, keep track of the previous node
        while (curr != nullptr && curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        // If the key was not present in linked list
        if (curr == nullptr)
            return;

        // Unlink the node from linked list
        prev->next = curr->next;

        delete curr; // Free memory
    }

    int countElements()
    {
        int count = 0;
        Node *curr = head;
        while (curr)
        {
            count++;
            curr = curr->next;
        }
        return count;
    }

    void printList()
    {
        Node *curr = head;
        while (curr)
        {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "Null\n";
    }
};

int main()
{
    LinkedList linkedlist = LinkedList();
    linkedlist.insertAtHead(10);
    linkedlist.insertAtHead(20);
    linkedlist.insertAtHead(30);
    linkedlist.insertAtHead(40);
    linkedlist.insertAtHead(50);
    linkedlist.insertAtTail(60);
    linkedlist.insertAtTail(70);
    linkedlist.insertAtTail(80);
    linkedlist.insertAfter(40, 45);
    linkedlist.insertAfter(35, 40);
    linkedlist.deleteHead();
    linkedlist.deleteTail();
    linkedlist.printList();
}