#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};
class Stack {
    private:
        Node* top;

    public:
        Stack() {
            top = nullptr;
        }

        // Push operation
        void push(int data) {
            Node* newNode = new Node(data);
            newNode->next = top;
            top = newNode;
        }

        // Pop operation
        int pop() {
            if (top == nullptr) {
                cout << "Stack Underflow" << endl;
                return -1;
            }
            Node* temp = top;
            int poppedData = top->data;
            top = top->next;
            delete temp;
            return poppedData;
        }

        // Peek operation
        int peek() {
            if (top == nullptr) {
                cout << "Stack is empty" << endl;
                return -1;
            }
            return top->data;
        }

        // Check if the stack is empty
        bool isEmpty() {
            return top == nullptr;
        }

        // Print stack elements
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

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.printStack();  // Output: 30 20 10

    cout << "Top element is: " << s.peek() << endl;  // Output: Top element is: 30

    cout << "Popped element is: " << s.pop() << endl;  // Output: Popped element is: 30
    cout << "Stack elements after pop: ";
    s.printStack();  // Output: 20 10

    return 0;
}

    