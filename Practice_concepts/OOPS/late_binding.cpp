/*During late binding, the compiler cannot deduce the exact function to call until runtime.
It is achieved using the virtual keyword for functions.
Late binding allows flexibility by deferring method selection until runtime.
Late binding occurs in runtime not in compile time so it is not possible for 
compiler which function will call.
It is a part of runtime polymorphism.
*/

#include <iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout << "Base class"<<endl;
    }
};
class derived:public Base{
    public:
        void show(){
            cout << "Derived class"<<endl;
        }
};

int main(){
    Base* ptr;
    Base obj1;
    ptr=&obj1;
    ptr -> show();  // It is known in runtime which function will executed.
    derived obj2;   // It always happens in runtime and use virtual function.
    ptr = & obj2;
    ptr -> show(); 
    return 0;
}