#include <iostream>
using namespace std;
main(){
    cout<<"Enter the first word:";
    string name1;
    cin>>name1;
    cout<<"Enter the second name:";
    string name2;
    cin>>name2;
    if( name1 == name2 ){
    cout<<"yes, the words are same";
    }
    else{
    cout<<"no. the words are different";
    }
}