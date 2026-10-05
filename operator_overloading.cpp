#include<iostream>
using namespace std;
class sample
{
private:
    int x;
public:
    sample()
    {

        x = 0;

    }

    void operator ++()
    {
        ++x;
    }

    void disp()
    {
        cout<<"value of x is "<<x<<endl;
    }
};

main()
{
    sample obj;
    obj.disp();
    ++obj;
    obj.disp();

}
