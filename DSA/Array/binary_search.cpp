#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 23, 45, 70, 80, 100};
    int size = 6;
    int target =80 ;
    int left = 0, right = size - 1;

    // Binary search loop
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Element not found in the array" << endl;
    return 0;
}
