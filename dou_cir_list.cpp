#include <iostream>

// Node structure with two pointers
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};



class DoublyCircularLinkedList {
private:
    Node* head;

public:
    DoublyCircularLinkedList() : head(nullptr) {}

    // Insert a node at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);

        // Case 1: If the list is empty
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
            newNode->prev = head; // Points to itself both ways
            return;
        }

        // Case 2: List has elements (Grab the last node using head->prev)
        Node* last = head->prev;

        last->next = newNode;
        newNode->prev = last;
        newNode->next = head;
        head->prev = newNode; // Complete the circle
    }

    // Traverse forward from head to tail
    void displayForward() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        std::cout << "Forward Traversal:  ";
        do {
            std::cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        std::cout << "(back to head: " << head->data << ")\n";
    }

    // Traverse backward from tail to head
    void displayBackward() {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        Node* last = head->prev; // Instantly jump to the end
        Node* temp = last;
        
        std::cout << "Backward Traversal: ";
        do {
            std::cout << temp->data << " <-> ";
            temp = temp->prev;
        } while (temp != last);
        std::cout << "(back to tail: " << last->data << ")\n";
    }

    // Destructor to clean up memory
    ~DoublyCircularLinkedList() {
        if (head == nullptr) return;

        Node* current = head;
        Node* nextNode = nullptr;

        // Break the circle to prevent infinite deletion loops
        head->prev->next = nullptr; 

        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    DoublyCircularLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.displayForward();
    list.displayBackward();

    return 0;
}