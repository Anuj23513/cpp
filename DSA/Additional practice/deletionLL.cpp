#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        if (this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout << "Memory is free for the node with data "<<value<<endl;
    }
};

void insertAtBeginning(Node* &head,int d){
    Node * NewNode=new Node(d);
    NewNode->next=head;
    head=NewNode;
}

void insertAtEnd(Node* &head,int d){
    Node* NewNode=new Node(d);
    if(head==NULL){
        head=NewNode;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    NewNode->next=temp->next;
    temp->next=NewNode;
}

void insertAtPosition(Node* &head,int position,int d){
    Node* NewNode=new Node(d);
    if (position==1){
        insertAtBeginning(head,d);
        return;
    }
    Node* temp=head;
    int count=1;
    while (count<position-1 && temp!=NULL){
        temp=temp->next;
        count++;
    }
    if (temp==NULL){
        cout << "This position is out of bound"<<endl;
        return;
    }
    NewNode->next=temp->next;
    temp->next=NewNode;
}

void deleteNode(int position,Node* &head){
    //Deleting the starting node
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //Deleting the node of given position or last node
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout << temp->data<<" ";
        temp=temp->next;
    }

    cout << endl;
}

int main(){
    Node* node1=new Node(5);
    Node* head=node1;
    print(head);
    insertAtBeginning(head,10);
    print(head);
    insertAtEnd(head,42);
    print(head);
    insertAtBeginning(head,23);
    print(head);
    insertAtEnd(head,98);
    print(head);

    int pos,data;
    cout << "Enter the position and data for insert at specified position : ";
    cin >> pos >>data; 
    insertAtPosition(head,pos,data);
    print(head);

    deleteNode(5,head);
    print(head);

    cout <<"Program working Properly Thank You"<<endl;
    return 0;
}
