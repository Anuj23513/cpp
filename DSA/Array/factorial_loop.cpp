#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number to calculate factorial : ";
    cin>>number;
    int fact=1;
    for (int i=1;i<=number;i++){
            fact*=i;
    }
    cout<<fact<<endl;

    return 0;
}

