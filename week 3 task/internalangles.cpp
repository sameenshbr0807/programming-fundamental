#include <iostream>
using namespace std;
main() {
cout<<"Enter the number of the sides of polygon:";
int n;
cin>>n;
int internal_angles;
internal_angles=(n-2)*180;
cout<<"The total sum of internal angles of a : " <<n<<"-sided polygon is : "<<internal_angles<<"degrees";
}