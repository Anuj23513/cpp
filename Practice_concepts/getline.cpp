#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str;
  do {
    cout << "Enter text: ";
    getline (cin,str); //take input and store in str
    cout << "You entered: " << str << '\n';
  } while (str != "goodbye");
}