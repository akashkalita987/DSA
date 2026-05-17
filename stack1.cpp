#include <iostream>
#include <vector>
#include <stdexcept>

class Stack {
private:
    std::vector<int> elements;

public:
    // Add an element to the top of the stack
    void push(int value) {
        elements.push_back(value);
        std::cout << value << " pushed onto stack.\n";
    }

    // Remove the top element from the stack
    void pop() {
        if (isEmpty()) {
            throw std::underflow_error("Stack Underflow: Cannot pop from an empty stack.");
        }
        int removedElement = elements.back();
        elements.pop_back();
        std::cout << removedElement << " popped from stack.\n";
    }

    // Return the top element without removing it
    int peek() const {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty: No top element.");
        }
        return elements.back();
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }

    // Return the current size of the stack
    size_t size() const {
        return elements.size();
    }
};

int main() {
    Stack myStack;

    try {
        // Pushing elements onto the stack
        myStack.push(10);
        myStack.push(20);
        myStack.push(30);

        std::cout << "Current top element: " << myStack.peek() << "\n";
        std::cout << "Stack size: " << myStack.size() << "\n";

        // Popping elements
        myStack.pop();
        std::cout << "Top element after pop: " << myStack.peek() << "\n";

        myStack.pop();
        myStack.pop();

        // This will trigger an exception because the stack is now empty
        myStack.pop(); 

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}