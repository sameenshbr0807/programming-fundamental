# include <iostream>
# include <cmath>
using namespace std;
int main(){
    int number1;
    cout<<"Enter the base number:";
    cin>>number1;
    int number2;
    cout<<"Enter the exponent:";
    cin>>number2;
    cout<<number1 << " raised to power " << number2 << " is " << pow (number1,number2);
    return 0;
}