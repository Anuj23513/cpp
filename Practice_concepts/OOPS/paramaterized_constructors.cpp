#include <iostream>
using namespace std;

class demo
{
    int a ,b;
    public:
        demo(int m,int n){    // Constructors having parameters is called parameterized constructors
            a=m;              // Name of the constructor is same as class name
            b=n;
        }
        void putdata(){
            cout <<"a="<<a<<" b="<<b<<endl;
        }
};

int main(){
    demo obj(5,10);   // constructor automatically invoked once the object of class created 
    obj.putdata();    // Parameterized constructors object has arguments
    return 0;
}