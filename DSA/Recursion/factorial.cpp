#include <iostream>
using namespace std;

int factorial(int n){
    //Base case
    if (n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
//Write your code here
    int n;
    cout << "Enter the number to calculate the factorial : ";
    cin >> n;
    cout << factorial(n)<<endl;
    return 0;
}