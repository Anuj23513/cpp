#include <iostream>
using namespace std;
//Program to add three numbers
class addition
{
    private:
        int a,b,c;
    public:
    void getdata(){
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
    void putdata(){
        cout<<"The sum of a and b is: "<<a+b<<endl;
    }
};

int main(){
        addition obj1;
        obj1.getdata();
        obj1.putdata();
        return 0;
    }