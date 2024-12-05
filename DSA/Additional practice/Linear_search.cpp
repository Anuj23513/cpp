#include <iostream>
using namespace std;

bool linear_Search(int arr[],int n,int key){
    for (int i=0;i<n;i++){
        if (arr[i]==key)
            return true;
    }

    return false;
}

int main(){
//Write your code here
    int key;
    int arr[5]={1,23,43,87,34};
    cout << "Enter the key to search : ";
    cin >>  key;

    bool found=linear_Search(arr,5,key);
    if (found){
        cout << "key is present"<<endl;
    }
    else{
        cout << "Key is absent"<<endl;
    }

    return 0;
}