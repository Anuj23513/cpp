#include <iostream>
using namespace std;

class odd_even
{
    private:
    int a;
    public:
    void getdata();
    void putdata();
};

void odd_even::getdata()
{
    cout<<"Enter a number to check : ";
    cin>>a;
}

void odd_even:: putdata(){
    if(a%2==0)
    {
        cout<<"The number is even";
    }
    else
    {
        cout<<"The number is odd";
    }
}

int main(){
    odd_even obj;
    obj.getdata();
    obj.putdata();
    return 0;
}
