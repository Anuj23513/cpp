#include <iostream>
using namespace std;

// Recursive function for binary search
int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is smaller than mid, search the left half
        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

        // If target is larger than mid, search the right half
        return binarySearch(arr, mid + 1, right, target);
    }

    // Target is not present in the array
    return -1;
}

int main() {
    int arr[] = {10, 23, 45, 70, 80, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 70;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
