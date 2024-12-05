#include <iostream>
using namespace std;

void Reached_at_home(int src,int dest){
    //base case
    if (src==dest){
        cout << "Reached at Home"<<endl;
        return ;
    }
    cout << "Source " << src << "Destination " << dest << endl;
    src++;
    Reached_at_home(src,dest);

}

int main(){
//Write your code here
    int src=1;
    int destination=15;

    Reached_at_home(src,destination);
    return 0;
}