#include <iostream>
using namespace std;

int max_arr(){
    int arr[]={1,2,3,4,2,3,4,5,6};
    int max=arr[0];
    for (int i=1;i=arr[-1];i++){
        if (arr[i]>arr[0]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    cout << max_arr<<endl;
    return 0;
}