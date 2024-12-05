#include <iostream>
using namespace std;

int bitwiseComplement(int n){
    int m=n;
    int mask=0;

    //Edge case
    if (n==0){
        return 1;
    }
    while(m!=0){
        mask = (mask << 1)|1;
        m = m >> 1;

    }
    int result=(~n)& mask;
    return result;
}


int main(){
//Write your code here
int n;
cout<<"Enter a number: ";
cin>>n;
cout<<"Bitwise complement of "<<n<<" is "<<bitwiseComplement(n)<<endl;  
return 0;
}