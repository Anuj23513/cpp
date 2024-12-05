#include <iostream>
using namespace std;

int fact(int n ){
    if(n<0){
        return -1;   // -1 means user inputs a negative number
    }
    if(n==0){
        return 1;
    }
    if (n==1 && n==2){
        return n;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;  // Number which factorials to be calculated
    cout <<"Enter the number to calculate the factorial: ";
    cin>>n;
    cout<<"factorial="<< fact(n)<<endl;
}