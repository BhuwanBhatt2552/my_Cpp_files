#include<iostream>
using namespace std;

class length
{

    int l;

public:
    void get_data()
    {
        cout<<"Enter length ";
        cin>>l;
    }

    void operator -()
    {
        -l;
    }

    void disp_length()
    {
        cout<<"Length is "<<l<<endl;
    }
};

main()
{
    length obj;
    obj.get_data();
    obj.disp_length();
    -obj;
    obj.disp_length();
}
