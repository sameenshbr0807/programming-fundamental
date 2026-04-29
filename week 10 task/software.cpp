#include <iostream>
#include <cmath>
using namespace std;
void calculateRoots(double a, double b, double c);

int main() {
    double a, b, c;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
    } else {
        calculateRoots(a, b, c); 
    }

    return 0;
}

// Function definition
void calculateRoots(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Two real and distinct roots" << endl;
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2*a);

        cout << "One real root repeated" << endl;
        cout << "Root = " << root << endl;
    }
    else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);

        cout << "Complex roots:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
} 