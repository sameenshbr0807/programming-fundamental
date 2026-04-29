# include <iostream>
using namespace std;
main() {
    float total=0;
    int num;
    cout<<"Enter the number of resistors in series circuit:";
    cin>>num;
    float arr[100];
     cout<<"Enter the resistance values(in ohms) of the " << num <<",one per line:"<<endl;
    for(int i=0;i<num;i++){
    cin>>arr[i];
}
   for(int i=0;i<num;i++){
    total=total+arr[i];
   }
   cout<<"The total resistance of series circuit: " << total << " ohms"<<endl;
   }
  