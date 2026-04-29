#include <iostream>
using namespace std;
main() {
cout<<"Enter the name of person:";
string name;
cin>>name;
cout<<"Enter the target weight loss in kilograms:";
int weight_loss;
cin>>weight_loss;
int daysforonekg;
daysforonekg=15;
int target_weight_loss;
target_weight_loss=daysforonekg*weight_loss;
cout<<name<< " will need " <<target_weight_loss<< "days to lose " <<weight_loss<< "kg "<<"of weight by following doctor's suggestions";
}