//Program to demonstrate the working of virtual base class in C++
/*#include<iostream>
using namespace std;
class A
{
public:
    int x;
};

class B: virtual public A
{

public:
    int y;
};

class C: virtual public A
{
public:
    int z;
};

class D : public B, public C
{
public:
    int x1;
};

int main()
{
    D obj;
    cout<<"\nEnter four numbers x, y, z and x1 respectively: ";
    cin>>obj.x>>obj.y>>obj.z>>obj.x1;
    cout<<"\n\n\t-----OUTPUT-----"<<endl;
    cout<<"\tx  is - "<<obj.x<<endl;
    cout<<"\ty  is - "<<obj.y<<endl;
    cout<<"\tz  is - "<<obj.z<<endl;
    cout<<"\tx1 is - "<<obj.x1<<endl;
}
*/


// Program to demonstrate the working of Abstract Class
/*#include<iostream>
using namespace std;

class A
{
public:
    virtual void test() = 0;

};

class B : public A
{
public:
    void test()
    {
        cout<<"  Hello, Class B"<<endl;
    }
};

class C : public A
{
public:
    void test()
    {
        cout<<"  Hello, Class C"<<endl;
    }
};

int main()
{
    B obj1;
    C obj2;
    //A ob;             Cannot declare object to the class of abstract type 'A'
    //ob.test();        This generate error: because the following virtual function is pure within 'A'

    obj1.test();
    obj2.test();
}
*/

// ABSTRACT CLASS AREA
/*    #include<iostream>
    using namespace std;

    class Area
    {
    protected:
        int l, w, r;
    public:
        virtual float calculate_area() = 0;

        void get_length_width()
        {
            cout<<"\tEnter length of rectangle : ";
            cin>>l;
            cout<<"\tEnter width of rectangle : ";
            cin>>w;
        }

        void get_rad()
        {
            cout<<"\n\tEnter radius of circle : ";
            cin>>r;
        }
    };

    class Circle : virtual public Area
    {

    public:

        float calculate_area()
        {
            return 3.14*r*r;
        }
    };

    class Rectangle : virtual public Area
    {

    public:
        float calculate_area()
        {
            return l*w;
        }
    };

    int main()
    {

        Circle obj1;
        Rectangle obj2;

        obj1.get_rad();
        cout<<"\tArea of circle is - "<<obj1.calculate_area()<<endl;
        cout<<"\n\n";

        obj2.get_length_width();
        cout<<"\tArea of rectangle is - "<<obj2.calculate_area()<<endl;
    }
*/

//        POINTER AND THIS POINTER

/*• Write a program to demonstrate working of pointer to object in C++.
#include<iostream>
using namespace std;
class sum
{
    int a, b;
public:
    void getdata(int x, int y)
    {
        a= x;
        b = y;

    }

    int display()
    {
        return a + b;
    }
};

int main()
{
    sum obj;
    sum *p;
    p = &obj;
    p->getdata(14,22);
    cout<<"sum :- "<<p->display()<<endl;
}
*/


/*• Write a program to demonstrate working of ‘this’ pointer in C++.
#include<iostream>
using namespace std;
class Employee
{
    int id, salary;
    string name;

public:
    Employee(int eid, string ename, int esalary)
    {
        this->id = eid;
        this->name= ename;
        this->salary = esalary;
    }

    void disp()
    {
        cout<<"ID-"<<id<<endl<<"Name- "<<name<<endl<<"salary-"<<salary<<endl;
    }
};

int main()
{
    Employee ee(252541,"Bhuwan", 50000);
    ee.disp();
}
*/

/* Program to demonstrate the working of POINTER TO THE DERIVED CLASS in c++
#include<iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout<<"BASE class"<<endl;
    }
};

class derived:public Base
{

public:
    void display()
    {
        cout<<"DERIVED class"<<endl;
    }
};

int main()
{
    Base *bptr;
    Base b;
    derived d;
    bptr = &b;
    bptr ->show();
    bptr = &d;
    ((derived*)bptr) ->display();

}
*/


//  POINTER TO DERIVED CLASS VALUE

#include<iostream>
using namespace std;
class base
{
public:
    int num1;
    void show()
    {
        cout<<"Number 1 is "<<num1<<endl;
    }
};

class derived : public base
{
public:
    int num2;
    void disp()
    {
        cout<<"Number 2 is "<<num2<<endl;
    }
};

int main()
{
    base *bptr;
    base b;
    bptr = &b;
    bptr ->num1 = 10;
    bptr->show();

    derived d;
    bptr = &d;
    ((derived*)bptr)->num2=90;
    ((derived*)bptr)->disp();
}
