#include <iostream>
#include <queue>
using namespace std;

// Define the Node class which represents a single node in the binary tree
class Node {
public:
    int data;   // Data field to store the value of the node
    Node* left; // Pointer to the left child node
    Node* right;// Pointer to the right child node

    // Constructor to initialize a new node with a given value
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Function to build a binary tree from user input recursively
Node* buildTree(Node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data; // Read the input data

    // Base case: if the input data is -1, return NULL indicating no node
    if (data == -1) {
        return nullptr;
    }

    // Create a new node with the input data
    root = new Node(data);

    // Recursively build the left subtree
    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    // Recursively build the right subtree
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root; // Return the constructed subtree rooted at 'root'
}

int main() {
    Node* root = nullptr; // Initialize the root of the binary tree to NULL

    // Creating and building the binary tree from user input
    root = buildTree(root);

    return 0; // End of the program
}
