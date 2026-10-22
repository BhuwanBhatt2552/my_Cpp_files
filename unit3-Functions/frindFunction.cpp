#include<iostream>
using namespace std;
class sample
{

    int number;

public:
    sample() :number(0)
    {

    }

    friend int printNumber(sample);

};

int printNumber(sample s)
{
    s.number += 100;

    return s.number;
}

int main()
{
    sample s;
    cout<<"Entered number is "<<printNumber(s);
}
