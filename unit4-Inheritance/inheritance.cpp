#include<iostream>
using namespace std;

class employee
{

public:
    int e_id;
    char name[10];
    void get_data()
    {

        cout<<"Enter ID :- ";
        cin>>e_id;
        cout<<"Name :- ";
        cin>>name;
    }
};

class salary : public employee
{

public:
    int salry;

    void getdata1()
    {

        cout<<"Salary : ";
        cin>>salry;
    }
};

class address : public salary
{

public:
    char city[20];
    void getdata2()
    {

        cout<<"Address : ";
        cin>>city;
    }

    void getinfo()
    {
        get_data();
        getdata1();
        getdata2();
    }

    void dispall()
    {
        cout<<"\n\n\n";
        cout<<"Employee details\n"<<endl;
        cout<<"ID : "<<e_id<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Salary : "<<salry<<endl;
        cout<<"City : "<<city<<endl;


    }
};

int main()
{
    address ad;
    ad.getinfo();
    ad.dispall();

    return 0;
}
