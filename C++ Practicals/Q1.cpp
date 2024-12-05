/* Write a program to compute the sum of the first n terms of the following series:
1-1/(2)^2+1/(3)^3- ........*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            sum -= 1/pow(i,i); 
        else
            sum += 1/pow(i,i);
    }
    cout << "Sum of series: " << sum;
    return 0;
}

