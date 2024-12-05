/*When we need to initialized the variable of an object with values of variables of another object
of the same class then we will use copy constructor */

#include <iostream>
using namespace std;

class demo
{
    private:
        int a;
    public:
        demo(){   // When we create first object ,it call automatically but we don't have any constructor to pass as an argument so we create a default constructor to called first and then pass the object as argument for copy constructor
            a=10;
        }
        demo(demo &b){          // Giving the address of the object
            a=b.a;
        }
        void putdata(){
            cout << "a="<<a<<endl;
        }
};

int main(){
    demo obj1;   // Automatically called the default constructor and store the value of a
    demo obj2(obj1); // Passing obj1 as an argument for copy constructor
    demo obj3=obj2;  //  it is also the way for copy constructor
    obj1.putdata();
    obj2.putdata();
    obj3.putdata();
    return 0;
}