//Program to calculate the factorial of entered number using while loop.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the number to calculate factorial: ";
    cin>> number;
    int fact=1;
    while(number>=1){
        fact*=number;
        number--;
    }
    cout << "Factorial of entered number is : "<<fact<<endl;
    return 0;
    
}
