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

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->Next=head;
    head=temp;
}

void insertatEnd(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->Next=temp;
        tail=temp;
}

void insertatPosition(Node* &head,Node* &tail,int position,int d){
    //insert at start
    if (position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->Next;
        cnt++;
    }

    //Inserting at last position
    if (temp->Next==NULL){
        insertatEnd(tail,d);
        return;
    }

    //Creating a node for d;
    Node* NodeToInsert=new Node(d);
    NodeToInsert->Next=temp->Next;
    temp->Next=NodeToInsert;
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
    int pos,data;
    cout << "Enter the position and data where you want to insert the node: ";
    cin >> pos>>data;
    Node* node1=new Node(5);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertatPosition(head,tail,pos,data);
    print(head);
}