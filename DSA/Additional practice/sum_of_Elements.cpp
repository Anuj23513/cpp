#include <iostream>
using namespace std;


int sum_elements(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
        int arr[5]={1,23,43,87,34};
        cout << "Sum of elements of array is : "<<sum_elements(arr,5)<<endl;
}