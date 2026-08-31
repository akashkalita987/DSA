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
};
