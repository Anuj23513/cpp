#include <iostream>
#include <queue>
using namespace std;


class node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};

node* buildTree(node* root){
    cout << "Enter the data ";
    int data;
    cin >> data;
    root = new node(data);
    if (data==-1)
        return NULL;
    cout << "Enter the data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout << "Enter the data for inserting in right of "<< data<<endl;
    root->right=buildTree(root->right);

    return root;
}

int main(){
    node * root=NULL;
    //Creating and building the tree;
    root=buildTree(root);
}