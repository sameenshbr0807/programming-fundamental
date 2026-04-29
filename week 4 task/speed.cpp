#include <iostream>
using namespace std;
main() {
    cout<<"Enter speed:";
    int speed;
    cin>>speed;
    float slow;
    float fast;
    float average;
    float ultra_fast;
    float extremely_fast;
    if( speed <=10){
        cout<<"slow" <<endl;
    }
   else if( speed <=50){
        cout<<"average" <<endl;
    }
   else if (speed<=150){
        cout<<" fast" <<endl;
    }
   else if( speed<=1000){
        cout<<"ultra fast" <<endl;
    }
    else{
        cout<<"extremely fast"<<endl;
    }
}