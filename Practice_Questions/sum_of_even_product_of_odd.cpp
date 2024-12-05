//Program to calculate sum of even numbers and product of odd numbers.

#include <iostream>
using namespace std;

int main(){
    int number;
    int even_sum=0;
    int odd_product=1;
    cout << "Enter the number: ";
    cin>> number;
    while(number>0){
        int digit=number%10;
        if(digit%2==0){
            even_sum+=digit;
        }
        else{
            odd_product*=digit;
        }
        number/=10;
    }
    cout<<"The sum of even digits of given number is : "<<even_sum<<endl;
    cout<<"The product of odd digits of given number is : "<<odd_product<<endl;
    return 0;
}