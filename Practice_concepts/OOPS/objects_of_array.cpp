#include <iostream>
using namespace std;

class XYZ{
    private:
        int a[5];
    public:
        void getdata();
        void putdata();
};

void XYZ::getdata(){
    int i;
    for(i=0;i<5;i++){
        cout<<"Enter the element of array: ";
        cin>>a[i];
    }
}
void XYZ::putdata(){
    for (int i=0;i<5;i++){
    cout<<a[i]<<" ";
    }
}

int main(){
    XYZ obj;
    obj.getdata();
    obj.putdata();
}