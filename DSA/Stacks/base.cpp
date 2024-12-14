#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s;
    s.push(5);
    s.push(9);
    s.push(10);
    cout << s.top()<<endl;
    s.pop();
    cout << s.top()<<endl;
    cout << s.empty()<<endl;
}


// This implementation is STL standard template library