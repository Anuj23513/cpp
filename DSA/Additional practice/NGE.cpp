#include <iostream>
#include <stack>
using namespace std;

void NGE(int arr[], int n){
    stack <int> s;
    int nge[n];
    for(int i = 0; i < n; i++){
        nge[i]=-1;
}
// 4 5 2 25
    for(int i = 0; i < n; i++){
        while(s.empty() != true && arr[s.top()] < arr[i]){
            nge[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    for(int i = 0; i < n ; i++){
        cout << nge[i] << " ";
    }
}
int main(){
    int n =4;
    int arr[] = {4, 5 , 2, 25};
    NGE(arr,n);
    return 0;
}