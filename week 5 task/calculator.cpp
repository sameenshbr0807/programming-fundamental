# include <iostream>
using namespace std;
main () {
    while(true){
        int choice;
        int n1;
        int n2;
        int sum;
        int subtract;
        int multiply;
        int divide;
        cout<<"----SIMPLE CALCULATOR----"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Clear Screen"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        if( choice==1)
        {
            cout<<"Enter first number:";
            cin>>n1;
            cout<<"Enter second number:";
            cin>>n2;
            sum=n1+n2;
            cout<<"Result: " <<sum<<endl;
        }
        else if(choice==2)
        {
        cout<<"Enter first number:";
        cin>>n1;
        cout<<"Enter second number:";
        cin>>n2;
        subtract=n1-n2;
        cout<<"Result: " << subtract <<endl;
        }
        else if(choice==3)
         {
         cout<<"Enter first number:";
        cin>>n1;
        cout<<"Enter second number:";
        cin>>n2;
        multiply=n1*n2;
        cout<<"Result: " << multiply <<endl;
        }
        else if(choice==4)
         {
          cout<<"Enter first number:";
        cin>>n1;
        cout<<"Enter second number:";
        cin>>n2;
        divide=n1/n2;
        cout<<"Result: " <<divide <<endl;  
        }
        else if (choice==5)
        {
            cout<<"Screen Cleared"<<endl;
            break;
        }
        else if (choice==6)
        {
            cout<<"Exiting Calculator.Goodbye!"<<endl;
            break;
        }
        else 
        {
            cout<<"invalid choice"<<endl;
            break;
        }
    }
}