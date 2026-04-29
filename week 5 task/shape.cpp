# include<iostream>
using namespace std;
main() {
    for( int rows=1; rows<=10; rows=rows+1)
    {
        for( int columns=1; columns<=rows; columns++)
        {
            cout<<"*";
        }
        cout <<endl;
    }
}