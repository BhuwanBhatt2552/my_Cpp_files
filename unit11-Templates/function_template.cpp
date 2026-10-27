#include<iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a +b ;
}

int main()
{
    int result_int;
    double result_double;
    
    result_int = add<int>(20, 30);
    cout<<"Sum of integer values is "<<result_int<<endl;

    result_double = add<double>(234.54, 667.875);
    cout<<"Sum of double values is "<<result_double<<endl;

    return 0;
}