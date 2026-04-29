#include <iostream>
using namespace std;
 main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for(int i=num; i > 0; i = i / 10) {
        sum = sum + i% 10;
    }
    cout << "Sum of digits = " << sum;
    return 0;
}