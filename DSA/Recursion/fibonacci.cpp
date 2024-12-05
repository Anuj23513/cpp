#include <iostream>
using namespace std;

int fibbonacci(int n){
    // base case
    if  ( n==0)
        return 0;
    if  (n==1)
        return 1;
    return fibbonacci(n-1)+fibbonacci(n-2 );
}


int main(){
//Write your code here
    int n=6;
    cout << fibbonacci(n)<<endl;
}