#include <iostream>
using namespace std;
int bubble_sort(int arr[],int n){
    for (int i=1;i<n;i++){
        // For rounds of swapping 1->n-1
        bool swapped=false;
        for (int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                swapped=true;
        }
        if (swapped==false){
            // Already sorted
            break;
        }
    }

    for (int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}
int main(){
//Write your code here
    int arr[5]={3,4,5,1,9};
    int brr[6]={1,2,3,4,5,6};
    bubble_sort(arr,5);
    cout << endl;
    bubble_sort(brr,6);
    return 0;
}