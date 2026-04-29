#include <iostream>
using namespace std;
 main() {
    int num, digit, count = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the digit";
    cin >> digit;
    temp = num;
    while (temp != 0) {
        if (temp % 10 == digit) {
            count++;
        }
        temp /= 10;
    }
    cout << "Frequency of " << digit << " in " << num << " is " << count << endl;
}