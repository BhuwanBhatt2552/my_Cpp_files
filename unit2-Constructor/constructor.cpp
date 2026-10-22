#include<iostream>
using namespace std;

class demo
{

    int *ptr;
public:
    demo()
    {
        ptr = new int;
        *ptr = 200;
    }
    void display()
    {
        cout<<*ptr;
    }
};

int main()
{
    demo* dm = new demo();
    dm->display();

    delete dm;

}
