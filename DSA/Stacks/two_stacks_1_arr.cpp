#include <iostream>
using namespace std;

class twoStack {
private:
    int* arr;   // Dynamic array to hold elements of both stacks
    int top1;   // Index of the top element in the first stack
    int top2;   // Index of the top element in the second stack
    int size;   // Total size of the array

public:
    // Constructor to initialize the two stacks
    twoStack(int size) {
        this->size = size;
        top1 = -1;           // Initialize top1 for stack 1
        top2 = size;         // Initialize top2 for stack 2
        arr = new int[size]; // Allocate memory for the array
    }

    // Function to push an element onto the first stack
    void push1(int element) {
        // Check for space in the array
        if (top2 - top1 > 1) {
            top1++;          // Increment the top1 index
            arr[top1] = element; // Add the element to the array
        } else {
            cout << "Stack Overflow" << endl; // No space available
        }
    }

    // Function to push an element onto the second stack
    void push2(int element) {
        // Check for space in the array
        if (top2 - top1 > 1) {
            top2--;          // Decrement the top2 index
            arr[top2] = element; // Add the element to the array
        } else {
            cout << "Stack Overflow" << endl; // No space available
        }
    }

    // Function to pop an element from the first stack
    int pop1() {
        // Check if the first stack is empty
        if (top1 >= 0) {
            int poppedElement = arr[top1]; // Get the top element
            top1--;                        // Decrement the top1 index
            return poppedElement;          // Return the popped element
        } else {
            cout << "Stack Underflow" << endl; // Stack is empty
            return -1;                         // Indicate an error
        }
    }

    // Function to pop an element from the second stack
    int pop2() {
        // Check if the second stack is empty
        if (top2 < size) {
            int poppedElement = arr[top2]; // Get the top element
            top2++;                        // Increment the top2 index
            return poppedElement;          // Return the popped element
        } else {
            cout << "Stack Underflow" << endl; // Stack is empty
            return -1;                         // Indicate an error
        }
    }
};

int main() {
    twoStack s1(8); // Create a twoStack object with a size of 8

    // Push elements onto both stacks
    s1.push1(10);
    s1.push2(45);
    s1.push1(23);
    s1.push2(24);
    s1.push1(28);
    s1.push2(29);

    // Pop elements from both stacks and print them
    cout << "Popped from stack 1: " << s1.pop1() << endl;
    cout << "Popped from stack 2: " << s1.pop2() << endl;

    return 0;
}
