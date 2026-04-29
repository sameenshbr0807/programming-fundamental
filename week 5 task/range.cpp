# include <iostream>
# include <iomanip>
using namespace std;
main() {
    int n=0;
    cout<<"Enter number count:";
    cin>>n;
    int p1count=0,p2count=0,p3count=0,p4count=0,p5count=0;
    int num=0;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter a number:";
        cin>> num;
        if(num>=1 && num<200)
        {
            p1count=p1count+1;
        }
        
        else if(num>=200 && num<=399)
        {
            p2count=p2count+1;
        }
        else if(num>=400 && num<=599)
        {
            p3count=p3count+1;
        }
        else if(num>=600 && num<=799)
        {
            p4count=p4count+1;
        }
        else if(num>=800 && num<=1000)
        {
            p5count=p5count+1;
        }
        else{
            cout<<"invalid"<<endl;
            break;
        }
    }
    float p1,p2,p3,p4,p5;
    p1=(p1count*100.0)/n;
     p2=(p2count*100.0)/n;
    p3=(p3count*100.0)/n;
    p4=(p4count*100.0)/n;
     p5=(p5count*100.0)/n;
     cout<< fixed <<setprecision(2);
     cout<<p1<< "%" <<endl;
    cout<<p2 <<"%" <<endl;
    cout<< p3 <<"%" <<endl;
    cout<<p4 <<"%" <<endl;
     cout<<p5 <<"%" <<endl;
    
    

}