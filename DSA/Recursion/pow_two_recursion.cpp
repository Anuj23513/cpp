#include <iostream>
using namespace std;

int power(int n){
    //base case
    if (n==0)
        return 1;
    return 2 * power(n-1);  // Recursive Function
}

int main(){
//Write your code here
    int n;
    cout << "Enter the power : ";
    cin >> n;
    cout << power(n)<<endl;
}