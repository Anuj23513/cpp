#include <iostream>
using namespace std;

bool Linear_Search(int arr[],int n){
    int key;
    cout << "Enter the element to search: ";
    cin>>key;
    for (int i=0;i<n;i++){
        if (arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
//Write your code here
    int n;
    cout << "Enter the number of elements of the array : ";
    cin >> n;

    int arr[n];
    cout << "Please note: array will categorised only n elements" <<endl; 
    cout << "Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool found=Linear_Search(arr,n);
    if (found){
        cout <<"Key is present"<<endl;
    }
    else{
        cout << "Key is absent"<<endl;
    }

    return 0;
    
}