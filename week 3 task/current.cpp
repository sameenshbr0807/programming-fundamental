#include <iostream>
using namespace std;
main() {
cout<<"Enter the charge in coulombs:";
float charge;
cin>>charge;
cout<<"enter the time in seconds:";
float time;
cin>>time;
float current;
current=charge/time;
cout<<"The current is"<<current;
}