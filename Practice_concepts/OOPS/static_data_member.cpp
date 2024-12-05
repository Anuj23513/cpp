#include <iostream>
using namespace std;

class demo
{
    private:
        int a,b;
        static int c ;    //Its value is common in complete program
    public:
        void getdata(){
            cout <<"Enter the numbers followed by a space: ";
            cin>>a>>b;
            c+=1;

        }
        void putdata(){
            cout << "a = "<<a<<" b = "<<b<<" c = "<< c<<endl;
        }

};
int demo::c;     // Very important for static data member it should be always placed afrer the class closing to run properly
int main(){
    demo obj1,obj2;     // static data member initialized to zero when the first object is created.
    obj1.getdata();     
    obj2.getdata();
    obj1.putdata();
    obj2.putdata();
    return 0;
}