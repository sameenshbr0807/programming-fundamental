#include <iostream>
using namespace std;
main() {
cout<<"Enter paint area:";
int n;
cin>>n;
cout<<"Enter width:";
int w;
cin>>w;
cout<<"Enter height:";
int h;
cin>>h;
int wall_painted;
wall_painted=n/(w*h);
cout<<"wall painted = " <<wall_painted;
}