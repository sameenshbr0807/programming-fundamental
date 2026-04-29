# include <iostream>
using namespace std;
main() {
    cout<<"Enter a positive number:";
    int n;
    cin>>n;
    while( n<=0)
    {
    cout<<"Error: " << n << " is not a positive number "<<endl;
    cout<<"Please enter a positive number"<<endl;
    cin>>n;
    }
    cout<<"Program ends"<<endl;
}