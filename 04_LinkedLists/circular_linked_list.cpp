#include <iostream>

// Define the Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Insert a node at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);
        
        if (head == nullptr) {
            head = newNode;
            newNode->next = head; // Point to itself to form the circle
            return;
        }

        Node* temp = head;
        // Traverse to the last node (the node that points back to head)
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode; // Last node points to new node
        newNode->next = head; // New node points back to head
    }

    // Display the list elements
    void display() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        std::cout << "Circular Linked List: ";
        do {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head); // Stop when we loop back to the head
        
        std::cout << "(back to head: " << head->data << ")\n";
    }

    // Destructor to clean up memory safely
    ~CircularLinkedList() {
        if (head == nullptr) return;

        Node* current = head;
        Node* nextNode = nullptr;
        
        // Break the circle to prevent infinite looping during deletion
        Node* tail = head;
        while (tail->next != head) {
            tail = tail->next;
        }
        tail->next = nullptr; 

        // Standard sequential deletion
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    CircularLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.display();

    return 0;
}