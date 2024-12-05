#include <iostream>
using namespace std;


void unique_Element(int arr[],int n){
    int brr[n];
    int count=0;
    for (int i=0;i<n;i++){
        bool isUnique=true;
        for (int j=0;j<count;j++){
            if (arr[i]==brr[j]){
                isUnique=false;
                break;
        }
        }
        if (isUnique){
            brr[count]=arr[i];
            count++;
        }
    }

    cout << "Unique elements are : ";
    for (int i=0;i<count;i++){
        cout << brr[i]<<" ";
    }
    cout <<endl;
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

    unique_Element(arr,n);
}