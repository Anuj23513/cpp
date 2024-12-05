// Call by reference

#include <iostream>
using namespace std;

void swap_by_reference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10,y=20;
    cout << "Before swapping : "<< x<<" "<<y<<endl;
    // After swapping by reference
    swap_by_reference(x,y);
    cout <<"after swapping by reference : "<< x<<" "<<y<<endl; 
}