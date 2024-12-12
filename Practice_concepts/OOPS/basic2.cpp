#include <iostream>
using namespace std;

class addition
{
    int a,b,c;
    public:
    void getdata();  // Declaring the functions inside the class using outside the class
    void putdata();

};

//used the functions outside the class using scope resolution operator

void addition :: getdata(){
    cout << "Enter three numbers followed by a space:";
    cin>>a>>b>>c;
}

void addition::putdata(){
    cout << "sum is : "<< a+b+c<<endl;
}

int main()
{
    addition obj1;
    obj1.getdata();
    obj1.putdata();
    return 0;
}