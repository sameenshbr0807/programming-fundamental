#include <iostream>
#include <conio.h>
using namespace std;
 //GLOBAL DATA
 int patientId[100]={101,102,103,104,105,106,107,108,109,110};
 string patientName[100]={"Ali","Ahmad","Sara","Ayesha","Usman","Zain","Fatima","Hassan","Noor","Bilal"};
 int patientAge[100]={20,21,22,23,26,29,28,30,31,25};
 string disease[100]={"Flu","Cold","Fever","Cough","Injury","Allgery","Asthma","Infection","Pain","Weakness"};
 int roomNumber[100]={0};
 float bill[100]={0};
 int totalPatient=10;
 //===============ADMIN FUNCTIONS================
 void adminView(){
    system("cls");
    for(int i=0;i<totalPatient;i++){
        cout<<"ID :"<<patientId[i]<<endl;
        cout<<"Name :"<<patientName[i]<<endl;
        cout<<"Age :"<<patientAge[i]<<endl;
        cout<<"Disease :"<<disease[i]<<endl;
        cout<<endl;
    }
    cout<<"Press any key to continue...";
    getch();
 }
 void adminSearch(){
    system("cls");
    int id;
    bool found=false;
    cout<<"Enter ID :";
    cin>>id;
    for(int i=0;i<totalPatient;i++){
        if(patientId[i]==id){
            cout<<"\nPatient Found!"<<endl;
            cout<<"ID :"<<patientId[i]<<endl;
            cout<<"Name :"<<patientName[i]<<endl;
            cout<<"Age :"<<patientAge[i]<<endl;
            cout<<"Disease :"<<disease[i]<<endl;
            found=true;
            break;
        }
    }
    if(!found){
    cout<<"Not Found!"<<endl;
    }
    cout<<"Press any key to continue...";
    getch();
 }
 void adminDelete(){
    system("cls");
    int id;
    bool found=false;
    cout<<"Enter ID :";
    cin>>id;
    for(int i=0;i<totalPatient;i++){
        if(patientId[i]==id){
            for(int j=i;j<totalPatient-1;j++){
                patientId[j]=patientId[j+1];
                patientName[j]=patientName[j+1];
                patientAge[j]=patientAge[j+1];
                disease[j]=disease[j+1];
                roomNumber[j]=roomNumber[j+1];
                bill[j]=bill[j+1];
            }
            totalPatient=totalPatient-1;
            cout<<"Deleted!"<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    cout<<"Not Found!"<<endl;
    cout<<"Press any key to continue...";
    getch();
 }
 void adminTotal(){
    system("cls");
    cout<<"Total Patients :"<<totalPatient<<endl;
    cout<<"Press any key to continue...";
    getch();
 }
 void adminUpdate(){
    system("cls");
    int id;
    bool found=false;
    cout<<"Enter ID :";
    cin>>id;
    for(int i=0;i<totalPatient;i++){
        if(patientId[i]==id){
            cout<<"Name :";
            cin>>patientName[i];
            cout<<"Age :";
            cin>>patientAge[i];
            cout<<"Disease :";
            cin>>disease[i];
            cout<<"Updated!"<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    cout<<"Not Found!"<<endl;
    cout<<"Press any key to continue... ";
    getch();
 }
 void adminRoom(){
    system("cls");
    for(int i=0;i<totalPatient;i++){
        cout<<"ID :"<<patientId[i]<<endl;
        cout<<"Room :"<<roomNumber[i];
        cout<<endl;
    }
    cout<<"Press any key to continue...";
    getch();
 }
 void adminBilling(){
    system("cls");
    for(int i=0;i<totalPatient;i++){
        cout<<"ID :"<<patientId[i]<<endl;
        cout<<"Bill :"<<bill[i];
        cout<<endl;
    }
    cout<<"Press any key to continue...";
    getch();
 }
 void adminDetails(){
    system("cls");
    for(int i=0;i<totalPatient;i++){
        cout<<"ID :"<<patientId[i]<<endl;
        cout<<"Name :"<<patientName[i]<<endl;
        cout<<"Age :"<<patientAge[i]<<endl;
        cout<<"Disease :"<<disease[i]<<endl;
        cout<<"Room Number :"<<roomNumber[i]<<endl;
        cout<<"Bill :"<<bill[i]<<endl;
        cout<<endl;
    }
    cout<<"Press any key to continue...";
    getch();
 }
 void adminStatus(){
    system("cls");
    cout<<"Hospital Running Smoothly!"<<endl;
    cout<<"Press any key to continue...";
    getch();
 }
 //================ADMIN MENU================
 void adminMenu(){
    int op;
    while(true){
        system("cls");
        cout<<"==========ADMIN MENU=========="<<endl;
        cout<<"1.View"<<endl;
        cout<<"2.Search"<<endl;
        cout<<"3.Delete"<<endl;
        cout<<"4.Total"<<endl;
        cout<<"5.Update"<<endl;
        cout<<"6.Room"<<endl;
        cout<<"7.Bill"<<endl;
        cout<<"8.Details"<<endl;
        cout<<"9.Status"<<endl;
        cout<<"10.Logout"<<endl;
        cout<<"Enter Option:";
        cin>>op;
        if(op==1)
        adminView();
        else if(op==2)
        adminSearch();
        else if(op==3)
        adminDelete();
        else if(op==4)
        adminTotal();
        else if(op==5)
        adminUpdate();
        else if(op==6)
        adminRoom();
        else if(op==7)
        adminBilling();
        else if(op==8)
        adminDetails();
        else if(op==9)
        adminStatus();
        else if(op==10){
        cout<<"Logout..."<<endl;
        break;
        }
    }
}
 //Receptionist functions
 void recAdd(){
    system("cls");
    cout<<"Enter ID :";
    cin>>patientId[totalPatient];
    cout<<"Enter Name :";
    cin>>patientName[totalPatient];
    cout<<"Enter Age :";
    cin>>patientAge[totalPatient];
    cout<<"Enter Disease :";
    cin>>disease[totalPatient];
    totalPatient++;
    cout<<"Patient Added!"<<endl;
    cout<<"Press any key to continue...";
    getch();
 }
 void recView(){
    system("cls");
    for(int i=0;i<totalPatient;i++){
        cout<<"ID :"<<patientId[i]<<endl;
        cout<<"Name :"<<patientName[i]<<endl;
        cout<<"Age :"<<patientAge[i]<<endl;
        cout<<"Disease :"<<disease[i]<<endl;
        cout<<endl;
    }
    cout<<"Press any key to continue...";
    getch();
 }
 void recSearch(){
    system("cls");
    int id;
    bool found=false;
    cout<<"Enetr ID :";
    cin>>id;
    for(int i=0;i<totalPatient;i++){
        if(patientId[i]==id){
            cout<<"Found!"<<endl; 
            cout<<"Name :"<<patientName[i]<<endl;
            cout<<"Age :"<<patientAge[i]<<endl;
            cout<<"Disease :"<<disease[i]<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    cout<<"NotFound!"<<endl;
    cout<<"Press any key to continue...";
    getch();
 }
 void recUpdate(){
    system("cls");
    int id;
    bool found=false;
    cout<<"Enter ID :";
    cin>>id;
    for(int i=0;i<totalPatient;i++){
        if(patientId[i]==id){
            cout<<"Name :";
            cin>>patientName[i];
            cout<<"Age :";
            cin>>patientAge[i];
            cout<<"Disease :";
            cin>>disease[i];
            cout<<"Updated!"<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    cout<<"Not Found!"<<endl;
    cout<<"Press any key to continue...";
    getch();
 }
 void recRoomAssign(){
    system("cls");
    int id;
    cout<<"Enter ID :";
    cin>>id;
    for(int i=0;i<totalPatient;i++){
        if(patientId[i]==id){
            cout<<"Room Number:";
            cin>>roomNumber[i];
            cout<<"Assigned!"<<endl;
        }
    }
    cout<<"Press any key to continue...";
    getch();
 }
 void recBilling(){
    system("cls");
    int id;
    cout<<"Enter ID :";
    cin>>id;
    for(int i=0;i<totalPatient;i++){
        if(patientId[i]==id){
            float charges;
            cout<<"Bill:";
            cin>>charges;
            bill[i]=bill[i]+charges;
            cout<<"Total:"<<bill[i]<<endl;
        }
    }
    cout<<"Press any key to continue...";
    getch();
 }
 void recAppointment(){
    system("cls");
    cout<<"Enter ID :";
    cin>>patientId[totalPatient];
    cout<<"Enter Name :";
    cin>>patientName[totalPatient];
    cout<<"Age :";
    cin>>patientAge[totalPatient];
    cout<<"Enter Disease :";
    cin>>disease[totalPatient];
    totalPatient++;
    cout<<"Appointment Scheduled!"<<endl;
    cout<<"Press any to continue...";
    getch();
 }
 void recEmergency(){
    system("cls");
    cout<<"Enter ID :";
    cin>>patientId[totalPatient];
    cout<<"Enter Name:";
    cin>>patientName[totalPatient];
    cout<<"Enter Age:";
    cin>>patientAge[totalPatient];
    cout<<"Enter Disease:";
    cin>>disease[totalPatient];
    totalPatient++;
    cout<<"Emergency Handled"<<endl;
    cout<<"Press any key to continue...";
    getch();
 }
 void recDischarge(){
    system("cls");
    int id;
    cout<<"Enter ID :";
    cin>>id;
    for(int i=0;i<totalPatient;i++){
        if(patientId[i]==id){
            for(int j=i;j<totalPatient-1;j++){
                patientId[j]=patientId[j+1];
                patientName[j]=patientName[j+1];
                patientAge[j]=patientAge[j+1];
                disease[j]=disease[j+1];
                roomNumber[j]=roomNumber[j+1];
                bill[j]=bill[j+1];
            }
            totalPatient--;
            cout<<"Discharged!"<<endl;
            break;
        }
    }
    cout<<"Press any key to continue...";
    getch();
 }
 //==========RECEPTIONIST MENU==========
 void receptionistMenu(){
    int recOp;
    while(true){
        system("cls");
        cout<<"==========RECEPTIONIST MENU=========="<<endl;
        cout<<"1.Add"<<endl;
        cout<<"2.View"<<endl;
        cout<<"3.Search"<<endl;
        cout<<"4.Update"<<endl;
        cout<<"5.Room"<<endl;
        cout<<"6.Billing"<<endl;
        cout<<"7.Appointment"<<endl;
        cout<<"8.Emergency"<<endl;
        cout<<"9.Discharge"<<endl;
        cout<<"10.Logout"<<endl;
        cout<<"Enter Option:";
        cin>>recOp;
        if(recOp==1)
        recAdd();
        else if(recOp==2)
        recView();
        else if(recOp==3)
        recSearch();
        else if(recOp==4)
        recUpdate();
        else if(recOp==5)
        recRoomAssign();
        else if(recOp==6)
        recBilling();
        else if(recOp==7)
        recAppointment();
        else if(recOp==8)
        recEmergency();
        else if(recOp==9)
        recDischarge();
        else if(recOp==10){
        cout<<"Logout..."<<endl;
        break;
        }
    }
}
   //Admin Login Functions
   bool adminLogin(){
    string username;
    string password;
    for(int i=0;i<3;i++){
        system("cls");
        cout<<"Admin Login Attempt "<< i+1<<endl;
        cout<<"Username:";
        cin>>username;
        cout<<"Password:";
        cin>>password;
        if(username=="admin" && password=="123" ){
            cout<<"Login Successfully!"<<endl;
            cout<<"Press any key to continue...";
            getch();
            return true;
        }
        else{
            cout<<"Wrong Username or Password!\n";
            cout<<"Press any key to continue...";
            getch();
        }
    }
    cout<<"Too many failed attempts!\n";
    cout<<"Press any key to continue...";
    getch();
    return false;
}
bool receptionistLogin(){
    string username;
    string password;
    for(int i=0;i<3;i++){
        system("cls");
        cout<<"Receptionist Login Attempt "<< i+1<<endl;
        cout<<"Username:";
        cin>>username;
        cout<<"Password:";
        cin>>password;
        if(username=="rec" && password=="123"){
            cout<<"Login Successful!"<<endl;
            cout<<"Press any key to continue...";
            getch();
            return true;
        }
    }
    cout<<"Too many attempts!";
    cout<<"Press any key to continue...";
    getch();
    return false;
}
    //==========Main Menu==========
    int main(){
        int choice;
        while(true){
            system("cls");
            cout<<"========================================"<<endl;
            cout<<"       HOSPITAL MANAGEMENT SYSTEM       "<<endl;
            cout<<"========================================"<<endl;
            cout<<"1.Admin"<<endl;
            cout<<"2.Receptionist"<<endl;
            cout<<"3.Exit"<<endl;
            cout<<"Enter Choice:";
            cin>>choice;
            if(choice==1){
                if(adminLogin()){
                    adminMenu();
                }
            }
            else if(choice==2){
                if(receptionistLogin()){
                receptionistMenu();
                }
            }
            else if(choice==3){
                cout<<"Exiting the Hospital Management System!"<<endl;
                break;
            }
            cout<<"Press any key to continue...";
            getch();
        }
    }
 
