#include <iostream>
using namespace std;

int main() {
    int h, m;
    cout << "Enter Hours:";
    cin >> h;
    cout << "Enter Minutes:";
     cin >>m;
    m = m + 15;

    if (m >= 60) {
        m = m - 60;
        h = h + 1;
    }

    if (h >= 24) {
        h = 0;
    }

    cout << h << ":" << m;

    return 0;
}