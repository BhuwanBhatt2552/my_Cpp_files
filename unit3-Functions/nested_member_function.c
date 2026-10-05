#include<iostream>
using namespace std;

class nested_member
{
public:
    int l , w;
    void get_data();
    void display();
};

void nested_member :: get_data()
{

    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter width : ";
    cin>>w;
}

void nested_member :: display()
{
    get_data();
    cout<<"area is : "<<l*w;
}

main()
{
    nested_member obj1;
    obj1.display();

}
