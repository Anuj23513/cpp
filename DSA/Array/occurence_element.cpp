#include <iostream>
using namespace std;

int first_Occ(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int result=-1;
    while(start<=end){
        if (arr[mid]==key){
            result=mid;
            end=mid-1;
        }
        if (key<arr[mid]){
            end=mid-1; 
        }
        else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }

    return result;
}

int last_Occ(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int result=-1;
    while(start<=end){
        if (arr[mid]==key){
            result=mid;
            start=mid+1;
        }
        if (key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }

    return result;
}
int main(){
//Write your code here
    int arr[6]={1,2,2,2,2,5};
    // int key;
    // cout << "Enter the key to search ";
    // cin >> key;
    cout << "Index of first occ "<< first_Occ(arr,6,2)<<endl;
    cout << "Index of last occ "<< last_Occ(arr,6,2)<<endl;
    int occ=(last_Occ(arr,6,2)-first_Occ(arr,6,2));
    cout << "The number of occurence of  is "<< occ<<endl;
    return 0;
}