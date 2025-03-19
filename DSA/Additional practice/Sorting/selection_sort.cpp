

#include <iostream>
using namespace std;

void selection_Sort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int minIndex=i;
        for (int j=i+1;j<n;j++){
            if (arr[minIndex]>arr[j])
                minIndex=j;   
        }

        swap(arr[i],arr[minIndex]);
    }

    for (int i=0 ; i<n ; i++){
        cout << arr[i]<< " ";
    }
}

int main(){
    //Write your code here
    int n;
    cout << "Enter the number of elements of the array : ";
    cin >> n;

    int arr[n];
    cout << "Note: Enter elements not more than your entered size "<<endl;
    cout << "Enter the elements of the array : ";
    for (int i=0;i<n;i++){
        cin >> arr[i];}


    selection_Sort(arr,n);

    return 0;
    
}