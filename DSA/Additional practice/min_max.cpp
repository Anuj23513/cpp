#include <iostream>
#include <climits>

using namespace std;

// Method 1

int getMin1(int arr[],int n){
    int minimum=INT_MAX;
    for (int i=0;i<n;i++){
        if (arr[i]<minimum){
            minimum=arr[i];
        }
    }
    return minimum;
}

int getMax1(int arr[],int n){
    int maximum=INT_MIN;

    for (int i=0;i<n;i++){
        if (arr[i]>maximum)
            maximum=arr[i];
    }

    return maximum;
}

//Method 2
int getMin2(int arr[],int n){
    int minimum=INT_MAX;
    for (int i=0;i<n;i++){
        minimum=min(minimum,arr[i]);  
    }
    return minimum;
}

int getMax2(int arr[],int n){
    int maximum=INT_MIN;

    for (int i=0;i<n;i++){
        maximum=max(maximum,arr[i]);
    }
    return maximum;
}

//Method 3

int getMin3(int arr[],int n){
    int minimum=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]<minimum)
            minimum=arr[i];
    }
    return minimum;
}

int getMax3(int arr[],int n){
    int maximum=arr[0];

    for (int i=1;i<n;i++){
        if (arr[i]> maximum)
            maximum=arr[i];
    }
    return maximum;
}

// Main function

int main(){
    int arr[5]={1,23,43,87,34};
    cout << "Maximum and minimum using method 1 : "<< getMax1(arr,5) << " "<<getMin1(arr,5)<<endl;
    cout << "Maximum and minimum using method 2 : "<< getMax2(arr,5) << " "<<getMin2(arr,5)<<endl;
    cout << "Maximum and minimum using method 3 : "<< getMax3(arr,5) << " "<<getMin3(arr,5)<<endl;
}