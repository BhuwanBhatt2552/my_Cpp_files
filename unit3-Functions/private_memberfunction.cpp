#include<iostream>
using namespace std;

class constructor
{
    public :
       int p , q;
    public:
       constructor(int x, int y)
       {
        p = x;
        q = y;
        cout<<"sum of p and q iis : %d"<<p+q<<endl;
        cout<<"substraction of p and q is : "<<p-q<<endl;
        cout<<"product of p and q is : "<<p*q<<endl;
        cout<<"division of p and q is : "<<p/q<<endl;
       }   
};

main()
{
    constructor a();
    cout<<"enter 1st number : ";
    cin>>a.p;
    cout<<"Enter 2nd number : ";
    cin>>a.q;
    constructor a(a.p,a.q);


}