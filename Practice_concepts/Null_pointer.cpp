// Sometimes it is useful to make our pointers point to nothing This is called Null pointer

#include <iostream>
using namespace std;

int main(){
    int x=10,y=20;
    // Declaring pointer
    int *xptr=&x;

    // Setting the value to null pointer

    xptr=0;
    int *p=0;
    int *q=NULL;  // NULL can also be used

    // cout << xptr<< endl;
    if (xptr=0) {   // Checking whether the pointer
        cout << xptr << "is a  null pointer" << endl;
        cout << xptr << "is a  null pointer" << endl;
        cout << xptr << "is a  null pointer" << endl;
    }
    

    return 0;
}