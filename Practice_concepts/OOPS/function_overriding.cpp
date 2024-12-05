/*When we have same name functions in base and derived class and when object is created the derived class override the same function of 
base class this overridden of function is called function overridden.*/

#include <iostream>
using namespace std;

class A{
    public:
        void show(){
            cout << "Base class"<<endl;
        }
};

class B:public A{
    public:
    void show(){
        cout << "Derived class"<<endl;  // Only this will execute
        A::show();   // Method 1 to call the function of base class
    }                                   // Because it override the function of base class.
    
};

int main(){
    B obj;
    obj.show();
    obj.A::show();  // Method 2 To call the base class function.
    return 0;
}