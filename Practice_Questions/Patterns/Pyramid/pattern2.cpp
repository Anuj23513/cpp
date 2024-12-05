//Program to create a pattern of repeating a number in triangle form of given number.

#include <iostream>
using namespace std;
int main(){
    int n;  //No of rows
    cout <<"Enter the number of rows: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout <<i;
        }
        cout<<endl;
    }
    return 0;
}