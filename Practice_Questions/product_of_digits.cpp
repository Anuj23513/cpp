//Program to calculate the product of digits of given number.
#include <iostream>
using namespace std;

int main(){
    int n,product=1;
    cout << "Enter the number: ";
    cin>>n;
    while(n>0){
        product*=n%10;
        n=n/10;
    }

    cout << "Product of digits of entered number is : "<<product<<endl;
    return 0;

}