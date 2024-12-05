#include <iostream>
using namespace std;

void rev_arr(int* arr, int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }
}

int main() {
    int* arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    arr = new int[n];
    for (int i = 0; i < n; ++i) {
        int numbers;
        cout << "Enter the elements of the array: ";
        cin >> numbers;
        arr[i] = numbers;
    }

    // Reverse the array
    rev_arr(arr, n);

    // Print the reversed array
    cout << "Reversed elements of the array are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
