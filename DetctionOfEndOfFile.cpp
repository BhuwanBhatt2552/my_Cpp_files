#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    int regno;
    string name;

public:
    void getdata()
    {
        cout<<"Enter student registration number : ";
        cin>>regno;
        cout<<"Enter student name : ";
        cin>>name;

    }
    void display()
    {
        cout<<"\nEntered student details are :-"<<endl;
        cout<<"Registration number : "<<regno<<endl;
        cout<<"Student Name : "<<name<<endl;
    }

    void createfile()
    {
        ofstream of("StudentDetails.txt");
        if(!of)
        {
            cout<<"Student file is not created"<<endl;
        }
        else
        {
            cout<<"\nStudent file is Created "<<endl;

            of<<"Registration Number : "<<regno<<endl;
            of<<"Registration Name : "<<name<<endl;
        }
    }

    void check()
    {
        char c;
        ifstream read("StudentDetails.txt");
        while(read.get(c))
            cout<<c;
        if(read.eof())
        {
            cout<<"\nEoF (End Of File) is reached"<<endl;
        }
        else
        {
            cout<<"Error reading"<<endl;
        }
        read.close();
    }

};

int main()
{

    Student st;
    st.getdata();
    st.display();
    st.createfile();
    st.check();
}
