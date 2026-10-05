#include<iostream>
using namespace std;
class Time
{
    int h, m;

public:
    Time(int a, int b)
    {

        h =a;
        m = b;
    }

    operator int()
    {
        cout<<"\nCLass type to basic type conversion";
        return(h*60+m);
    }
};

int main()
{

    int h, m, duration;
    cout<<"\nEnter hours : ";
    cin>>h;
    cout<<"\nEnter minutes : ";
    cin>>m;

    Time t(h,m);
    duration =  t;
    cout<<"\nTotal minutes : "<<duration<<endl;
    cout<<"\nSecond Method OPERATOR OVERLOADING"<<endl;
    duration = t.operator int();

    cout<<"\nTotal minutes :"<<duration<<endl;
}
