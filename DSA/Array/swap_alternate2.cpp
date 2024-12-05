#include <iostream>
using namespace std;

void swap_alternate(int arr[],int size){
    for (int i=0;i<size;i+=2){
        if (i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int main(){
//Write your code here
    int n;
    cout << "Enter the number of elements of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    swap_alternate(arr,n);
    return 0;
}