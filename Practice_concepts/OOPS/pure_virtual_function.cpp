/*It is a member function that is defined in the base class using
virtual keyword which is redefined (overridden) by the derived
 class which ensures that the correct function is called 
 regardless the type pointer created function of object created of any class will called
 it achieves runtime polymorphism and late binding.*/

 // When it has no defination in the virtual function then it is said to be pure virtual function.

#include <iostream>
using namespace std;

class A{  // Base class
    public:
    virtual void show()=0;  // Function defination does not exist in pure virtual functions
};

class B:public A{
    public:
        void show(){
            cout << "Derived class"<<endl;
        }
};

int main(){
    A* ptr;
    B obj2;
    ptr=&obj2;   // here function of Class B will execute if VF will not here then only base class function will execute.
    ptr ->show();  // Only derived class function can executed.
    return 0;
}