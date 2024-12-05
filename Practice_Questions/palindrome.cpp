// Program to calculate the given number is palindrome or not.

#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number: ";
    cin>>number;
    int reverse=0;
    int num=number;  // Assigning the value of number to calculate reverse without changing the value of original number.
    while(num>0){
        reverse=(reverse*10)+num%10;
        num=num/10;
    }
    if (number==reverse){
        cout<<"The Entered number is a palindrome"<<endl;
    }
    else{
        cout<<"The entered number is not a palindrome"<<endl;
    }

}