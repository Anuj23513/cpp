#include <iostream>
#include <climits>
using namespace std;

int reverse_integer(int n){
    int rev=0;
    if (n<INT32_MIN || n>INT32_MAX-1 ){
        return 0;
    }
    else{
        while(n>0){
            rev=rev*10+n%10;
            n=n/10;
          }
    }  
    return rev;
}


int main(){
//Write your code here
int n;
cout << "Enter the number ";
cin>>n;
cout << "Reverse of the number is "<<reverse_integer(n)<<endl;
return 0;
}