#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // Arrays to store patient data(Preloaded with 10 records)
    int patientId[100] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    string patientName[100] = {"Ali", "Ahmad", "Sara", "Ayesha", "Usman", "Zain", "Fatima", "Hassan", "Noor", "Bilal"};
    int patientAge[100] = {20, 21, 22, 23, 26, 29, 28, 30, 31, 25};
    string disease[100] = {"Flu", "Cold", "Fever", "Cough", "Injury", "Allergy", "Asthma", "Infection", "Pain", "Weakness"};
    int roomNumber[100] = {0}; // initially no room assigned
    float bill[100] = {0};     // initially bills are zero
    // Already 10 patients exist
    int totalPatient = 10;
    int userOption;
    // Main program loop
    while (true)
    {
        system("cls"); // Clear screen
        cout << "================================================" << endl;
        cout << "============HOSPITAL MANAGEMENT SYSTEM==========" << endl;
        cout << "================================================" << endl;
        // Displaying the menu
        cout << "1.Admin" << endl;
        cout << "2.Receptionist" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter your choice :";
        cin >> userOption;

        // Admin Menu
        if (userOption == 1)
        {
            int adminOption;
            while (true)
            {
                system("cls");
                cout << "====Welcome to Admin Menu====" << endl;
                cout << "1.View all Patients " << endl;
                cout << "2.Search Patients " << endl;
                cout << "3.Delete Patients" << endl;
                cout << "4.Total Patients" << endl;
                cout << "5.Update Patient" << endl;
                cout << "6.View Room Info " << endl;
                cout << "7.View Billing " << endl;
                cout << "8.View Patients Details " << endl;
                cout << "9.Hospital Status" << endl;
                cout << "10.Logout" << endl;
                cout << "Enter Option :";
                cin >> adminOption;

                // View All Patients
                if (adminOption == 1)
                {
                    system("cls");
                    for (int i = 0; i < totalPatient; i++)
                    {
                        cout << "\nID:" << patientId[i];
                        cout << "\nName:" << patientName[i];
                        cout << "\nAge:" << patientAge[i];
                        cout << endl;
                    }
                    cout << "Press any key to continue...";
                    getch();
                }

                // Search
                else if (adminOption == 2)
                {
                    int id;
                    bool found = false;
                    system("cls");
                    cout << "Enter patient ID :";
                    cin >> id;
                    for (int i = 0; i < totalPatient; i++)
                    {
                        if (patientId[i] == id)
                        {
                            cout << "\nPatient Found!" << endl;
                            cout << "\nID:" << patientId[i];
                            cout << "\nName:" << patientName[i];
                            cout << "\nAge:" << patientAge[i];
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        cout << "\nPatient Not Found!";
                    }
                    cout << endl;
                    cout << "Press any key to continue..";
                    getch();
                }
                // Delete patient
                else if (adminOption == 3)
                {
                    int id;
                    bool found = false;
                    system("cls");
                    cout << "Enter the record of the patient you want to Delete:";
                    cin >> id;
                    for (int i = 0; i < totalPatient; i++)
                    {
                        if (patientId[i] == id)
                        {
                            // Shift remaining records
                            for (int j = i; j < totalPatient - 1; j++)
                            {
                                patientId[j] = patientId[j + 1];
                                patientName[j] = patientName[j + 1];
                                patientAge[j] = patientAge[j + 1];
                                disease[j] = disease[j + 1];
                                roomNumber[j] = roomNumber[j + 1];
                                bill[i] = bill[j + 1];
                            }
                            totalPatient = totalPatient - 1;
                            cout << "\nPatient Deleted!" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (found == false)
                    {
                        cout << "\nPatient not Found!";
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                else if (adminOption == 4)
                {
                    cout << "\nTotal Patients:" << totalPatient;
                    cout << endl;
                    cout << "Press any key to continue...";
                    getch();
                }
                // Update
                else if (adminOption == 5)
                {
                    system("cls");
                    int id;
                    bool found = false;
                    cout << "Enter ID:";
                    cin >> id;
                    for (int i = 0; i < totalPatient; i++)
                    {
                        if (patientId[i] == id)
                        {
                            cout << "Enter Name:";
                            cin >> patientName[i];
                            cout << "Enter Age:";
                            cin >> patientAge[i];
                            cout << "Disease:";
                            cin >> disease[i];
                            cout << "\nUpdated!";
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        cout << "\nNot Found!";
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                // Room Info
                else if (adminOption == 6)
                {
                    for (int i = 0; i < totalPatient; i++)
                    {
                        cout << "\nID:" << patientId[i];
                        cout << "\nRoom:" << roomNumber[i];
                        cout << endl;
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                // Billing View
                else if (adminOption == 7)
                {
                    system("cls");
                    for (int i = 0; i < totalPatient; i++)
                    {
                        cout << "\nID:" << patientId[i];
                        cout << "\nBill:" << bill[i];
                        cout << endl;
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                // Full Details
                else if (adminOption == 8)
                {
                    system("cls");
                    for (int i = 0; i < totalPatient; i++)
                    {
                        cout << "\nID:" << patientId[i];
                        cout << "\nName:" << patientName[i];
                        cout << "\nAge:" << patientAge[i];
                        cout << "\nDisease:" << disease[i];
                        cout << "\nRoom:" << roomNumber[i];
                        cout << "\nBill:" << bill[i];
                        cout << endl;
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                // Status
                else if (adminOption == 9)
                {
                    system("cls");
                    cout << "\nHospital Running Smoothly!" << endl;
                    cout << "Press any key to continue...";
                    getch();
                }
                // Logout
                else if (adminOption == 10)
                {
                    cout << "Logout";
                    break;
                }
                else
                {
                    cout << "Invalid Option!";
                    cout << "Press any key to continue...";
                    getch();
                }
            }
        }
        // Receptionist Menu
        else if (userOption == 2)
        {
            int recOption;
            while (true)
            {
                system("cls"); // Clear screen
                cout << "====Welcome to Receptionist Menu====" << endl;
                cout << "1.Add Patient" << endl;
                cout << "2.View Patients" << endl;
                cout << "3.Search Patient" << endl;
                cout << "4.Update" << endl;
                cout << "5.Room Assign" << endl;
                cout << "6.Billing" << endl;
                cout << "7.Appointment" << endl;
                cout << "8.Emergency" << endl;
                cout << "9.Discharge Patient" << endl;
                cout << "10.Logout" << endl;
                cout << "Enter your choice :";
                cin >> recOption;

                // Add patient
                if (recOption == 1)
                {
                    system("cls");
                    cout << "Enter Patient ID:";
                    cin >> patientId[totalPatient];
                    cout << "Enter Patient Name:";
                    cin >> patientName[totalPatient];
                    cout << "Enter Patient Age:";
                    cin >> patientAge[totalPatient];
                    cout << "Enter Disease:";
                    cin >> disease[totalPatient];
                    totalPatient = totalPatient + 1;
                    cout << "\nPatient Added!";
                    cout << endl;
                    cout << "Press any key to continue...";
                    getch();
                }

                // View Patient
                else if (recOption == 2)
                {
                    system("cls");
                    for (int i = 0; i < totalPatient; i++)
                    {
                        cout << "ID:" << patientId[i] << endl;
                        cout << "Name:" << patientName[i] << endl;
                        cout << "Age:" << patientAge[i] << endl;
                        cout << endl;
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                // Search
                else if (recOption == 3)
                {
                    int id;
                    bool found = false;
                    system("cls");
                    cout << "Enter Patient ID:";
                    cin >> id;
                    for (int i = 0; i < totalPatient; i++)
                    {
                        if (patientId[i] == id)
                        {
                            cout << "\nFound!";
                            cout << "\nId:" << patientId[i];
                            cout << "\nName:" << patientName[i];
                            cout << "\nAge:" << patientAge[i];
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        cout << "\nPatient not Found!";
                    }
                    cout << endl;
                    cout << "Press any key to continue...";
                    getch();
                }
                // Update
                else if (recOption == 4)
                {
                    int id;
                    bool found = false;
                    system("cls");
                    cout << "Enter Id:";
                    cin >> id;
                    for (int i = 0; i < totalPatient; i++)
                    {
                        if (patientId[i] == id)
                        {
                            cout << "Enter New Name:";
                            cin >> patientName[i];
                            cout << "Enter Age:";
                            cin >> patientAge[i];
                            cout << "Disease:";
                            cin >> disease[i];
                            cout << "\nUpdated!";
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        cout << "\nNot Found!";
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                // Room Assign
                else if (recOption == 5)
                {
                    int id;
                    bool found = false;
                    system("cls");
                    cout << "Enter ID:";
                    cin >> id;
                    for (int i = 0; i < totalPatient; i++)
                    {
                        if (patientId[i] == id)
                        {
                            cout << "Room No:";
                            cin >> roomNumber[i];
                            cout << "\nAssigned!" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        cout << "\nNot Found!";
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                // Billing
                else if (recOption == 6)
                {
                    int id;
                    bool found = false;
                    system("cls");
                    cout << "Enter ID:";
                    cin >> id;
                    for (int i = 0; i < totalPatient; i++)
                    {
                        if (patientId[i] == id)
                        {
                            float charges;
                            cout << "Enter Charges:";
                            cin >> charges;
                            bill[i] = bill[i] + charges;
                            cout << "\nTotal Bill:" << bill[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        cout << "\nNot Found!";
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                // Appointment
                else if (recOption == 7)
                {
                    system("cls");
                    cout << "\nAppointment Scheduled" << endl;
                    cout << "Press any key to continue...";
                    getch();
                }
                // Emergency
                else if (recOption == 8)
                {
                    system("cls");
                    cout << "\nEmergency Handled" << endl;
                    cout << "Press any key to continue...";
                    getch();
                }
                // Discharge Patient
                else if (recOption == 9)
                {
                    system("cls");
                    int id;
                    bool found = false;
                    system("cls");
                    cout << "Enter Patient ID to Discharge: ";
                    cin >> id;
                    for (int i = 0; i < totalPatient; i++)
                    {
                        if (patientId[i] == id)
                        {
                            cout << "\nName : " << patientName[i] << endl;
                            cout << "Bill : " << bill[i] << endl;
                            for (int j = i; j < totalPatient - 1; j++)
                            {
                                patientId[j] = patientId[j + 1];
                                patientName[j] = patientName[j + 1];
                                patientAge[j] = patientAge[j + 1];
                                disease[j] = disease[j + 1];
                                roomNumber[j] = roomNumber[j + 1];
                                bill[j] = bill[j + 1];
                            }
                            totalPatient--;
                            cout << "\nPatient Discharged!" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        cout << "\nPatient Not Found!" << endl;
                    }
                    cout << "Press any key to continue...";
                    getch();
                }

                // Logout
                else if (recOption == 10)
                {
                    break;
                }
                else
                {
                    cout << "Invalid Option!" << endl;
                    cout << "Press any key to continue...";
                    getch();
                }
            }
        }
        // Exit
        else if (userOption == 3)
        {
            cout << "Exiting...";
            break;
        }
        else
        {
            cout << "Invalid Option!" << endl;
            cout << "Press any key to continue...";
            getch();
        }
    }
    return 0;
}
