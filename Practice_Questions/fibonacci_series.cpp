//Program to calculate the fibonacci series. 0 1 1 2 3 5 ..... upto a given number
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<< "Enter the number till you want to generate fibonacci series: ";
    cin>>number;
    int x=0,y=1,z=0;
    while(z<=number){
        cout << z << " ";
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}
