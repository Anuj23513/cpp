#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<< "Enter the character: ";
    cin>> ch;
    switch(ch){
        case 'A':
            cout <<" Variable has value A"<<"\n";
        case 'B':
            cout <<" Variable has value B"<<"\n";
        case 'C':
            cout <<" Variable has value C"<<"\n";
            break;
        default:
            cout <<" Variable has Some other value"<<"\n";
    }

}