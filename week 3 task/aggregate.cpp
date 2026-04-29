#include <iostream>
using namespace std;
main() {
cout<<"Enter the student's name:";
string name;
cin>>name;
cout<<"Enter matriculation marks (out of 1100):";
float matriculation_marks;
cin>>matriculation_marks;
cout<<"Enter intermediate marks (out of 550):";
float intermediate_marks;
cin>>intermediate_marks;
cout<<"Enter ECAT marks (out of 400):";
float ECAT_marks;
cin>>ECAT_marks;
float Aggregate_score;
Aggregate_score=((matriculation_marks/1100)*0.1+(intermediate_marks/550)*0.4+(ECAT_marks/400)*0.5)*100;
cout<<"Aggregate score for"<<" "<< name <<" "<<"is" <<Aggregate_score<< "%";
}