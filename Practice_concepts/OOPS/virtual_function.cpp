/*It is a member function that is defined in the base class using
virtual keyword which is redefined (overridden) by the derived
 class which ensures that the correct function is called 
 regardless the type pointer created function of object created of any class will called
 it achieves runtime polymorphism and late binding.*/

#include <iostream>
using namespace std;

class A{  // Base class
    public:
    virtual void show(){
        cout << "Base class"<<endl;
    }
};

class B:public A{
    public:
        void show(){
            cout << "Derived class"<<endl;
        }
};

int main(){
    A* ptr;
    A obj1;
    ptr=&obj1;    // Virtual function ensures which function will execute here function of class A will execute.
    ptr->show();
    B obj2;
    ptr=&obj2;   // here function of Class B will execute if VF will not here then only base class function will execute.
    ptr ->show();
    return 0;
}