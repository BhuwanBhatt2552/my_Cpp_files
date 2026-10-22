#include<iostream>
using namespace std;

class sample
{
    int x,y ;
public:
    sample(){}
    sample(int sx, int sy)
    {
        x = sx;
        y = sy;
    }

    void show()
    {
        cout<<x<<y<<endl;
    }

    friend sample operator + (sample ob1,  sample ob2);
};


sample operator+(sample ob1, sample ob2)
{
    sample temp;
    temp.x = ob1.x + ob2.x;
    temp.y = ob1.y + ob2.y;

    return temp;
}

main()
{
    sample ob1(10,20), ob2(20,30), ob3;
    ob3 = ob1+ ob2;

    ob3.show();
}
