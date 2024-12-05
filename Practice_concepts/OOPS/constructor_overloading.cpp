#include <iostream>
using namespace std;

class demo
{
    int a;

    public:
        demo(){
            a=10;
        }
        demo (int b){
            a=b;
        }

        demo (demo &x){
            a=x.a;
        }

        void putdata(){
            cout << "a="<<a<<endl;
        }
};

int main(){
    demo obj1;
    demo obj2(5);
    demo obj3(obj1);
    obj1.putdata();
    obj2.putdata();
    obj3.putdata();
    return 0;
}