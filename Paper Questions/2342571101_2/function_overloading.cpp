#include <iostream>
using namespace std;

float area(float b,float h){
    float Area_of_Triangle=0.5*b*h;
    cout << "Area of Triangle is = "<< Area_of_Triangle<<endl;
}

float area(float r){
    float pi=3.14;
    float Area_of_circle=pi*r*r;
    cout << "Area of circle is = "<< Area_of_circle<<endl;
}

int main(){
    //for area of triangle
    float b,h;
    cout << "Enter base and height of triangle";
    cin>>b>>h;
    area(b,h);

    // For area of circle
    float r;
    cout << "Enter the radius of circle: ";
    cin >> r;
    area(r);

}