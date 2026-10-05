#include<iostream>
using namespace std;

class employee
{
public:

    int e_id;
    char name[20];

    void getdata()
    {

        cout<<"Enter employee id : ";
        cin>>e_id;
        cout<<"Enter name : ";
        cin>>name;
    }
};

class salary
{
public:
    int salary;
    void getdata1()
    {
        cout<<"Enter salary : ";
        cin>>salary;
    }
};

class city : public salary , public employee
{

public:
    char address[20];

    void getdata2()
    {
        cout<<"Enter address : ";
        cin>>address;
    }


    void dispall()
    {
        cout<<"\nEmployees details....."<<endl;
        cout<<"\nEmployee ID       : "<<e_id<<endl;
        cout<<"Employee Name     : "<<name<<endl;
        cout<<"Employee Salary    : "<<salary<<endl;
        cout<<"Employee Address : "<<address<<endl;
    }
};

int main()
{
    city obj;
    obj.getdata();
    obj.getdata1();
    obj.getdata2();

    obj.dispall();
}
