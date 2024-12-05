//Goto statement is a type of jump statement which is used to transfer the flow of execution of a program.

//Program to check and print the number is even or odd.

#include <iostream>
using namespace std;

int main(){
    int number;
    cout<< "Enter the number: ";
    cin>>number;
    if (number%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
        cout<<"The number is even";
        return 0;
    odd:
        cout<<"The number is odd";
        return 0;

}
