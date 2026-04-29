# include <iostream>
using namespace std;
main() {
    int number=0;
    int sum=0;
    while(number>=0) 
    {
        sum=sum+number;
        cout<<"Enter a number:";
       cin>>number;
    }
    cout<<"Sum:"<<sum;
}