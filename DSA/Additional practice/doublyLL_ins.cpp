#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    if (head != nullptr) {
        head->prev = temp;
    }
    head = temp;
}

void print(Node*& head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node*& head, int d) {
    Node* newNode = new Node(d);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    insertAtHead(head, 25);
    print(head);

    insertAtHead(head, 30);
    print(head);

    insertAtTail(head, 46);
    print(head);
    return 0;
}
