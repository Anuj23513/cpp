#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
        Node* Prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->Prev=NULL;
    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp=temp->next;
    }
    cout << endl;
}

int getlen(Node* &head){
    Node* temp=head;
    int len=0;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}

int main(){
    Node * node1=new Node(100);
    Node * head=node1;
    print(head);
    cout << getlen(head)<<endl;

    return 0;
}