#include <iostream>
using namespace std;
int reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int i=0;i<size;i++){
        cout << arr[i]<<" ";
    }
}
int main(){
//Write your code here
    int n;
    cout << "Enter the number of elements ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
        reverse(arr,n);
}