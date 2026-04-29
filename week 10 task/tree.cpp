# include <iostream>
# include <cmath>
using namespace std;
double calculateHeight( double distance, double angle_of_deflection){
    double angleRadians=angle_of_deflection/57.2978;
    double height=distance*tan(angleRadians);
    return height;
}

int main() {
    double distance;
    double angle;
    cout<<"Enter the distance from the base of tree:";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees):";
    cin>>angle;
    double height= calculateHeight(distance, angle);
    cout << "The height of the tree is " << height << " feet: " <<endl;
    return 0;
}