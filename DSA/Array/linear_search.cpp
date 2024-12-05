#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,6,8,12,47,25};
    int element_to_search = 25;
    int size = 6;
    int i;

    // Linear search
    for (i = 0; i < size; i++) {
        if (arr[i] == element_to_search) {
            cout << "Element found at index " << i << endl;
            break;
        }
    }

    if (i == size) {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
