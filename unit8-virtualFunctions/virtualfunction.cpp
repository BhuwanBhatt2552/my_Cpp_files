/*#include<iostream>
using namespace std;

class base
{
    virtual void test() = 0;

};


class derived : public base
{
public:
    void test()
    {
        cout<<"Hello! Pure virtual function"<<endl;

    }
};

int main()
{
    derived obj;
    obj.test();
}
*/

/*#include<iostream>
using namespace std;
int display_value(int x)
{
    cout<<"The number is "<<x<<endl;

}

int main()
{
    display_value(2591);
    return 0;
}
*/


// EARLY BINDING
/*
#include<iostream>
using namespace std;
class Base
{
public:

    void print(){
    cout<<"This is a Parent class "<<endl;\
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout<<"This is a base class "<<endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr ->print();  // Early binding

}
*/


//   #INDIRECT CALL
/*
#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int(*fptr)(int , int) = sum;
    cout<<"Sum of two numbers is : "<<sum(30, 20)<<endl;
}
*/


// LAte binding

#include<iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout<<"This is a Parent class ";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout<<"This is Child class"<<endl;
    }
};

int main()
{
    Base *bpttr;
    Derived d;
    bpttr =&d;
    bpttr ->print();
}
