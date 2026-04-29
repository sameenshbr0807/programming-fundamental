# include <iostream>
using namespace std;
main() {
    string username;
    string password;
    int choice;
    string studentname;
    int studentage;
    string studentcourse;
    for( int i=1;i<=3;i=i+1)
    {
        cout<<"Enter username:";
        cin>>username;
        cout<<"Enter password:";
        cin>>password;
        if( username=="admin" && password=="1234"){
            cout<<"Login successfully" <<endl;
            break;
        }
        else{ 
            cout<<"Wrong login" <<endl;
        }
        if( i == 3 && !( username== "admin" && password== "1234"))
       { 
        cout<<"Too many attempts.Program ends"<<endl;
       }
    }
    for( int i=1;i<=5;i=i+1)
    {
        cout<<"----UNIVERSITY MANAGEMENT SYSTEM----"<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. View Student"<<endl;
        cout<<"3. Add Course"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Choice:";
        cin>>choice;
        if( choice==1)
        { 
            cout<<"Enter student name:";
            cin>>studentname;
            cout<<"Enter student age:";
            cin>>studentage;
            cout<<"Student added successfully"<<endl;
        }
        else if(choice==2)
        {
        if( studentname!="")
        {
            cout<<"Student Name: " <<studentname<<endl;
            cout<<"Student Age: " <<studentage<<endl;
        }
        else 
        {
            cout<<"No student record found" <<endl;
        }
        }
        else if(choice==3)
        {
            cout<<"Enter course name:";
            cin>>studentcourse;
            cout<<"Course Added Successfully " <<studentcourse<<endl;
        }
        else if (choice==4)
        {
            cout<<"Program Exit"<<endl;
            break;
        }
        else{
            cout<<"Invalid Choice"<<endl;
        }
    }

}