#include <iostream>
using namespace std;

// Define the Node class
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Define the Stack class
class Stack {
private:
    Node* top;  // Pointer to the top of the stack

public:
    Stack() {
        top = nullptr;  // Initialize the stack as empty
    }

    // Push operation: Add an element to the top of the stack
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    // Pop operation: Remove and return the top element of the stack
    int pop() {
        if (top == nullptr) {
            cout << "Stack Underflow" << endl;
            return -1;  // Return -1 if the stack is empty
        }
        int poppedData = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;  // Free the memory of the popped node
        return poppedData;
    }

    // Peek operation: Return the top element of the stack without removing it
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;  // Return -1 if the stack is empty
        }
        return top->data;
    }

    // Print operation: Print all elements of the stack
    void printStack() {
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Print the stack elements
    cout << "Stack elements: ";
    s.printStack();  // Output: 30 20 10

    // Peek the top element
    cout << "Top element is: " << s.peek() << endl;  // Output: Top element is: 30

    // Pop elements from the stack
    cout << "Popped element is: " << s.pop() << endl;  // Output: Popped element is: 30
    cout << "Stack elements after pop: ";
    s.printStack();  // Output: 20 10

    return 0;
}
