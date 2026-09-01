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

    // Destructor to deallocate memory when the object goes out of scope
    ~SinglyLinked()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    // Disable copy constructor and copy assignment to prevent dangling pointers/double frees
    SinglyLinked(const SinglyLinked &) = delete;
    SinglyLinked &operator=(const SinglyLinked &) = delete;

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

    void display() const
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    SinglyLinked list;

    // Insert elements
    list.insertAtHead(10);
    list.insertAtHead(5);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    cout << "Initial list: ";
    list.display(); // Expected: 5 -> 10 -> 20 -> 30 -> NULL

    // Delete head element
    list.deleteValue(5);
    cout << "After deleting 5 (head): ";
    list.display(); // Expected: 10 -> 20 -> 30 -> NULL

    // Delete middle element
    list.deleteValue(20);
    cout << "After deleting 20 (middle): ";
    list.display(); // Expected: 10 -> 30 -> NULL

    // Delete tail element
    list.deleteValue(30);
    cout << "After deleting 30 (tail): ";
    list.display(); // Expected: 10 -> NULL

    return 0;
}