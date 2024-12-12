#include <iostream>
using namespace std;

class Student {
    int rollNo;
    char name[50];
    double fee;

    public:
        Student() {    // Constructor is a member function that invoked when the object of the class is created and its name is same as the class name
            cout << "Enter the RollNo: ";
            cin >> rollNo;
            cout << "Enter the Name: ";
            cin >> name;
            cout << "Enter the Fee: ";
            cin >> fee;
        }

        void display() {
            cout << endl << rollNo << "\t" << name << "\t" << fee;
        }
};

int main() {
    Student s;
    s.display();
    return 0;
}
