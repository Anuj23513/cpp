#include <iostream>
using namespace std;

int a=10;  // Global variable  -Scope in whole program

int main(){
    int a=4,b=5;  // Local Varible scope only in the function
    cout<< "The sum of a and b is: "<<a+b<< endl;
    cout << "The global variable a is: "<<::a<< endl;   // :: Scope resolution operator to access Global Variable

    return 0;
}