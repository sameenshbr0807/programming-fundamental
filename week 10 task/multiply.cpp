# include <iostream>
using namespace std;
int myfunction(int number);
int main(){
    int number;
    int results;
    cout<<"Enter the number:";
    cin>>number;
    results=myfunction(number);
    return 0;
}
int myfunction(int number)
{
    int total;
    total=number*5;
    cout<<total;
    return total;
}
