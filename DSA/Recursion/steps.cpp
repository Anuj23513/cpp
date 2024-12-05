#include <iostream>
using namespace std;
int steps(int n){
    //base case
    if ( n<0 )
        return 0;  // Not possible
    if ( n==0)
        return 1; // One way to step up

    return steps(n-1) + steps(n-2);
}
int main(){
//Write your code here
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << steps(n);
    return 0;
}