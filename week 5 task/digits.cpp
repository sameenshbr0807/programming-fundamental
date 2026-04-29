# include <iostream>
using namespace std;
main() {
    int count=0;
    cout<<"Enter number:";
    int n;
    cin>>n;
    for( int i=n; i>0; i=i/10)
    { 
      count=count+1;
    }
      cout<<"Total number of digits:" <<count;
}