#include<iostream>
using namespace std;

class base{
    public:
    void msg(){
        cout<<"I am a base class function"<<endl;
    }
};

class derived : public base{
    public:
    void disp(){
        cout<<"Hello, I am a derived class function"<<endl;
    }
};

int main()
{
    derived d;
    d.msg();
    d.disp();
    return 0;
}