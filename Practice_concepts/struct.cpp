#include <iostream>
using namespace std;

typedef struct Employee
{
    int ID;
    char Role;
    float salary;

}ep; // You can use ep instead of struct name everywhere

int main(){
    struct Employee Anuj;
    Anuj.ID=1;
    Anuj.Role= 'E';
    Anuj.salary=1000.0;
    cout<<"The details of Anuj is :"<<endl;
    cout<<"ID: "<<Anuj.ID<<endl;
    cout<< "Role:"<<Anuj.Role<<endl;
    cout<<"Salary: "<<Anuj.salary<<endl;

}


// union enum