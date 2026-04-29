#include<iostream>
using namespace std;
main(){
    cout<<"Please enter your name:";
    string name;
    cin>>name;
    if( name== "ahmad"){
        cout<<"Welcome " << name;
    }
    if( name!= "ahmad"){
        cout<<"Try again!";
    }
}