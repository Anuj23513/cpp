//Program to calculate the reverse of entered number.

#include <iostream>
using namespace std;

int main(){
    int number;
    int reverse=0;
    cout << "Enter the number: ";
    cin>>number;
    while(number>0){
         reverse=(reverse*10)+number%10;
         number/=10;
    }

    cout << "The reverse using while loop of entered number is : "<<reverse<< endl;

    // using for loop
    for (;number>0;number/10){
        reverse=(reverse*10)+number%10;
    }
    cout <<"The reverse using for loop of entered number is:" <<reverse<<endl;

}