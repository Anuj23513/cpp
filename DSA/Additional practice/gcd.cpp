#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (a==0)
        return b;
    if (b==0)
        return a;

    while (a!=b){
        if (a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
//Write your code here
    int a , b;

    cout << "Enter the two numbers a and b : ";
    cin >> a >> b;

    cout << "Hcf of "<< a << " and " << b << " is "<<gcd(a,b);
    return 0;
}