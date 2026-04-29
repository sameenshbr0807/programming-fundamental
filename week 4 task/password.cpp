#include <iostream>
using namespace std;
main(){
    cout<<"Enter the password:";
    string user_enter;
    cin>>user_enter;
    string my_password;
    my_password="account123!";
    if( user_enter==my_password ){
        cout<<"wow!you have cracked the code";
    }
    else{
        cout<<"It is not that simple,Try again!";
    }
}