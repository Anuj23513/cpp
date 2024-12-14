//Implementation of stacks using arrays 

#include <iostream>
using namespace std;

class Stack{
    private:
        int *arr;
        int top;
        int size;
    public:
        Stack(int size){
            this->size=size;
            top=-1;
            arr=new int[size];   
        }
    void push(int element){
        if(size-top>1){ // Checks that atleast one space is available
            top++;
            arr[top]=element;
        }
        else{
            cout << "Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout << "stack underflow "<<endl;
        }
    }

    int peak(){
        if (top>=0){
            cout << arr[top]<<endl;
        }
        else{
            cout << "stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if (top==-1){
            cout << "Stack is empty "<<endl;
        }
        else{
            cout << "Stack is not Empty "<<endl;
        }
    }

};  


int main(){
    Stack s1(5);
    s1.push(26);
    s1.push(10);
    s1.push(34);
    s1.push(43);
    s1.push(21);
    s1.peak();
    s1.pop();
    s1.isEmpty();
    s1.peak();
    s1.pop();
    s1.peak();
    s1.isEmpty();
    s1.pop();
    s1.peak();
    s1.pop();
    s1.isEmpty();
    s1.pop();
    s1.isEmpty();
}