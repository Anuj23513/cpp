#include <iostream>
using namespace std;

int arr_sum(int* arr ,int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int *arr;
    int n;
    cout << "Enter the number of elements in array: ";
    cin>>n;

    arr=new int[n];
    for (int i = 0; i < n; ++i) {
        int numbers;
        cout<< "Enter the elements of array: ";
        cin>> numbers;
        arr[i] =numbers;
    }

    cout << "Sum of elements of array is "<<arr_sum(arr,n);
    

}

