#include <iostream>
using namespace std;
main() {
    cout<<"Please enter the number:";
    int number1;
    cin>>number1;
    cout<<"Please enter the second number:";
    int number2;
    cin>>number2;
    if( number1<number2){
        cout<<"Number " <<number2 <<" is greater than " <<number1;
    }
    else{
        cout<<"Number" <<number1 <<"is greater than " <<number2;
    }
}