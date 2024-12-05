//program to calculate max of two numbers using classes
#include <iostream>
using namespace std;

class min_max{
    private:
        int a,b;
    public:
    void getdata();
    void putdata();
    };
void min_max::getdata(){
    cout<<"Enter the two numbers to compare min max: ";
    cin>>a>>b;
}
void min_max::putdata(){
    if (a>b){
        cout << "The greater number is: "<<a<<endl;
    }
    else{
        cout<<  "The greater number is: "<<b<<endl;
    }
}
int main(){
    min_max obj1;
    obj1.getdata();
    obj1.putdata();
    return 0;
}