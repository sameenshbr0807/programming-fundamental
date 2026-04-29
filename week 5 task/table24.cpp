# include <iostream>
using namespace std;
main() {
    int multiple;
    int table1=24;
    int table2=29;
    int table3=50;
     cout<<"Multiplication table of 24:"<<endl;
    for( int i=1; i<=10; i=i+1)
     {
        multiple=table1*i;
        cout<< table1 <<" X " << i << " = " <<multiple<<endl;
     }
     cout<<"Multiplication table of 29:"<<endl;
     for(int i=1;i<=10;i=i+1){
        multiple=table2*i;
        cout<< table2 <<" X " << i << " = " <<multiple<<endl;
     }
      cout<<"Multiplication table of 50:"<<endl;
     for(int i=1;i<=10;i=i+1){
        multiple=table3*i;
         cout<< table3 <<" X " << i << " = " <<multiple<<endl;
     }
    }
