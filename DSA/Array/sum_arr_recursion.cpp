#include <iostream>
using namespace std;

int arr_sum(int* arr ,int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return arr[0];
    }
    else{
        return arr[n-1]+arr_sum(arr,n-1);
    }
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

