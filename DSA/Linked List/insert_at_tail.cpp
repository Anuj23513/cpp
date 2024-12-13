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

void insertAtEnd(Node* &tail , int d){
    Node* temp=new Node(d);
    tail->Next=temp;
    tail=temp;
}

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp=temp->Next;
    }
    cout << endl;
}


int main(){
    Node* node1=new Node(5);
    Node* head=node1;
    Node* tail=node1;
    display(head);
    insertAtEnd(tail,10);
    display(head);
    insertAtEnd(tail,15);
    display(head);

    return 0;
}