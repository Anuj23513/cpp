//Progam to calculate the power of given number.(x to the power y)

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Enter the number whose power you want to calculate: ";
    cin>>x;
    cout <<"Enter the power of the number: ";
    cin >>y;

    int result=1;
    for (int i=1;i<=y;i++){
        result*=x;
    }
    cout <<"result : "<<result<<endl;
    return 0;


}