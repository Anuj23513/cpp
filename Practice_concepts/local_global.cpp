#include <iostream>
using namespace std;

int a=10;  // Global variable

int main(){
    int a=4,b=5;
    cout<< "The sum of a and b is: "<<a+b<< endl;
    cout << "The global variable a is: "<<::a<< endl;

    return 0;
}