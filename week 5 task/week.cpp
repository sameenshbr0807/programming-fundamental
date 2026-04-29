# include <iostream>
using namespace std;
main() {
    for( int week=1; week<=3; week=week+1)
    {
        for( int days=1; days<=7; days=days+1)
        {
            cout<< "week " <<week << " Days : " <<days<<endl;
        }
        cout<<endl;
    }
}