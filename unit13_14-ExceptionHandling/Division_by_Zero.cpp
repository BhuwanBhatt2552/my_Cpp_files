#include<iostream>
using namespace std;

main()
{
    try
    {
        int a = 12, b = 0, c;
        if(b == 0)
        {
            throw 1;
        }
        else
        {
            c = a/b;
        
            cout<<"Result = "<<c;
        }    
    }
    catch(int x)
    {
        cout<<"Error "<<x<<": Division by zero is not allowed. "<<endl;
    }

}
