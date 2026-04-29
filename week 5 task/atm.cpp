# include <iostream>
using namespace std;
main() {
    string pin;
    int options;
    int currentamount=10000;
    int withdrawmoney;
    int deduct;
    int sufficientbalance;
    int totalamount;
    int deposit;
    for(int i=1;i<=3;i=i+1)
    {
        cout<<"Enter ATM PIN:";
        cin>>pin;
    if( pin=="1234")
    {
        cout<<"Login Successfull"<<endl;
        break;
    }
    else{
        cout<<"Wrong PIN"<<endl;
    }
    if(i==3 && pin!="1234")
    {
        cout<<"Too many attempts.Card Blocked."<<endl;
        cout<<endl;
        return 0;
    }
}
for( int j=1;j<=5;j=j+1)
{
    cout<<"----ATM MANAGEMENT SYSTEM----"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit Money"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter option:";
    cin>>options;
    if(options==1)
    {
        cout<<"Current Balane= " <<currentamount<<endl;
    }
    else if( options==2)
    {
        cout<<"How many amount you want to deposit:";
        cin>>deposit;
        currentamount=currentamount+deposit;
        cout<<"Money deposited successfully"<<endl;
    }
    else if(options==3)
    {
        cout<<"Withdraw Money Amount:"<<endl;
        cin>>withdrawmoney;
        if(withdrawmoney>currentamount){
            cout<<"insufficient balance"<<endl;
        }
        else{
        currentamount=currentamount-withdrawmoney;
        cout<<"Money withdrawed successfully"<<endl;
        }
    }
    else if(options==4)
    { 
        cout<<"Program Ends"<<endl;
        break;
    }
}
}