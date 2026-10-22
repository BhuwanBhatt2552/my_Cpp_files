// Inline Functions (Calculator):
// C++ program that uses inline functions inside class  
// Perform addition, subtraction, multiplication and division of two numbers


#include<iostream>
using namespace std;

class calculator
{
    private: 
      float a , b ;

    public:
      
      inline float addition()
      {
        return a+b;
      }

      inline float substraction()
      {
        return a-b;
      }

      inline float multiplication()
      {
        return a*b;
      }

      inline float division()
      {
        if (b == 0) {
        cout << "(Error: Division by zero) ";
        return 0; 
        }
        return a/b;
      }

    void getdata()
    {
        cout<<"Enter two numbers to perform maths operation"<<endl;
        cout<<"A - ";
        cin>>a;
        cout<<"B - ";
        cin>>b;
    }  

};

main()
{
    calculator c;
    c.getdata();
    cout<<"\n==============================="<<endl;
    cout<<"Addition   is - "<<c.addition()<<endl;
    cout<<"Difference is - "<<c.substraction()<<endl;
    cout<<"Multiply   is - "<<c.multiplication()<<endl;
    cout<<"Division   is - "<<c.division()<<endl;

    return 0;
}