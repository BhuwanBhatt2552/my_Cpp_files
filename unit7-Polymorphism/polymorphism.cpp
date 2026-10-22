#include<iostream>
using namespace std;
class sample
{
public:
    int checknum()
    {
        int a = 100;
        cout<<"value of a is : "<<a<<endl;

    }

    int checknum(int a )
{
    if (a%2 == 0)
        cout<<"entered number is even."<<endl;
    else
       cout<<"entered number is odd."<<endl;
}

float checknum(float x, float y)
{

    cout<<"sum of floating point number is : "<<x+y<<endl;
}

double checknum(double a , double b, double c)
{
    if(a > b && a>c)
    cout<<"a is larger"<<endl;
    else
        if(b>a && b>c)
        cout<<"b is larger"<<endl;
    else
        if(c>a && c>b)
        cout<<"c is larger"<<endl;
}
};
main()
{

    int num;
    cout<<"Enter any number to check whether odd or even";
    cin>>num;
    cout<<"\n";
    
    sample s;
    s.checknum();
    s.checknum(num);
    s.checknum(15.51,951.4);
    s.checknum(461984,8465416,4844156);
}
