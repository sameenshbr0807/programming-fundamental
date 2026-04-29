#include <iostream>
using namespace std;

void convert(int n) {

    string ones[] = {"", "One", "Two", "Three", "Four", "Five",
                     "Six", "Seven", "Eight", "Nine"};

    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                      "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                     "Sixty", "Seventy", "Eighty", "Ninety"};

    if (n <= 9)
        cout << ones[n];
    else if (n <= 19)
        cout << teens[n - 10];
    else {
        cout << tens[n / 10];
        if (n % 10 != 0)
            cout << " " << ones[n % 10];
    }
}

int main() {
    int n;
    cout << "Enter a number(1 to 99):";
    cin >> n;

    convert(n);

    return 0;
}