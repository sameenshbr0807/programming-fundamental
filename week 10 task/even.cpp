# include <iostream>
using namespace std;
string checkoddEvenish(int num){
    int d1,d2,d3,d4,d5;
    d1 = num/10000;
    d2 =(num/1000)%10;
    d3 =(num/100)%10;
    d4 =(num/10)%10;
    d5 =num%10;
    int sum =d1+d2+d3+d4+d5;
    if(sum%2==0)
    return "Evenish";
    else
    return "Oddish";
}
int main(){
    int number;
    cout << "Enter the 5 digit number:";
    cin >> number;
    cout << checkoddEvenish(number) <<endl;
    return 0;
}
