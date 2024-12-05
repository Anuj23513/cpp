#include <iostream>
using namespace std;

class demo
{
    private:
        int a ,b;
    public:
        void getdata();
        friend int sum(demo);  // A function that has capability to access the private members of a class using the objects of the same class
};

void demo::getdata(){
    cout << "Enter two numbers followed by a space: ";
    cin>>a>>b;
}
int sum(demo obj){
    return obj.a+obj.b;
}
int main(){
    demo obj;
    obj.getdata();
    cout << "Addition of entered number is: "<<sum(obj);
    return 0;
}