/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string content;
    ifstream ifs("Studentfile.txt");
    while(getline(ifs, content))
    {
        cout<<content<<endl;
    }
    ifs.close();
}
*/

#include<iostream>
#include<fstream>
using namespace std;

class employee
{
    int eid;
    string ename;
    float esalary;

public:
    void input()
    {
        cout<<"Enter employee ID :" ;
        cin>>eid;
        cout<<"Enter employee name: ";
        cin>>ename;
        cout<<"Enter employee Salary :";
        cin>>esalary;
    }

    void display()
    {
        cout<<eid<<endl;
        cout<<ename<<endl;
        cout<<esalary<<endl;
    }

    void createfile()
    {
        cout<<"Data written in file";
        ofstream of("employee.txt");
        if(!of)
        {
            cout<<"file is not created";
        }
        else
        {
            of<<eid<<endl;
            of<<ename<<endl;
            of<<esalary<<endl;
        }
        of.close();
    }
};

int main()
{
    employee emp;
    emp.input();
    emp.display();
    emp.createfile();
}
