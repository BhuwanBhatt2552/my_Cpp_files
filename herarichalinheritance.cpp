#include<iostream>
using namespace std;

class inputdata
{
public:
    int x , y;

    void getdata()
    {
        cout<<"Enter x ";
        cin>>x;
        cout<<"Enter y ";
        cin>>y;
    }
};

class sum : public inputdata
{

public:
    void addition()
    {
        int sum;
        sum = x + y ;

        cout<<"\nSum of x and y is : "<<sum<<endl;
    }
};

class product : public inputdata
{

public:

    void multiply()
    {
        int prd;
        prd = x * y ;
        cout<<"\nProduct of x and y is : "<<prd<<endl;
    }
};

class division : public inputdata
{
public:
    void div()
    {
        int div;
        div = x/y ;
        cout<<"\nDivision of x and y is (x/y) : "<<div<<endl;
    }
};


main()
{
    inputdata in;
    in.getdata();
    
    sum s;
    s.x = in.x;
    s.y = in.y;
    //s.getdata();
    s.addition();
    
    
    product p;
    //p.getdata();
    p.x = in.x;
    p.y = in.y;
    p.multiply();
    
    
    division dj;
    dj.x = in.x;
    dj.y = in.y;
    //dj.getdata();
    dj.div();


    return 0;
}
