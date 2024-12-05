//Inline Function

#include <iostream>
using namespace std;

inline int square(int a){
    return a*a;
}
inline int cube(int a){
    return a*a*a;
}

int main(){
    int a;
    cout <<"Enter the number to calculate square and cube: ";
    cin>>a;
    cout<<"Square is:"<<square(a)<<endl;
    cout<<"cube is:"<<cube(a)<<endl;

    return 0;
}