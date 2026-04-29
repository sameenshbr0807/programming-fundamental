# include <iostream>
using namespace std;
main() {
    while(true){
        int option;
        cout<<"----MENU----"<<endl;
        cout<<"1. Say Hello"<<endl;
        cout<<"2. Say Goodbye"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter Your Choice:";
        cin>>option;
        if(option==1)
        {
            cout<<"Hello!Welcome to the Program."<<endl;
        }
        else if(option==2){
            cout<<"Goodbye!Have a Nice Day!"<<endl;
        }
        else if(option==3){
            cout<<"Exit"<<endl;
        }
        else{
            cout<<"Invalid option"<<endl;
        }
    }
}