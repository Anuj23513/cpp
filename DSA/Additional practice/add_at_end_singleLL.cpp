#include <iostream>
using namespace std;

class Node{
    public:
        int data; 
        Node* Next;
    Node(int data){
        this->data=data;
        this->Next=NULL;
    }
};

void insertAtEnd(Node* &tail,int d){
    Node * temp= new Node(d);
    tail->Next=temp;
    tail=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp=temp->Next;
    }
    cout << endl;   
}

int main(){
    Node* node1=new Node(5);
    Node* head=node1;  // Store reference to the head of the list
    Node* tail=node1;
    print(head);
    insertAtEnd(tail,10);
    print(head);
}