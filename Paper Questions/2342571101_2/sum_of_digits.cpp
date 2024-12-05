#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a three digit number:";
    cin>>n;
    if (n>=100 && n<999){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        cout << "Sum of digits of entered number is : "<< sum<<endl;
    }
    else{
        cout << "You have entered a wrong input please re run the code."<<endl;
    }
    return 0;
}