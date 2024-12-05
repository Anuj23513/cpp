#include <bits/stdc++.h> 
using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;
    
    int height;
    
    
    Node(int k){
        data = k;
        left = right = NULL;
        height = 1;
    }
};

int height(Node *N) { 
    if (N == nullptr) 
        return 0; 
    return N->height; 
} 

Node *rightRotate(Node *y) { 
    Node *x = y->left; 
    Node *temp = x->right; 

    x->right = y; 
    y->left = temp; 


    y->height = 1 + max(height(y->left), height(y->right)); 
    x->height = 1 + max(height(x->left), height(x->right)); 

    return x; 
}

Node* leftRotate(Node* y){
    Node* x = y->right;
    Node*temp = x->left;
    
    x->left = x;
    y->right = temp;
    
    x->height = 1 + max(height(x->left), height(x->right)); 
    y->height = 1 + max(height(y->left), height(y->right)); 

    return y;
}

int getBalance(Node *N) { 
    if (N == nullptr) 
        return 0; 
    return height(N->left) - height(N->right); 
} 

Node* insert(Node* node, int key) { 
    
    if (node == nullptr)
    {
        return new Node(key); 
    }
    if (key < node->data)
    {
        node->left = insert(node->left, key); 
    }
    else if (key > node->data)
    {
        node->right = insert(node->right, key); 
    }
    else
    {
       return node; 
    }
    node->height = 1 + max(height(node->left),height(node->right)); 

    int balance = getBalance(node); 

    // Left Left Case 
    if (balance > 1 && key < node->left->data) 
        return rightRotate(node); 

    // Right Right Case 
    if (balance < -1 && key > node->right->data) 
        return leftRotate(node); 

    // Left Right Case 
    if (balance > 1 && key > node->left->data) { 
        node->left = leftRotate(node->left); 
        return rightRotate(node); 
    } 

    // Right Left Case 
    if (balance < -1 && key < node->right->data) { 
        node->right = rightRotate(node->right); 
        return leftRotate(node); 
    } 

    return node; 
}

Node* search(Node* root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (key == root->data) {
        return root; 
    }

    if (key < root->data) {
        return search(root->left, key); 
    } else {
        return search(root->right, key);
    }

}

void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();

        q.pop();

        cout << temp->data << " ";

        if (temp->left != NULL) {
            q.push(temp->left);
        }

        if (temp->right != NULL) {
            q.push(temp->right);
        }
    }
}


int main() {
    Node *root = NULL;
    int choice, key;
    Node* result;

    do {
        cout << "\nAVL Tree Operations Menu\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Level Order Traversal\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter key to insert: ";
                cin >> key;
                root = insert(root, key);
                break;
            case 2:
                cout << "Enter key to search: ";
                cin >> key;
                result = search(root, key);
                if (result != NULL)
                {
                    cout << "Key found in the tree.\n";
                }
                else
                {
                    cout << "Key not found in the tree.\n";
                }
                break;
            case 3:
                cout << "Level Order Traversal: ";
                levelOrderTraversal(root);
                cout << endl;
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}






