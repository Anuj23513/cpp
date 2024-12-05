#include <iostream>
using namespace std;

class Student {
    int rollNo;
    char name[50];
    double fee;

    public:
        Student() {
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
