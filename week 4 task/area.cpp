#include <iostream>
using namespace std;
main(){
    cout<<"Shape of geometric figure:";
    string shape;
    cin>>shape;
    int number;
    float area_of_square;
    float area_of_rectangle;
    float area_of_triangle;
    float area_of_circle;
    float l;
    float w;
    double r;
    float s;
    double pi=3.1415;
    float b;
    float h;
   if( shape== "square"){
    cin>>s;
     area_of_square=s*s;
    cout <<area_of_square;   
   }
   if( shape=="triangle"){
    cin>>b;
    cin>>h;
    area_of_triangle=0.5*(b*h);
    cout<< area_of_triangle;
   }
   if (shape== "circle"){
    cin>>r;
    area_of_circle=3.1415*r*r;
    cout <<area_of_circle;
   }
   if (shape== "rectangle"){
    cin>>l;
    cin>>w;
     area_of_rectangle=l*w;
    cout<<area_of_rectangle;
   }
}