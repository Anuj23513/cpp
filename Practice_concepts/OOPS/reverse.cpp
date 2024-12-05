#include <iostream>
using namespace std;

class reverse
{
    private:
        int n;
    public:
        void getdata();
        void putdata();
};

void reverse::getdata(){
    cout<<"Enter the number: ";
    cin>>n;
}
void reverse::putdata(){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }

    cout << "The reverse of the entered number is : "<<  rev<<endl;

}

int main(){
    reverse obj;
    obj.getdata();
    obj.putdata();
    return 0;
}