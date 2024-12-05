#include <iostream>
using namespace std;

void rev_Arr(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    // Displaying the array
    cout << "Reversed array ";
    for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
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
    cout << "Original arr "<<" ";
    for (int j=0;j<n;j++){
        cout << arr[j]<<" ";
    }
    cout << endl;
    rev_Arr(arr,n);
    return 0;
}