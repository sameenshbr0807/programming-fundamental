#include <iostream>
using namespace std;
main() {
cout<<"Enter the age in years:";
int age_in_years;
cin>>age_in_years;
int days=365;
int age_in_days;
age_in_days=age_in_years*days;
cout<<"Your age in days is approximately"<<" "<<age_in_days<<" "<<"days";
}