#include <iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int k=0;k<n;k++){
        cout << arr[k]<<" ";
    }
}
int main(){
//Write your code here
    int arr[5]={2,1,5,3,8};
    selection_sort(arr,5);

    return 0;
}