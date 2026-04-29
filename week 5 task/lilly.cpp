# include <iostream>
using namespace std;
main() {
    cout<<"Enter lilly age:";
    int n;
    cin>>n;
    cout<<"Enter the price of washing machine:";
    int x;
    cin>>x;
    cout<<"Enter the unit price of each toy:";
    int p;
    cin>>p;
    int money=0;
    int toys=0;
    int gifts=0;
    for( int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            gifts=gifts+10;
            money=money+gifts-1;
        }
        else {
            toys=toys+1;
        }
    }
    int total;
    total=money+(toys*p);
    if(total>=x)
    {
        cout<<"Yes!" <<endl;
        cout<<"Money left:" <<total-x<<endl;
    }
    else
        {
            cout<<"No!"<<endl;
            cout<<"Money needed:"<<x-total<<endl;

        }
        
    
}