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

class linkedListByMe
{
public:
    Node *head;
    linkedListByMe()
    {
        head = NULL;
    }

    void insertHead(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertTail(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertPosition(int poss, int data)
    {
        if (head == NULL)
            return;
        if (poss == 0)
        {
            insertHead(data);
            return;
        }
        Node *curr = head;
        poss--; // 0 base index thats way.
        while (curr->next && poss--)
            curr = curr->next;

        Node *new_node = new Node(data);
        new_node->next = curr->next;
        curr->next = new_node;
    }

    void insertChangeValueAll(int value, int data)
    {
        Node *curr = head;
        while (curr)
        {
            if (curr->data == value)
                curr->data = data;

            curr = curr->next;
        }
    }

    void insertValueAfter(int value, int data)
    {
        if (head == NULL)
            return;

        Node *curr = head;
        while (curr->next && curr->data != value)
            curr = curr->next;

        if (curr->data == value)
        {
            Node *new_node = new Node(data);
            new_node->next = curr->next;
            curr->next = new_node;
        }
        else
            cout << "Value not found" << endl;
    }

    void insertValueBefore(int value, int data)
    {
        if (head == NULL)
            return;
        if (head->data == value)
        {
            insertHead(data);
            return;
        }

        Node *curr = head;
        while (curr->next->next && curr->next->data != value)
            curr = curr->next;

        if (curr->next->data == value)
        {
            Node *new_node = new Node(data);
            new_node->next = curr->next;
            curr->next = new_node;
        }
        else
            cout << "Value not found" << endl;
    }

    void insertValueInSortedList(int data)
    {
        if (head->data > data)
        {
            insertHead(data);
            return;
        }
        Node *curr = head;
        while (curr->next)
            curr = curr->next;

        if (curr->data < data)
        {
            insertTail(data);
            return;
        }
        curr = head;
        while (curr->next && curr->next->data < data)
            curr = curr->next;

        Node *new_node = new Node(data);
        new_node->next = curr->next;
        curr->next = new_node;
    }

    void deleteHead()
    {
        if (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            free(temp);
        }
        else
            cout << "Empty list " << endl;
    }

    void deleteTail()
    {
        if (head == NULL)
            return;
        Node *curr = head;
        while (curr->next->next)
            curr = curr->next;

        Node *temp = curr->next;
        curr->next = NULL;
        free(temp);
    }

    void deletePosition(int poss)
    {
        if (head == NULL)
            return;
        if (poss == 0)
        {
            deleteHead();
            return;
        }

        Node *curr = head;
        poss--; // 0 base index thats way.
        while (curr->next && poss--)
            curr = curr->next;

        Node *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
    }

    void deletePositionFromEnd(int poss)
    {
        if (head == NULL)
            return;
        if (poss == 0)
        {
            deleteTail();
            return;
        }

        Node *ptr1 = head;
        Node *ptr2 = head;
        while (poss--)
            ptr2 = ptr2->next;

        if (ptr2 == NULL)
        {
            deleteHead();
            return;
        }

        while (ptr2->next)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        Node *temp = ptr1->next;
        ptr1->next = ptr1->next->next;
        free(temp);
    }

    void deleteValue(int value)
    {
        if (head == NULL)
            return;
        if (head->data == value)
        {
            deleteHead();
            return;
        }
        Node *curr = head;
        while (curr->next->next && curr->next->data != value)
            curr = curr->next;

        if (curr->next->data == value)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else
            cout << "Value Not found" << endl;
    }

    void deleteValueAfter(int value)
    {
        if (head == NULL)
            return;

        Node *curr = head;
        while (curr->next->next && curr->data != value)
            curr = curr->next;

        if (curr->data == value)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else
            cout << "Value Not found" << endl;
    }

    void deleteValueBefore(int value)
    {
        if (head == NULL || head->data == value)
            return;
        if (head->next->data == value)
        {
            deleteHead();
            return;
        }

        Node *curr = head;
        while (curr->next->next->next && curr->next->next->data != value)
            curr = curr->next;

        if (curr->next->next->data == value)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else
            cout << "Value Not found" << endl;
    }

    void deleteDublicate()
    {
        Node *curr = head;
        while (curr)
        {
            while (curr->next && curr->data == curr->next->data)
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
        int length = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }
        return length;
    }

    void printData()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "->NULL" << endl;
    }

    void reversePrintData()
    {
        cout << "Reverse Print" << endl;
        reverse(head);
        cout << endl;
    }

    void reverse(Node *temp)
    {
        if (temp == NULL)
            return;
        reverse(temp->next);
        cout << temp->data << " ";
    }

    void reverseLink()
    {
        Node *curr = head;
        Node *prev = NULL;
        while (curr)
        {
            Node *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
    }
};

void checkEqualLists(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int flag = 1;
    while (temp1 && temp2)
    {
        if (temp1->data != temp2->data)
        {
            flag = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (flag && temp1 == NULL && temp2 == NULL)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;
}

int size(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

Node *moveHeadByK(Node *head, int k)
{
    Node *ptr = head;
    while (k--)
    {
        ptr = ptr->next;
    }
    return ptr;
}

Node *findIntersection(Node *head1, Node *head2)
{
    int size1 = size(head1);
    int size2 = size(head2);
    Node *ptr1;
    Node *ptr2;
    if (size1 > size2)
    {
        int k = size1 - size2;
        ptr1 = moveHeadByK(head1, k);
        ptr2 = head2;
    }
    else
    {
        int k = size2 - size1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2, k);
    }

    while (ptr1)
    {
        if (ptr1 == ptr2)
            return ptr1;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}

Node *mergeLinkedLists(Node *head1, Node *head2)
{
    Node *dummyHeadNode = new Node(0);
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *ptr3 = dummyHeadNode;

    while (ptr1 && ptr2)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    if (ptr1)
        ptr3->next = ptr1;
    else
        ptr3->next = ptr2;

    return dummyHeadNode->next;
}

Node *findMiddleElement(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *findkethNode(Node *head, int k)
{
    Node *temp = head;
    for (int i = 0; i < k; i++)
    {
        temp = temp->next;
    }
    return temp;
}

Node *findKthNodeFromEnd(Node *head, int k)
{
    Node *temp = head;
    Node *kthNode = head;
    for (int i = 0; i < k; i++)
    {
        temp = temp->next;
    }
    while (temp)
    {
        temp = temp->next;
        kthNode = kthNode->next;
    }
    return kthNode;
}

Node *findCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return slow;
    }
    return NULL;
}

void removeCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    slow = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}

bool isPalindrom(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *prev = NULL;
    while (slow)
    {
        Node *temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }
    while (head && prev)
    {
        if (head->data != prev->data)
            return false;
        head = head->next;
        prev = prev->next;
    }
    return true;
}
// main

int main()
{
    linkedListByMe list;
    for (int i = 1; i <= 10; i++)
        list.insertTail(i * 10);

    list.printData();
    cout << "length = " << list.size() << endl;

    // list.insertValueBefore(20, 20);
    // list.insertValueBefore(30, 30);
    // list.insertValueBefore(100, 95);
    // list.insertValueAfter(20, 20);
    // list.insertValueAfter(30, 30);
    // list.insertValueAfter(100, 105);
    // list.printData();
    // cout << "length = " << list.size() << endl;

    // list.insertChangeValueAll(20, 200);
    // list.insertChangeValueAll(30, 300);

    // list.deleteTail();
    // list.deleteValue(100);
    // list.deleteValue(10);
    // list.deleteValue(50);
    // list.deleteValueAfter(85);
    // list.deleteValueBefore(20);
    // list.deleteDublicate();

    // list.reversePrintData();
    //  list.reverse(list.head);
    // list.reverseLink();

    list.insertValueInSortedList(100);

    list.printData();
    cout << "length = " << list.size() << endl;
    cout << "END" << endl;
    return 0;
}