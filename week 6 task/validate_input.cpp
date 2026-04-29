# include <iostream>
using namespace std;
main() {
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int count=0;
    int arr[100];
    cout<<"Enter " << n << " numbers,one per line:"<<endl;
    for(int i=0;i<n;i++){
        int num;
    cin>>num;
    bool found=false;
    for( int j=0;j<count;j++){
        if( arr[j]==num){
        cout<<"Already entered:" << num <<endl;
        found=true;
        break;
    }
   }
     if(!found){
        arr[count]=num;
        count=count+1;
     }
    }
    cout<<"Unique numbers entered:";
    for(int i=0;i<count;i++){
        cout<< arr[i] << " ";
    }
} 
    



    
