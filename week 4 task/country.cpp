#include <iostream>
using namespace std;
main() {
    cout<<"Enter country's name:";
    string name;
    cin>>name;
    cout<<"Enter ticket price:";
    int price;
    cin>>price;
    int discount;
    int total_price;
    string any_country;
    if( name=="ireland"){
        discount=price*10/100;
        total_price=price-discount;
        cout<<"discounted price:" << total_price;
 }
 else{
    discount=price*5/100;
    total_price=price-discount;
    cout<<"discounted price:" << total_price;
 }
}