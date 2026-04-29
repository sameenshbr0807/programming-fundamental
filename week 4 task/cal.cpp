#include<iostream>
using namespace std;
main() {
cout<<"Enter first number:";
int first_number;
cin>>first_number;
cout<<"Enter the operator:";
char op;
cin>>op;
int results;
cout<<"Enter second number:";
int second_number;
cin>>second_number;
if ( op== '+' ) {
results=first_number-second_number;
cout<<first_number <<"-" <<second_number <<"=" <<results;
}
if ( op== '-' ) {
results=first_number+second_number;
cout<<first_number << "+" <<second_number <<"=" <<results;
}
if( op== '*') {
results=first_number/second_number;
cout<< first_number << "/" <<second_number <<"=" <<results;
}
if (op== '/' ) {
results=first_number*second_number;
cout<<first_number <<"*" <<second_number <<"=" <<results;
}
}
