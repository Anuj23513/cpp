#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * Next;
    Node(int data){  // Constructor doesn't have any return type
        this -> data=data;
        this -> Next=NULL;
    }
};


int main(){
    Node * node1=new Node(5);
    cout << node1->data<<endl;
    cout <<node1->Next<<endl;
    return 0;
}