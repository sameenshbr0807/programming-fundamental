#include <iostream>
using namespace std;
 main(){
cout << "Enter the movie name:";
string name;
cin >> name;
cout << "Enter the adult ticket price:"<<"$";
int adult_ticket;
cin >> adult_ticket;
cout << "Enter the child ticket price:"<<"$";
int child_price;
cin >> child_price;
cout << "Enter the number of adult ticket sold:";
int adult_sold;
cin >> adult_sold;
cout << "Enter the number of child ticket sold:";
int child_sold;
cin >> child_sold;
cout << "Enter the percentage of amount to be donated to charity:";
int per_amount;
cin >> per_amount;
int Total_amount = adult_ticket * adult_sold + child_price * child_sold;
int Donation = Total_amount * 10 / 100;
int Remaining_amount = Total_amount - Donation;
cout << "Movie " << name << endl;
cout << "Total amount generated from ticket sales:" <<"$"<< Total_amount << endl;
cout << "Donation to charity (10%):"<<"$" << Donation << endl;
cout << "Remaining amount after donation:" <<"$" << Remaining_amount << endl;
}