#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node *left,*right;
        node(int d){
            data=d;
            left=right=NULL;
        }
};

node* BinaryTree(){
    int data;
    cin >> data;
    if (data==-1){
        return NULL;
    }
    node * temp= new node(data);
    // Left side create
    cout << "Enter the left child of "<<data<<endl;
    temp->left=BinaryTree();
    // right side create
    cout << "Enter the right child of "<<data<<endl;
    temp->right=BinaryTree();

    // Returning the address
    return temp;
}


int main(){
    cout << "Enter the root node ";
    node * root;
    root=BinaryTree();

    return 0;
}