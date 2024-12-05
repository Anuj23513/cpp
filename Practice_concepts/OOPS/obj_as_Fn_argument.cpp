#include <iostream>
using namespace std;
// Program to add times and show in hours and minutes
class Time
{
    private:
        int h,m;
    public:
        void getdata(){
            cout <<"Enter hours and minutes followed by a space: ";
            cin >> h>> m;
        }
        void putdata(){
            cout <<"Hours and minutes are :"<<h<<" hours "<<"and "<<m <<" minutes"<< endl;
            
        }
        void total(){
            cout <<"The total Hours and minutes are :"<<h<<" hours "<<"and "<<m <<" minutes"<< endl;
        }
        void sum(Time t1,Time t2){
            h=(t1.m+t2.m)/60;        //Got Hours
            m=(t1.m+t2.m)%60;        // Got minutes
            h=h+(t1.h+t2.h);         //Adding previos hours of T1 and T2
        }
};


int main(){
    Time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
// got all the times lets put it now

    t1.putdata();
    t2.putdata();
    t3.total();


    return 0;

}