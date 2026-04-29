# include <iostream>
using namespace std;
main() {
    int num1;
    int num2;
    cout<<"Enter the number of elements for the first array(must be 2):";
    cin>>num1;
    int arr_a[100];
    int arr_b[100];
    int results[200];
    cout<<"Enter "<<  num1 << " elements for the first array,one per line:"<<endl;
    for(int i=0;i<num1;i++){
        cin>>arr_a[i];
    }
    cout<<"Enter the number of elements for the second array:";
    cin>>num2;
cout<<"Enter " << num2 << " elements for the second array,one per line:"<<endl;
for(int i=0;i<num2;i++){
    cin>>arr_b[i];
}
int mid=num1/2;
int k=0;
for( int j=0;j<mid;j++){
    results[k++]=arr_a[j];
}
for(int i=0;i<num2;i++){
    results[k++]=arr_b[i];
}
for(int i=mid;i<num1;i++){
    results[k++]=arr_a[i];
}
cout<<"Resulting array:";
for(int i=0;i<k;i++){
    cout<<results[i] << " ";
}
}