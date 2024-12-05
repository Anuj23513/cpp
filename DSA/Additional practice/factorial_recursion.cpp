#include <iostream>
using namespace std;

int fact(int n){
    //base Case
    if (n==0 || n==1){
        return 1;
    }
    else{
    return n*fact(n-1);
    }
}

int main(){
    int n;
    cout << "Enter the number whose factorial you want to calculate : ";
    cin >> n;
    cout << "Factorial : "<<fact(n)<<endl;
}