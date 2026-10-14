#include <iostream>
#include <fstream>
#include <cstring> // For strcmp
#include <cstdio>  // For remove() and rename()
#include <iomanip> // Required for setw() and left alignment

using namespace std;

// Function to display table header for neat formatting
void print_header()
{
    cout << "\n" << string(65, '=') << endl;
    cout << left << setw(25) << "Name" << setw(20) << "Phone" << setw(10) << "Age" << endl;
    cout << string(65, '=') << endl;
}

void delete_student()
{
    fstream stud;
    fstream temp;

    stud.open("Student.txt", ios::in);
    temp.open("temp.txt", ios::out);

    char name[35];
    char age[25];
    char phone[25];
    char a[25];

    cin.ignore();
    cout << "\n\tEnter phone number to delete record: ";
    cin.getline(a, 25);

    while (stud.getline(name, 35, '|'))
    {
        stud.getline(phone, 25, '|');
        stud.getline(age, 25);

        if (strcmp(phone, a) == 0)
        {
            continue; // Skip writing this record to delete it
        }
        else
        {
            temp << name << '|' << phone << '|' << age << endl;
        }
    }

    temp.close();
    stud.close();

    remove("Student.txt");
    rename("temp.txt", "Student.txt");
    
    cout << "\nRecord Deleted Successfully!\n";
}

void update_student()
{
    fstream stud;
    fstream temp;

    stud.open("Student.txt", ios::in);
    temp.open("temp.txt", ios::out);

    char name[35];
    char age[25];
    char phone[25];
    char a[25];

    cin.ignore();
    cout << "\n\tEnter phone number to update record: ";
    cin.getline(a, 25);

    while (stud.getline(name, 35, '|'))
    {
        stud.getline(phone, 25, '|');
        stud.getline(age, 25);

        if (strcmp(phone, a) == 0)
        {
            cout << "\nEnter new values for the record:\n";
            cout << "Name- ";
            cin.getline(name, 35);
            cout << "Phone- ";
            cin.getline(phone, 25);
            cout << "Age- ";
            cin.getline(age, 25);
            
            temp << name << '|' << phone << '|' << age << endl;
        }
        else
        {
            temp << name << '|' << phone << '|' << age << endl;
        }
    }

    temp.close();
    stud.close();

    remove("Student.txt");
    rename("temp.txt", "Student.txt");
    
    cout << "\nRecord Updated Successfully!\n";
}

void display_all()
{
    char name[35];
    char phone[25];
    char age[25];
    fstream stud;

    stud.open("Student.txt", ios::in);

    if (!stud)
    {
        cout << "\nNo records found!\n";
        return;
    }

    print_header(); // Print clean table header

    while (stud.getline(name, 35, '|') && stud.getline(phone, 25, '|') && stud.getline(age, 25))
    {
        // Print each record neatly aligned using setw
        cout << left << setw(25) << name << setw(20) << phone << setw(10) << age << endl;
    }

    cout << string(65, '-') << endl;
    stud.close();
}

void search_student()
{
    fstream stud;
    stud.open("Student.txt", ios::in);

    if (!stud)
    {
        cout << "\nNo records found!\n";
        return;
    }

    char name[35];
    char age[25];
    char phone[25];
    char a[25];

    cout << "\nEnter phone number to search record: ";
    cin.ignore();
    cin.getline(a, 25);

    int x = 0;

    while (stud.getline(name, 35, '|') && stud.getline(phone, 25, '|') && stud.getline(age, 25))
    {
        if (strcmp(phone, a) == 0)
        {
            print_header(); // Print table header before showing the searched result
            cout << left << setw(25) << name << setw(20) << phone << setw(10) << age << endl;
            cout << string(65, '-') << endl;
            x = 1;
            break;
        }
    }

    if (x == 0)
    {
        cout << "\nRecord Not Found !!!\n";
    }
    
    stud.close();
}

void insert_student()
{
    char name[35];
    char phone[25];
    char age[25];
    fstream stud;
    
    stud.open("Student.txt", ios::app); 
    
    cin.ignore();
    cout << "Name- ";
    cin.getline(name, 35);
    cout << "Phone- ";
    cin.getline(phone, 25);
    cout << "Age- ";
    cin.getline(age, 25);
    
    stud << name << '|' << phone << '|' << age << endl;
    
    cout << "\nRecord Inserted Successfully!\n";
    stud.close();
}

int main()
{
    bool flag = true;

    while (flag)
    {
        cout << "\n=============================================\n";
        cout << "           STUDENT MANAGEMENT SYSTEM         \n";
        cout << "===============================================\n";
        cout << "1. Insert Student\n2. Search Student\n3. Display All Students\n4. Update Student\n5. Delete Student\n\nEnter your choice: ";
        int c;
        cin >> c;

        switch (c)
        {
            case 1: insert_student(); break;
            case 2: search_student(); break;
            case 3: display_all(); break;
            case 4: update_student(); break;
            case 5: delete_student(); break;
            default: cout << "\nInvalid Choice! Please try again.\n";
        }

        cout << "\nDo you want to continue? Press 'Y' (or any other key to exit): ";
        char f;
        cin >> f;
        
        if (f != 'y' && f != 'Y') 
        {
            flag = false;
        }
    }
    
    cout << "\nThank you for using the program!\n";
    return 0;
}