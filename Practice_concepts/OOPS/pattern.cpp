#include <iostream>
using namespace std;

class pattern{
    private:
    int rows;
    public:
    void getdata();
    void putdata();
};

void pattern::getdata(){
    cout << "Enter the number of rows:  ";
    cin>>rows;
    }
void pattern::putdata(){
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            cout <<j;
        }
        cout <<endl;
    }
}

int main(){
    pattern obj;
    obj.getdata();
    obj.putdata();
    return 0;
}