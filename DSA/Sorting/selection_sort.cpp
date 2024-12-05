#include <iostream>
using namespace std;

int selection_sort(int arr[],int size){
    for (int i=0;i<size-1;i++){
        int minIndex=i;
        for (int j=i+1;j<size;j++){
            if (arr[j] < arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<size;i++){
        cout << arr[i]<<" ";
    }
}

int main(){
    int n;
    cout << "Enter the number of elements ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    selection_sort(arr,n);
    return 0;
}