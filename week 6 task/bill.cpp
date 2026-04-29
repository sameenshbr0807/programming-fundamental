# include <iostream>
using namespace std;
main() {
    int quarters,dimes,nickels,pennies;
    float amount;
    cout<<"Enter quarters:";
    cin>>quarters;
    cout<<"Enter dimes:";
    cin>>dimes;
    cout<<"Enter nickels:";
    cin>>nickels;
    cout<<"Enter pennies:";
    cin>>pennies;
    cout<<"Enter the total amount due:$" ;
    cin>>amount;
    float total;
    total=(quarters*0.25)+(dimes*0.10)+(nickels*0.05)+(pennies*0.01);
    if(total>=amount){
        cout<<"Can you pay the amount? yes"<<endl;
    }
    else{
        cout<<"Can you pay the amount? no"<<endl;
    }
}