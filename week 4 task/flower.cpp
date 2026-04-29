#include <iostream>
using namespace std;
main() {
    cout<<"Number of red roses:";
    int red_roses;
    cin>>red_roses;
    cout<<"Number of white roses:";
    int white_roses;
    cin>>white_roses;
    cout<<"Number of tulip:";
    int tulip;
    cin>>tulip;
    float red_rose_price=2.00;
    float white_rose_price=4.10;
    float tulip_price=2.50;
    float original_price;
    float discount;
    float price_after_discount;
    float price;
    original_price=red_roses*red_rose_price+white_roses*white_rose_price+tulip*tulip_price;
    if ( original_price>200){
        discount=original_price*20/100;
        price_after_discount=original_price-discount;
        cout<<"original price: " <<original_price<<endl;
        cout<<"Price after discount: " <<price_after_discount;
 }
 else{
    cout<<"original price:" <<original_price<<endl;
    cout<<"Price after discount:" <<price_after_discount;

 }

}
