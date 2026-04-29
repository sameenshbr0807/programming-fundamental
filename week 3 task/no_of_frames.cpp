#include <iostream>
using namespace std;
main() {
cout<<"Number of Minutes:";
int length;
cin>>length;
cout<<"Frames per second:";
int fps;
cin>>fps;
int number_of_frames;
number_of_frames=length*fps*60;
cout<<"Total Number of frames : " <<number_of_frames;
} 
