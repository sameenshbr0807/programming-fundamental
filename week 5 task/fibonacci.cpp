# include <iostream>
using namespace std;
main() {
    cout<<"How many numbers of fibonacci series you want to print:";
    int n;
    cin>>n;
    int n1=0;
    int n2=1;
    int next;
    cout<<n1 <<", "<<n2<<", ";
    for( int i=0 ; i<n-1 ;i=i+1)
    {
        next=n1+n2;
        n1=n2;
        n2=next;
        cout<<next <<", ";
    }
}