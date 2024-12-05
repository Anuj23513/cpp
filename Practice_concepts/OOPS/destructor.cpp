/*A destructor is a member function which destroys the object once it goes out of scope. having no return type and arguments*/

// Program to show how destructors destroys the object.

#include <iostream>
using namespace std;

int count=0;
class demo
{
    public:
        demo(){
            count++;
            cout << "Number of the object created: "<<count<<endl;
        }
        ~demo(){
            count--;
            cout << "Number of the object destroyed : "<< count+1<<endl;
        }
};

int main(){
    demo obj1;  // automatically invoked constructor
    demo obj2;
    {
        demo obj3;
    }       // Destructor will destroy obj3 because it goes out of scope here.
    return 0;
}           // Similarly herer it will destroy obj2 and obj1 in descending order ot because they goes out of scope.