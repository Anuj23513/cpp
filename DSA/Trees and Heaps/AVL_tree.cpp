#include <bits/stdc++.h> 
using namespace std;

class TreeNode {
    public:
    int value;
    TreeNode* rightChild;
    TreeNode* leftChild;
    
    int nodeHeight;
    
    TreeNode(int val) {
        value = val;
        leftChild = rightChild = NULL;
        nodeHeight = 1;
    }
};

int getNodeHeight(TreeNode *node) { 
    if (node == nullptr) 
        return 0; 
    return node->nodeHeight; 
} 

TreeNode *performRightRotation(TreeNode *y) { 
    TreeNode *x = y->leftChild; 
    TreeNode *temp = x->rightChild; 

    x->rightChild = y; 
    y->leftChild = temp; 

    y->nodeHeight = 1 + max(getNodeHeight(y->leftChild), getNodeHeight(y->rightChild)); 
    x->nodeHeight = 1 + max(getNodeHeight(x->leftChild), getNodeHeight(x->rightChild)); 

    return x; 
} 

TreeNode* performLeftRotation(TreeNode* y) {
    TreeNode* x = y->rightChild;
    TreeNode* temp = x->leftChild;
    
    x->leftChild = y;
    y->rightChild = temp;
    
    x->nodeHeight = 1 + max(getNodeHeight(x->leftChild), getNodeHeight(x->rightChild)); 
    y->nodeHeight = 1 + max(getNodeHeight(y->leftChild), getNodeHeight(y->rightChild)); 

    return x;
}

int calculateBalance(TreeNode *node) { 
    if (node == nullptr) 
        return 0; 
    return getNodeHeight(node->leftChild) - getNodeHeight(node->rightChild); 
} 

TreeNode* insertNode(TreeNode* node, int key) { 
    if (node == nullptr) {
        return new TreeNode(key); 
    }
    if (key < node->value) {
        node->leftChild = insertNode(node->leftChild, key); 
    } else if (key > node->value) {
        node->rightChild = insertNode(node->rightChild, key); 
    } else {
       return node; 
    }

    node->nodeHeight = 1 + max(getNodeHeight(node->leftChild), getNodeHeight(node->rightChild)); 

    int balance = calculateBalance(node); 

    // Left Left Case 
    if (balance > 1 && key < node->leftChild->value) 
        return performRightRotation(node); 

    // Right Right Case 
    if (balance < -1 && key > node->rightChild->value) 
        return performLeftRotation(node); 

    // Left Right Case 
    if (balance > 1 && key > node->leftChild->value) { 
        node->leftChild = performLeftRotation(node->leftChild); 
        return performRightRotation(node); 
    } 

    // Right Left Case 
    if (balance < -1 && key < node->rightChild->value) { 
        node->rightChild = performRightRotation(node->rightChild); 
        return performLeftRotation(node); 
    } 

    return node; 
}

TreeNode* searchNode(TreeNode* root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (key == root->value) {
        return root; 
    }

    if (key < root->value) {
        return searchNode(root->leftChild, key); 
    } else {
        return searchNode(root->rightChild, key);
    }
}

void displayLevelOrder(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();

        cout << temp->value << " ";

        if (temp->leftChild != NULL) {
            q.push(temp->leftChild);
        }

        if (temp->rightChild != NULL) {
            q.push(temp->rightChild);
        }
    }
}

int main() {
    TreeNode *root = NULL;
    int option, key;
    TreeNode* result;

    do {
        cout << "\nAVL Tree Operations Menu\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Level Order Traversal\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter key to insert: ";
                cin >> key;
                root = insertNode(root, key);
                break;
            case 2:
                cout << "Enter key to search: ";
                cin >> key;
                result = searchNode(root, key);
                if (result != NULL) {
                    cout << "Key found in the tree.\n";
                } else {
                    cout << "Key not found in the tree.\n";
                }
                break;
            case 3:
                cout << "Level Order Traversal: ";
                displayLevelOrder(root);
                cout << endl;
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (option != 4);

    return 0;
}
