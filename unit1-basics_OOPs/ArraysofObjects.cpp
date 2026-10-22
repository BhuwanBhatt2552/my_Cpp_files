// Arrays of Objects ( Student Management)

#include<iostream>
#include<string>
#include<iomanip>   // For tabular fromatting of data 
using namespace std;

// Student class that contain 1.Roll no., 2.Name, 3.Marks(3 subjects)

class Student
{
    private:
      int rollno;
      string Name;
      float marks[3], totalmarks, percentage;
    
    public:

    void getdata()                        //take student data
    {
        cout<<"Enter student details:"<<endl;
        cout<<"Enter student name: ";
        getline(cin >> ws, Name);        // Reads full name with spaces
        cout<<"Enter student rollno: ";
        cin>>rollno;
        for(int i = 0; i<3; i++)
        {
            cout<<"Enter marks of "<<(i + 1)<<" subject";
            cin>>marks[i];
        }
        totalmarks = marks[0] + marks[1] + marks[2];
        
        percentage = totalmarks/3;

    }

    void showdata()    // left & setw() data ko table format me align karte hain
    {
        //Data Display Phase (Tabular Format)

        cout << "\n=================================================" << endl;
        cout << left << setw(15) << Name 
                 << setw(10) << rollno 
                 << setw(10) << totalmarks 
                 << setw(15) << percentage << endl;
        cout << "=================================================" << endl;         
    }

};

int main() {
    Student s[5];      // Array of 5 student objects
    
    // 1. Data Input Phase
    cout << "--- Enter details for 5 students ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << (i + 1) << ":" << endl;
        s[i].getdata(); // Correct syntax to access array objects
    }
    
    // 2. Data output in tabular form
    for (int i = 0; i < 5; i++) {
        s[i].showdata();
    }
    cout << "=================================================" << endl;
    cout<<"\nThank you for using Student management System"<<endl;
    
    return 0;
}