#include <iostream>
using namespace std;

class demo{
    private:
        int a ,b;
        static int c;
    public:
        void getdata(){
            cout << "Enter two numbers followed by a space: ";
            cin >> a>>b;
            c+=1;       // To Show it incremented value after function call.
        }
        void putdata(){
            cout <<"a="<<a<<" b="<<b<<" c= "<<c<<endl;
        }
        static void fun1(){
            // cout << "a="<<a<<" b="<<b<<endl;     // It will give an error because it can use only static members of a class.
            cout<<  "in static member function c="<<c<<endl;                  //Use only static data members
        }
};
int demo::c;                        // Neccesary to use static data members

int main(){
    demo obj1;
    obj1.getdata();
    obj1.putdata();
    obj1.fun1();                    // It will also work but considered bad practice because it can mislead normal member function and static member function.
    demo::fun1();                   //calling the static member function.
    return 0;
}