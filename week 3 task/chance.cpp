#include <iostream>
using namespace std;
main() {
cout<<"Enter imposter:";
float imposter;
cin>>imposter;
cout<<"Enter players:";
float players;
cin>>players;
float chance;
chance=100*(imposter/players);
cout<<"chance = " <<chance<<"%" ;
}