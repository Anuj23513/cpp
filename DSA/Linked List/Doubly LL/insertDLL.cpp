#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertathead(Node* & head,Node* &tail,int d){
    //Empty head
    if (head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

}

void insertAtTail(Node* &head,Node* &tail,int d ){
    //Empty LL
    if (tail==NULL){
        Node* temp =new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertatPosition(Node* &head,Node* &tail,int position,int d){
    Node* NewNode=new Node(d);
    if(position==1){
        insertathead(head,tail,d);
        return;
    }
    Node* temp=head;
    int count=1;
    while(count<position-1 && temp!=NULL){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    NewNode->next=temp->next;
    temp->next->prev=NewNode;
    temp->next=NewNode;
    NewNode->prev=temp;
}

print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout << temp->data<<" ";
        temp=temp->next;
    }

    cout << endl;
    
}


int main(){
    Node* node1=new Node(10);
    Node* head =node1;
    Node* tail =node1;
    print(head);
    insertathead(head,tail,25);
    print(head);
    insertathead(head,tail,30);
    print(head);
    insertAtTail(head,tail,46);
    print(head);
    insertatPosition(head,tail,3,76);
    print(head);
    insertatPosition(head,tail,1,100);
    print(head);
    insertatPosition(head,tail,7,90);
    print(head);
    insertatPosition(head,tail,8,79);
    print(head);

    cout << "Head "<<head->data<<endl;
    cout << "Tail "<<tail->data<<endl;
}



