#include<iostream>
using namespace std;
class Complex
{
    int a , b ;
public:
    void getdata()
    {
        cout<<"Enter the value of complex numbers  a and b ";
        cin>>a>>b;
    }

    Complex operator +(Complex ob)
    {

        Complex c;
        c.a = a + ob.a;
        c.b = b + ob.b;
        return (c);
    }

    void display()
    {

        cout<<"\t"<<a<<"+"<<b<<"i "<<"\n";
    }
};



int main()
{
    Complex obj1, obj2, result;
    obj1.getdata();
    obj2.getdata();
    cout<<"Entered numbers are : "<<endl;
    obj1.display();
    obj2.display();
    result = obj1 + obj2 ;
    cout<<"__________________"<<endl;
    result.display();
}

