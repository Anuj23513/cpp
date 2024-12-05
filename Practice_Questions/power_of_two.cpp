#include <iostream>
#include <cmath>
using namespace std;

    bool isPowerOfTwo(int n) {
        for (int i=0;i<=30;i++){
            if (pow(2,i)==n){
                return true;
        }
    }
            return false;
    }

int main(){
//Write your code here
    int n;
    cout << "Enter the number : ";
    cin>> n;
    cout << (isPowerOfTwo(n))<<endl;
    return 0;
}  