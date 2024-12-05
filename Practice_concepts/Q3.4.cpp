#include <iostream>
using namespace std;
#define pi 3.14
int squarearea(int &);
int circlearea(int &);

int main(){
    int a=10;
    cout << squarearea(a)<<" ";
    cout << circlearea(a)<<" ";
    cout << a <<endl;
}

int squarearea(int &a){
    return a *=a;

}

int circlearea(int &r){
    return r=pi*r*r;
}