#include <iostream>
using namespace std;
main() {
cout<<"Enter the number of hours:";
int hours;
cin>>hours;
int seconds=60;
int minutes=60;
int time_in_seconds=hours*seconds*minutes;
cout<<hours<<" "<<"is equivalent to"<<" "<<time_in_seconds<<" "<<"seconds";
}