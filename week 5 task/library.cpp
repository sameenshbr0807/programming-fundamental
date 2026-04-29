# include <iostream>
using namespace std;
main() {
    while(true){
        int choice;
        cout<<"----LIBRARY SYSTEM----"<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. View Book"<<endl;
        cout<<"3. Borrow Book"<<endl;
        cout<<"4.Issue Book"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Your Choice(1-5):";
        cin>>choice;
        if(choice==1)
        {
            string book;
            cout<<"Enter Book Name:";
            cin>>book;
            cout<<"You added a book: " << book<<endl;
        }
        else if(choice==2)
        {
        cout<<"You selected:View Book"<<endl;
        }
        else if(choice==3)
        {
            cout<<"You Borrowed a book"<<endl;
        }
        else if(choice==4)
        {
            cout<<"You selected:Issue a book"<<endl;
        }
        else if(choice==5)
        {
            cout<<"Exiting Library system.Goodbye!"<<endl;
            break;
        }
        else{
            cout<<"Invalid choice"<<endl;
            break;
        }

    }
}