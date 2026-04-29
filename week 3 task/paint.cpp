#include <iostream>
using namespace std;
main() {
cout<<"No of square meters you can paint:";
int n;
cin>>n;
cout<<"Width of single wall(in meters):";
int w;
cin>>w;
cout<<"Height of single wall(in meters):";
int h;
cin>>h;
int wall_painted;
wall_painted=n/(w*h);
cout<<"Number of walls you can paint: " <<wall_painted;
}