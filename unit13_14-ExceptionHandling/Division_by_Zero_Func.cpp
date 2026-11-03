#include<iostream>
using namespace std;
double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by Zero!, not allowed";
    }
    return (double)a / b;
}

int main()
{
    int a = 15, b = 0;
    double c = 0;
    try
    {
        c = division(a, b);
        cout<<"Division result = "<<c<<endl;

    }
    catch(const char* msg)
    {
        cout<<"Error: "<<msg<<endl;

    }
    
}