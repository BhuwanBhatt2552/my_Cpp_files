#include<iostream>
using namespace std;
template < class T>
class operation
{
    T num1, num2;
    public:
    operation(T a, T b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout<<"\t->First number is "<<num1<<endl;
        cout<<"\t->Second number is "<<num2<<endl;
        cout<<"\n\t->Addition of numbers is "<<add()<<endl;
        cout<<"\t->Product of numbers is "<<product()<<endl;
        cout<<"\t->Division of numbers is "<<division()<<endl;
        cout<<"\t->Subtraction of numbers is "<<sub()<<endl;
    }

    T add()
    {
        return num1 + num2 ;
    }
    T sub()
    {
        return num1 - num2 ;
    }
    T product()
    {
        return num1 * num2;
    }
    T division()
    {
        return num1 / num2;
    }
};

int main()
{
    int x, y;

    cout<<"Enter integer values ";
    cin>>x>>y;
    operation<int> opint(x, y);
    operation<double> opdouble(432, 23.65);

    cout<<"\n->Show operations in integers"<<endl;
    opint.display();

    cout<<"\n->Show operations in doubles"<<endl;
    opdouble.display();

    return 0;

}