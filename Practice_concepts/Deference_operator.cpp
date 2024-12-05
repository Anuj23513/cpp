#include <iostream>
using namespace std;

int main(){
    /*An intresting property of pointers is that they can be used to access the variable they point
    to directly.This is done by preceding the pointers name with the deference operator(*).The operator
    itself can be read as "value pointed by"*/

    int a=10, b=20;

    // Declaring a pointer

    int *aptr=&a;  // pointer to an integer value

    cout <<aptr<<endl;  //  prints the address stored in xptr (address of x)
    cout <<*aptr<<endl;   //  prints the value stored at  the address in xptr (x-->10)
    cout << &aptr<<endl;  // prints the address of xptr (the address where xptr is stored)
    cout << *(&a)<<endl; //gives the value at that address
}