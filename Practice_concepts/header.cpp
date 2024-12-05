#include <iostream>  // system header

//There are two types of header files
// 1. System header file comes with compiler
// 2. User defined header written by programmer

#include "This.h"  // user defined header

using namespace std;

int main(){

    int a=3 , b=5;
    cout << "First print then increment: "<<a++<<endl; 
    cout << "First increment then print: "<<++b<<endl;
    cout << "First print then decrement: "<<a--<<endl;
    cout << "First decrement then print: "<<--b<<endl;

    return 0;
}