#include <iostream>
using namespace std;
main () {
    string name;
    cout<<"Enter first brother name:";
    string name1;
    cin>>name1;
    cout<<"Enter age of first brother:";
    int age1;
    cin>>age1;
    cout<<"Enter second brother name:";
    string name2;
    cin>>name2;
    cout<<"Enter age of second brother:";
    int age2;
    cin>>age2;
    cout<<"Enter third brother name:";
    string name3;
    cin>>name3;
    cout<<"Enter age of third brother:";
    int age3;
    cin>>age3;
    if (age1<age2&&age3>age1){
        cout<<name1<<" is youngest"<<endl;
    }
    else if(age2<age3&&age1>age2){
        cout<<name2<<" is youngest"<<endl;
    }
    else{
        cout<<name3<<" is youngest"<<endl;
    }
}