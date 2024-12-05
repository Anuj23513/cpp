#include <iostream>
using namespace std;

int binary_Search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid = start+(end-start)/2;
    while (start<=end){
        if (arr[mid]==key){
            return mid;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid = start+(end-start)/2;

    }
    return -1;
}

int main(){
//Write your code here
    // int n;
    // cout << "Enter the number of elements of the array ";
    // cin>>n;
    // int arr[n];
    // cout << "Enter the elements of array in ascending order ";
    // for (int i=0;i<n;i++){
    //     cin >> arr[i];
    // }

    int key;
    cout << "Enter the key to search in the array ";
    cin >> key;

    int odd[5]={3,8,11,14,16};
    int even[6]={2,4,6,8,12,18};


    // cout << "Index of key is "<< binary_Search(arr,n,key)<<endl;
    cout << "In odd array Index of key is "<< binary_Search(odd,5,key)<<endl;
    cout << "In even array Index of key is "<< binary_Search(even,6,key)<<endl;

    // Time complexity of binary search is O(logn)

    return 0;

}