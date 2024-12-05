#include <iostream>
using namespace std;

int main(){
    int number ,count=0,num;
    cout <<"Enter a number: ";
    cin>> number;
    num=1;
    while(num<=number){
        if (number%num==0){
            count++;
        }
    num++;
    }
    if (count==2){
        cout << "prime number";
    }
    else{
        cout <<"not prime";
    }


}