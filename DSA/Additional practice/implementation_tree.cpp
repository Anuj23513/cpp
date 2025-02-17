#include <iostream>
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

node* binaryTree(){
    int data;
    cin>>data;
    node * temp = new node(data);
    
    if (data==-1)
        return NULL;
    
    //left side
    cout << "Enter the left child of "<<data<<endl;
    temp->left=binaryTree();
    //right side
    cout << "Enter the right child of "<<data<<endl;
    temp->right=binaryTree();

    return temp;

}

void preOrder(node* &root){
    if (root==NULL){
        return;
    }
    cout << root->data<<" "; //Node
    preOrder(root->left);    //left
    preOrder(root->right);   //right;
}

void inOrder(node* &root){
    if (root==NULL){
        return;
    }
    inOrder(root->left);      //Left
    cout << root->data<<" ";  //Node
    inOrder(root->right);     //Right
}

void postOrder(node* &root){
    if (root==NULL)
        return;
    postOrder(root->left);    //Left
    postOrder(root->right);   //Right
    cout << root->data << " "; //Node
}


int main(){
    node * root;
    cout << "Enter the root ";
    root=binaryTree();

    cout << "Pre-order traversal : " ;
    preOrder(root);
    cout << endl;
    cout << "In-order traversal : ";  
    inOrder(root);
    cout << endl;
    cout << "Post-order traversal : "; 
    postOrder(root);
    cout << endl;
    
    //Input can be 1 2 3 4 -1 -1 5 -1 -1 6 -1 -1 7 -1 8 9 -1 -1 10 -1 -1
    


    return 0;
}