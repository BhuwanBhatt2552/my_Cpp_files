#include<iostream>
using namespace std;
int main()
{
    int fathersAge;
    int sonsAge;
    cout<<"Enter father's age: ";
    cin>>fathersAge;
    cout<<"Enter son's age: ";
    cin>>sonsAge;
    try{
        if (fathersAge == sonsAge)
            throw 55;
        else if (sonsAge > fathersAge)
            throw 'x';
        else throw (2.0f);    

    }    
    catch(int a)
    {
        cout<<"Father age  and sons age never be same.."<<endl;
    }
    catch(char a)
    {
        cout<<"Son's age never be greater than father's age..."<<endl;
    }
    catch(float j)
    {
        cout<<"Valid input"<<endl;
    }
}