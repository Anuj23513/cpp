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
};

void insertAtBeginning(Node* &head,int d){
    Node * NewNode=new Node(d);
    NewNode->next=head;
    head=NewNode;
}

void insertAtEnd(Node* &head,int d){
    Node* NewNode=new Node(d);
    if(head==NULL){
        NewNode=head;
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

void print(Node* &head){
    Node* temp=head;
    while(temp->next!=nullptr){
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

    int pos,data;
    cout << "Enter the position and data for insert at specified position : ";
    cin >> pos >>data; 
    insertAtPosition(head,pos,data);
    print(head);

    cout <<"Program working Properly Thank You"<<endl;
    return 0;
}
