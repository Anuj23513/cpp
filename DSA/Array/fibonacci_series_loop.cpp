#include <iostream>
using namespace std;

int main(){
    int number;
    cout<< "Enter the number of terms of fibonacci series: ";
    cin>>number;
    int x=0,y=1,z=0,count=1;
    while(count<=number){
        cout << z << " ";
        x=y;
        y=z;
        z=x+y;
        count+=1;
    }
    return 0;
}
