# include <iostream>
using namespace std;
main() {
cout<<"Enter money:";
int X;
cin>>X;
cout<<"Enter year:";
int year;
cin>>year;
int age;
double spent=0;
for( int i =1800;i<=year;i++)
{
    if( i%2==0)
    {
        spent=spent+12000;
    }
    else{
        age=18+(i-1800);
        spent=spent+12000+(50*age);
    }
}
if(X>=spent)
{
    cout<<"Yes!He will live a carefree life"<<endl;
    cout<<"and will have ";
    cout<<X-spent << " dollars left"<<endl;
}
else{
    cout<<"He will need ";
    cout<<spent-X << " dollars to survive"<<endl;
}

}

