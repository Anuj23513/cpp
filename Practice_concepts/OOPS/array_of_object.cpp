#include <iostream>
using namespace std;

class xyz{
    private:
        int a,b;
    public:
        void getdata();
        void putdata();
};

void xyz::getdata(){
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;  
}

void xyz::putdata(){
    cout<<"The value of a and b is : "<<a<<","<<b<<endl;
}

int main()
{
    xyz obj[5];
    int i;
    for (i=0;i<5;i++){
        obj[i].getdata();
    }
    for (i=0;i<5;i++){
     obj[i].putdata();   
    }
    return 0;
}