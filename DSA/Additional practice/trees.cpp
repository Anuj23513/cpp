#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node() {
        data = -1;
        left = right = NULL;
    }

    Node(int e) {
        data = e;
        left = right = NULL;
    }
};

class Tree {
    Node *root;
    int count;

public:
    Tree() {
        root = NULL;
        count = 0;
    }

    int insert1(int e) {
        Node *n = new Node(e);
        if (!root) {
            root = n;
            count++;
            return 0;
        }
        Node *temp = root;
        Node *prev = NULL;
        while (temp != NULL) {
            prev = temp;
            if (e < temp->data)
                temp = temp->left;
            else
                temp = temp->right;
        }
        if (e < prev->data)
            prev->left = n;
        else
            prev->right = n;
        count++;
        return 0;
    }

    int insert2(int e) {
        Node *n = new Node(e);
        if (!root) {
            root = n;
            count++;
            return 0;
        }
        Node *temp = root;

        while (true) {
            if (e < temp->data) {
                if (!temp->left) {
                    temp->left = n;
                    break;
                } else {
                    temp = temp->left;
                }
            } else {
                if (!temp->right) {
                    temp->right = n;
                    break;
                } else {
                    temp = temp->right;
                }
            }
        }
        count++;
        return 0;
    }

    Node* search(int e) {
        if (!root) {
            return NULL;
        }
        Node *temp = root;
        while (temp && temp->data != e) {
            if (e < temp->data) {
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }
        return temp;
    }

    void displayInOrder() {
        if (!root) {
            cout << "Tree is empty." << endl;
            return;
        }
        Node *stack[100];
        int top = -1;
        Node *current = root;
        while (current != NULL || top != -1) {
            while (current != NULL) {
                stack[++top] = current;
                current = current->left;
            }
            current = stack[top--];
            cout << current->data << " ";
            current = current->right;
        }
        cout << endl;
    }
};

int main() {
    Tree t;
    int choice, element;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert using insert1\n";
        cout << "2. Insert using insert2\n";
        cout << "3. Search\n";
        cout << "4. Display In-Order\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert using insert1: ";
                cin >> element;
                t.insert1(element);
                cout << "Element inserted using insert1.\n";
                break;

            case 2:
                cout << "Enter element to insert using insert2: ";
                cin >> element;
                t.insert2(element);
                cout << "Element inserted using insert2.\n";
                break;

            case 3:
                cout << "Enter element to search: ";
                cin >> element;
                if (t.search(element) != NULL)
                    cout << "Element " << element << " found in the tree.\n";
                else
                    cout << "Element " << element << " not found in the tree.\n";
                break;

            case 4:
                cout << "In-order Traversal of Tree: ";
                t.displayInOrder();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
