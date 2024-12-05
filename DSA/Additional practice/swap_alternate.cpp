#include <iostream>
using namespace std;

void swap_alternate(int arr[],int n){
    for (int i=0;i<n;i+=2){
        if (i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    for (int j=0;j<n;j++){
        cout << arr[j]<<" ";
    }
    cout << endl;
}

int main(){
//Write your code here
    int arr[5]={1,23,43,87,34};
    swap_alternate(arr,5);
    return 0;
}