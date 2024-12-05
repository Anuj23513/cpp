// Program to check the entered number is palindrome or not.

#include <iostream>
using namespace std;

class Palindrome
{
    private:
        int num,number;
    public:
        void getdata();
        void putdata();
};

void Palindrome::getdata(){
    cout<<"Enter the number: ";
    cin>>num;
    number=num;
}
void Palindrome::putdata(){
    int reverse=0;
    while (number>0){
        reverse=(reverse*10)+number%10;
        number/=10;
    }
    if (reverse==num){
        cout << "This is palindrome"<<endl;
    }
    else{
        cout << "This is not palindrome"<<endl;
    }
}

int main(){
    Palindrome obj;
    obj.getdata();
    obj.putdata();
    return 0;
}