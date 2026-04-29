# include <iostream>
using namespace std;
main() {
    cout<<"Enter first number:";
    int n1;
    cin>>n1;
    cout<<"Enter second number:";
    int n2;
    cin>>n2;
    int gcd;
    int lcm;
    for(int i=1;i<=n1 && i<=n2;i=i+1)
    {
        if( n1%i==0 && n2%i==0 )
        {
            gcd=i;
        }
        lcm=(n1*n2)/gcd;
    }
    cout<<"GCD of " <<n1 << " and " <<n2 << " is " <<gcd<<endl;
    cout<<"LCM of " <<n1 << " and " <<n2 << " is " <<lcm<<endl;
}