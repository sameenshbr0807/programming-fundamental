#include <iostream>
using namespace std;
 main() {
    int arr_size;
    int num[100];
    cout << "Enter the size of array" << endl;
    cin >> arr_size;
    cout << "Enter the elements of array" << endl;
    for (int i = 0;i < arr_size;i++) {
        cin >> num[i];
    }
    cout << "Elements of array are:" << endl;
    for (int i = 0;i < arr_size; i++) {
        cout << num[i] << endl;
    }
}