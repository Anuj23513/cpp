#include <iostream>
#include <queue> // Include queue for level order traversal
using namespace std;

class node {
public:
    int data;
    node *left, *right;

    node() {
        data = -1;
        left = right = NULL;
    }

    node(int e) {
        data = e;
        left = right = NULL;
    }
};

class tree {
private:
    node *root;
    int count;

public:
    tree() {
        root = NULL;
        count = 0;
    }

    int insert1(int e) {
        node *n = new node(e);
        if (!root) {
            root = n;
            count++;
            return 0;
        }
        node *temp = root;
        node *prev = NULL;
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
        node *n = new node(e);
        if (!root) {
            root = n;
            count++;
            return 0;
        }
        node *temp = root;

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

    node* search(int e) {
        if (!root) {
            return NULL;
        }
        node *temp = root;
        while (temp && temp->data != e) {
            if (e < temp->data) {
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }
        return temp;
    }

    void displayLevelOrder() {
        if (!root) {
            cout << "Tree is empty." << endl;
            return;
        }
        queue<node*> q;
        q.push(root);
        while (!q.empty()) {
            node *current = q.front();
            cout << current->data << " ";
            q.pop();
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        cout << endl;
    }
};

int main() {
    tree t;
    int choice, element;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert using insert1\n";
        cout << "2. Insert using insert2\n";
        cout << "3. Search\n";
        cout << "4. Display Level Order\n";
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
                cout << "Level Order Traversal of Tree: ";
                t.displayLevelOrder();
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