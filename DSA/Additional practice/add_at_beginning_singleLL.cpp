#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * Next;
    Node(int data){
        this->data=data;
        this->Next=NULL;
    }
};

void insert_at_head(Node* &head,int d){
    Node* temp=new Node(d);
    temp->Next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp = temp->Next;
    }

    cout << endl;
}

int main(){
    Node* node1=new Node(5);
    Node* head=node1;
    print(head);
    insert_at_head(head,10);
    print(head);
    insert_at_head(head,15);
    print(head);

    return 0;
}

//Additional practice done again 

// class Node{
//     public:
//         int data;
//         Node* Next;
//     Node(int data){
//         this->data=data;
//         this->Next=NULL;
//     }
// };

// void insertatHead(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->Next=head;
//     head=temp;
// }

// void display(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout << temp->data<<" ";
//         temp=temp->Next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* node1=new Node(4);
//     Node* head=node1;
//     display(head);
//     insertatHead(head,5);
//     display(head);
//     insertatHead(head,10);
//     display(head);
    
// }