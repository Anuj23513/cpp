// program to swap two numbers
#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int num1,num2;
    cout << "Enter two numbers followed by a space: ";
    cin >> num1>> num2;
    cout <<"Before swapping a and b are "<< num1<<" and "<<num2<<" respectively"<<endl;

    swap(num1,num2);
    cout << "After swapping a and b are "<< num1<<" and "<<num2<<" respectively"<<endl;
    return 0;
}