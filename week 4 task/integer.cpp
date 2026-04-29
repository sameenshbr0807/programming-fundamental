#include <iostream>
using namespace std;
main(){
    cout<<"Please enter the  number:";
    int number;
    cin>>number;
    int even;
    even=number%2;
    if( even== 0 ){
        cout<<"The integer is even";
    }
        else{
            cout<<"The integer is odd";

        }
    }