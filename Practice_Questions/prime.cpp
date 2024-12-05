//Program to check the number is prime or not.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the number to check prime or not: ";
    cin>> number;
    int count=0;
    for (int i=1;i<=number;i++){
        if (number%i==0){
            count=count+1;
        }
        else{
            continue;
        }
    }
    if (count==2){
        cout << "Entered Number is a prime number "<<endl;
    }
    else{
        cout << "Entered number is not a prime number"<<endl;
    }

    return 0;
}