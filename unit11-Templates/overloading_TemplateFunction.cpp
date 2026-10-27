#include<iostream>
using namespace std;

template<class T>
void display(T t1)
{
    cout<<"Display template value"<<t1<<endl;
}

void display(int t1)
{
    cout<<"Integer argument is "<<t1<<endl;
}

int main()
{
    display(10);
    display(5674.3456);
    display("H");
    display("Hello, Bhuwan");

    return 0;
}