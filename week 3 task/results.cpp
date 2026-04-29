
#include <iostream>
using namespace std;
 main() {
cout << "Enter the current world population:";
int population;
cin >> population;
cout << "Enter the monthly birth rate (number of birth per month):";
int n;
cin >> n;
int result;
result = population + (n * 360);
cout << "Population after three decades will be " << result << endl;
}