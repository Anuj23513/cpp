#include <iostream>
using namespace std;
int reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){   
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int i=0;i<n;i++){
        cout << arr[i];
    }
}
int main(){
//Write your code here
    int arr[5]= {1,2,3,4,5};
    reverse(arr,5);
    return 0;

}