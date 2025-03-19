#include <iostream>
using namespace std;

void insertion_Sort(int arr[],int n){
    for (int i=1;i<n;i++){   // Round No
    int temp=arr[i];
    int j=i-1;
    for (j;j>=0;j--){
        if (arr[j] > temp){
            //shift by one place
            arr[j+1]=arr[j];
        }
        else{
            //If the element is sorted in the array
            break;
        }
    }
    arr[j+1]=temp;
}

for (int i =0;i<n;i++){
    cout << arr[i]<<" ";
}
}
int main(){
//Write your code here
    int n;
        cout << "Enter the number of elements in the array : ";
        cin >> n;

        int arr[n];
        cout << "Enter elements ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        insertion_Sort(arr, n);

        return 0;
}