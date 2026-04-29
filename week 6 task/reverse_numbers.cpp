# include <iostream>
using namespace std;
main() {
    int arr[100];
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
        if(n<=0){
        cout<<"Invalid input.Numbers of elements must be greater than 0"<<endl;
        return 0;
        }
    cout<<"Enter " << n << " numbers, one per line"<<endl;  
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
     cout<<"Numbers in reverse order:";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i] << " ";
    }
}