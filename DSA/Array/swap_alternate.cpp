#include <iostream>
using namespace std;

int swap_alternate(int arr[],int size){
    if (size%2==0){  // For even
    for (int i=0;i<size;i=i+2){
        swap(arr[i],arr[i+1]);
    }
    }
    else{    //For odd cases
        int end=size-1;
        for (int j=0;j<size;j+=2){
            if (arr[j]!=arr[end]){
                swap(arr[j],arr[j+1]);
            }
            else{
                swap(arr[j],arr[end]);
            }
    }
    }
    for (int i=0;i<size;i++){
        cout << arr[i]<<" ";
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