# include <iostream>
using namespace std;
main() {
    int sum=0;
    int average=0;
    int numbers[5]={1,2,3,4,5};
    for(int index=0; index<5;index++)
    {
        sum=sum+numbers[index];
    }
    average=sum/5;
    cout<<"Sum:" << sum<<endl;
    cout<<"Average:" << average<<endl;

}