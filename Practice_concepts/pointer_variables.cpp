#include <iostream>
using namespace std;

int main(){
    /*In C++ , A pointer is a varible that holds the address of another variable
    Tp declare a pointer, we use a 
    asterisk between the data type and the variable name*/

    int  x = 10; // declaring an integer
    int  y = 10; // Declaring another integer
    //Declaring a pointer

    cout << &x << endl; // Prints the memory address of x
    int * xptr= &x;  //Declaring and assigning the address of a variable x in pointer variable *xptr
    cout << xptr<<endl;  //Display the address

    cout << &y << endl;//Prints the memory address of y
    int *yptr;      //Declare y pointer first
    yptr =&y;        //Assigning value later
    cout << yptr<<endl;


    // Pointer to a pointer
    int **xxptr= &xptr;   //A double pointer points to a pointer. It can point to a single pointer or it can point to another double pointer      
                          //Accessing the value using pointers
    cout << xxptr << endl; 
                          // prints the value at the memory location pointed by xptr(Pointer to a pointer



}

