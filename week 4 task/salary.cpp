#include <iostream>
using namespace std;
main() {
    int salary=10000;
    int laptopprice=50000;
    int months=6;
    int advancesalary=salary*50/100;
    int totalsalary=advancesalary*6;
    if ( advancesalary >= laptopprice){
        cout<<"Buy the laptop";
    }
    else{
        int requiredmonths=laptopprice/advancesalary;
        cout<<"months required to buy laptop:" <<requiredmonths;
    }
}