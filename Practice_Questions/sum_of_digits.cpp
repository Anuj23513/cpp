//Program to calculate the sum of digits of entered number.
#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        sum+=n%10;
        n=n/10;

    }
    cout<<"Sum of digits of inputed number: "<<sum<<endl;
    return 0;
}