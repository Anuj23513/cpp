#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * Next;
    Node(int data){
        this -> data = data;
        this -> Next = NULL;
    }

};

void insertAtHead(Node* &head,int d){
    Node * temp = new Node(d);    // Creating a new node temp which stores the data that has to be add on the head of LL
    temp -> Next=head;            // temp's next points to the address of previous data means on head of LL
    head = temp;                  // changing the position of head to temp
}

void print(Node * &head){
    Node * temp=head;
    while (temp!=NULL){
        cout << temp->data<<" ";
        temp=temp->Next;
    }
    cout << endl;
}


int main(){
    Node * node1=new Node(10);
    // cout << node1->data<<endl; // Printing the data entered in LL
    // cout << node1->Next<<endl; // Prints the address of of next Node that is NULL

    //Creating one more object that points to node 1;
    Node* head=node1;
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtHead(head,12);
    print(head);

    return 0;
}