#include <iostream>
using namespace std;

class abc
{
    int a,b,c;
    public:
        abc();  // Default constructor having no return type and no argument
        void putdata(){
            cout<<"Sum="<<c<<endl;
        }
};  

abc::abc(){
    a=10;
    b=10;
    c=a+b;
}

int main(){
    abc obj;   // Constructor called automatically when the object of a class is created.
    obj.putdata();
    return 0;
}