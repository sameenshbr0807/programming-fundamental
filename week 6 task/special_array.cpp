# include <iostream>
using namespace std;
main() {
    int n;
    int sum=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[100];
    cout<<"Enter " << n << " elements of the array:"<<endl;
    for(int i=0;i<n;i++){
  cin>>arr[i];
  sum=sum+arr[i];
    }
    if(sum%2==0)
    cout<<"The array is special"; 
    else
    cout<<"The array is not special";

}