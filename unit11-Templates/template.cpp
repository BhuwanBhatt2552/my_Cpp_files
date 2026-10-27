#include<iostream>
using namespace std;
template <class T>
class sum
{
    T num1, num2;
    public:

    sum(T a, T b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout<<"Number are "<<num1 <<" and "<<num2<<endl;
        cout<<"Sum is "<<add()<<endl;
    }

    T add()
    {
        return num1 + num2 ;
    }
};

int main()
{
    sum<int> sumint(10, 20);
    sum<float> sumfloat(10.5, 20.4);
    cout<<"\nShow sum of integers"<<endl;
    // sumint.add();
    sumint.display();

    cout<<"\nShow sum of float"<<endl;
    // sumfloat.add();
    sumfloat.display();
}