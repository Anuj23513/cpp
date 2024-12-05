#include  <iostream>
using namespace std;

int main(){
    //"Address of" operator (&) used with unary operands
    /*If we use with binary operands it behaves as exclusive and*/

    int x=10;
    cout <<"x=" <<&x<<endl;


    //Both gives the same address

    float y;
    cout <<&y<<endl;

    char letter;
    cout << &letter<<endl; 

    int arr[10];
    // array name itself represents the address of the array
    //Both gives the same address
    cout << arr<<endl;
    cout << &arr<<endl;

    
    return 0;

}