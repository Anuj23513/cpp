#include <iostream>
using namespace std;

class Time
{
    private:
        int h,m;
    public:
        void getdata();
        void putdata();
        void sum(Time T1,Time T2);
};

void Time::getdata(){
    cout << "Enter hours and minute followed by space: ";
    cin>>h>>m;
}

void Time::putdata(){
    cout <<"Hours are :"<<h<<" minutes are: "<<m<<endl;
}

void Time::sum(Time T1,Time T2){
    h=((T1.m)+(T2.m))/60;
    m=((T1.m)+(T2.m))%60;
    h=h+(T1.h)+(T2.h);
}

int main(){
    Time T1,T2,T3;
    T1.getdata(),T2.getdata(),T3.sum(T1,T2);
    T1.putdata(),T2.putdata(),T3.putdata();
    return 0;
}