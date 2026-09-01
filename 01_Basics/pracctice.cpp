#include<iostream>
using namespace std;

class SinglyLinked {
    struct Node{
        int data;
        Node* next;
        Node (int val) : data(val), next(nullptr) {}
    };
    Node* head;
    public:
        SinglyLinked () : head(nullptr) {}

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == nullptr) { head = newNode; return;}
    }
};
