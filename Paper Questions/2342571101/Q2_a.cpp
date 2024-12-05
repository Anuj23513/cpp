//Program to calculate the factorial if the number is even else return 0.

#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if (n%2==0){
        for (int i=1;i<=n;i++){
            fact*=i;
        }
        cout << "Factorial of "<< n<< " is "<< fact<<endl;
    }
    else{
        cout << "Sorry you have entered a odd number please input a even number to calculate factorial."<<endl;
        return 0;
    }

}
int main(){
    int n;
    cout << "Enter the number to calculate factorial: ";
    cin >> n;
    factorial(n);
}