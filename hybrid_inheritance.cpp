#include<iostream>
using namespace std;

class student
{
    public:
    int roll;
    char name[20];

    void getdata()
    {
        cout<<"Enter roll number";
        cin>>roll;
        cout<<"Enter name ";
        cin>>name;
    }
};

class age : public student
{
    public:
    int age;

    void getage()
    {
        cout<<"Enter  age ";
        cin>>age;
    }
};

class course 
{
    public:

    char subject[50];
    void getsubject()
    {
        cout<<"Enter subject ";
        cin>>subject;
    }
};

class details : public age, public course
{
    public:

    void show_all()
    {
        cout<<"Student details are...."<<endl;
        cout<<"Roll number "<<roll<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Subject "<<subject<<endl;

    }

};

main()
{
    details obj;
    obj.getdata();
    obj.getage();
    obj.getsubject();
    obj.show_all();

    return 0;
}