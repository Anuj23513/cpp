#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i=rows;i>=1;i--){   // Do not use assignment operator in such case it results while loop
        for (int j=1;j<=5;j++){  // no of elements in each row 
            cout << i;

        }
        cout <<endl;
    }
}