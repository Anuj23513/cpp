#include <iostream>
using namespace std;

void rev_arr_rec(int* arr, int s, int e) {
    if (s >= e) {
        return;
    }
    swap(arr[s], arr[e]); // Swap elements
    rev_arr_recur(arr, s + 1, e - 1);    // S for start and e for end 
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Reverse the array recursively
    rev_arr_recur(arr, 0, n - 1);

    cout << "Reversed elements of the array are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
