# include <iostream>
using namespace std;
main() {
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int digit[100];
    cout<<"Enter " << n <<" numbers ,one per line:"<<endl;
    for(int i=0;i<n;i++){
    cin>>digit[i];
    }
    int largest=digit[0];
    for(int i=0;i<n;i++){
        if(digit[i]>largest){
           largest=digit[i];
        }
    }
    cout<<"Largest number is:" << largest <<endl;
    }
