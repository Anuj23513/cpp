#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node *right, *left;
        node(int d){
            data=d;
            right=left=NULL; 
        }  
};

int main(){
    int data;
    int left_data;
    int right_data;
    cout << "Enter the root data ";
    cin>>data;
    queue<node*> q;
    node* root=new node(data);
    q.push(root);
    //Build the binary tree 
    while(!q.empty()){
        node * temp=q.front();
        q.pop();
        cout << "Enter the left child of "<<temp->data<<endl;
        cout << "Enter the data ";
        cin >> left_data;
        if (left_data!=-1){
            temp->left=new node(left_data);
            q.push(temp->left);
        }
        cout << "Enter the right child of "<<temp->data<<endl;
        cout << "Enter the data ";
        cin >> right_data;
        if (right_data!=-1){
            temp->right=new node(right_data);
            q.push(temp->right);
        }
    }

    return 0;
}