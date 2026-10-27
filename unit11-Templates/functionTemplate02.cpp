#include<iostream>
using namespace std;
template<typename T>

T add(T num1, T num2)
{
    return num1 + num2;
}

template <typename A>
A multiply (A num1, A num2)
{
    return num1 * num2;
}

template <typename B>
B division(B num1, B num2)
{
    return num1/num2 ;
}

int main()
{
    int result_add, result_m, result_d;
    result_add = add<int>(10, 20);
    result_m = multiply<int>(12, 9);
    result_d = division<int>(100, 5);
    cout<<"Add = "<<result_add<<endl;
    cout<<"Multiply = "<<result_m<<endl;
    cout<<"Division = "<<result_d<<endl;
}