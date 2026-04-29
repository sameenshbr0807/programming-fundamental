#include <iostream>
using namespace std;
main() {
cout<<"Enter initial velocity(m/s):";
int vi;
cin>>vi;
cout<<"Enter acceleration(m/s^2):";
int a;
cin>>a;
cout<<"Enter time(s):";
int time;
cin>>time;
int final_velocity;
final_velocity=vi+a*time;
cout<<"Final velocity (m/s) : "<<final_velocity;
}