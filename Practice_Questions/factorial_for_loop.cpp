//Program to calculate the factorial of entered number using for loop.

#include <iostream>
using namespace std;

int main(){

    int number, fact=1;
    cout<<"Enter the number to calculate the factorial: ";
    cin >> number;
    for (int i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    cout << "Factorial of given number is : "<<fact<<endl;
}