#include<iostream>
using namespace std;

class check
{
private:
    int a ;

public:
    check() : a(5)
    { }
        void operator--()
        {
            --a;
        }
    void disp_a()
    {
        cout<<"value of a is "<<a<<endl;
    }
};


main()
{

    check ck;
    ck.disp_a();
    --ck;
    ck.disp_a();
}
