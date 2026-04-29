#include <iostream>
using namespace std;
main() {
cout<<"enter voltage in volts:";
float voltage;
cin>>voltage;
cout<<"enter current in amperes:";
float current;
cin>>current;
float power;
power=voltage*current;
cout<<"The power is"<<" "<<power<<" "<<"watts";
}