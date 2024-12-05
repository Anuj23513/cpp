//Program to print number 1 to 10 using classes.
#include <iostream>
using namespace std;

class oneten
{
    public:
    int i;
    void putdata(){
    for (i=1;i<=10;i++){
        cout<<i<<endl;
                    }
    }
};

int main(){
    oneten obj;
    obj.putdata();

    return 0;
}