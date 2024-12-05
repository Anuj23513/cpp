#include <cmath>
#include <iostream>
using namespace std;

int power(int n){
    return pow(2,n);
}

int main(){
//Write your code here
    int n;
    cout << "Enter the power of two : ";
    cin >> n;
    cout << power(n)<<endl;
    return 0;
    
}