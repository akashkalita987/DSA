#include <iostream>
using namespace std;

class SinglyLinked
{
    struct Node
    {
        int data;
        Node *next;
        Node(int val) : data(val), next(nullptr) {}
    };
    Node *head;

public:
    SinglyLinked() : head(nullptr) {}

    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void deleteValue(int val)
    {
        if (head == nullptr)
            return;
        if (head->data == val)
        {
            Node *toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        Node *curr = head;
        while (curr->next != nullptr && curr->next->data != val)
            curr = curr->next;
        if (curr->next != nullptr)
        {
            Node *toDelete = curr->next;
            curr->next = curr->next->next;
            delete toDelete;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
