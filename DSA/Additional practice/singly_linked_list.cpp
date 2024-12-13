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
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtEnd(Node* &head,int d){
    Node* NewNode=new Node(d);
    if (head==NULL){
        NewNode=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){   //Transversing till node reach end LL
        temp=temp->next;
    }
    temp->next=NewNode;
}

void insertAtTail(Node* &tail,int d){  //Other method
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAfterPrevious(Node* Previous_Node,int d){
    Node* temp=new Node(d);
    if(Previous_Node==NULL){
        cout << "No previous node is present"<<endl;
        return;
    }
    temp->next=Previous_Node->next;
    Previous_Node->next=temp;
}

void insertAtPos(Node* &head,int position,int d){
    Node* NewNode=new Node(d);
    if (position==1){
        NewNode->next=head;
        head=NewNode;
    }
    Node* temp=head;
    int count=1;
    while(count<position-1 && temp!=NULL){
        temp=temp->next;        //Traversing till reached the desired position
        count++;
    }
    if (temp==NULL){
        insertAtEnd(head,d);
        return;
    }

    // inserting the node at their desired position
    NewNode->next=temp->next;
    temp->next=NewNode;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp=temp->next;
    }
    cout << endl;
}


int main(){
    Node* node1=new Node(5);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertAtBeginning(head,10);
    print(head);
    insertAtTail(tail,19);
    print(head);    
    insertAfterPrevious(head,15);
    print(head);
    insertAtPos(head,3,20);
    print(head);
    return 0;
}