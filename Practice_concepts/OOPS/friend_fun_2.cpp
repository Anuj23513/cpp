#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
private:
    int a;

public:
    void getdata() {
        cout << "Enter the first number: ";
        cin >> a;
    }
    friend void max(A obj1, B obj2);
};

class B {
private:
    int b;

public:
    void getdata() {
        cout << "Enter the second number: ";
        cin >> b;
    }
    friend void max(A obj1, B obj2);
};

void max(A obj1, B obj2) {
    if (obj1.a > obj2.b) {
        cout <<obj1.a<< " is greater" << endl;
    } else {
        cout <<obj2.b<< " is greater" << endl;
    }
}

int main() {
    A obj1;
    B obj2;
    obj1.getdata();
    obj2.getdata();
    max(obj1, obj2);
    return 0;
}