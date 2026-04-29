#include <iostream>
using namespace std;
main() {
cout<<"Enter vegetable price per kilogram(in coins):";
float vegetable_price;
cin>>vegetable_price;
cout<<"Enter fruit price per kilogram(in coins):";
float fruit_price;
cin>>fruit_price;
cout<<"Enter total kilograms of vegetables:";
int total_kilograms_vegetables;
cin>>total_kilograms_vegetables;
cout<<"Enter total kilograms of fruits:";
int total_kilogram_fruit;
cin>>total_kilogram_fruit;
float earnings;
earnings=(vegetable_price*total_kilograms_vegetables+fruit_price*total_kilogram_fruit)/1.94;
cout<<"Total earnings in rupees(Rps) : " <<earnings;
}
