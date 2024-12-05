#include <iostream>
using namespace std;
int counting(int n){
    //base case
    if (n==0){
        return 0;
    }
    cout << n<<endl; // Tail recursion
    counting(n-1);
}
int counting_head(int n){
    //base case
    if (n==0){
        return 0;
    }
    counting_head(n-1); 
    cout << n<< " "; // Head recursion
    
}
int main(){
//Write your code here
    int n;
    cout << " Enter the number: " ;
    cin >> n;
    counting(n);
    counting_head(n);
}