#include<iostream>
using namespace std;
int main()
{
    try{
        int fage, sage;
        cout<<"Enter father's age: ";
        cin>>fage;
        cout<<"Enter son's age: ";
        cin>>sage;
        if(fage<sage)
        {
            throw 12;

        }
        else
        {
            cout<<"Fathes's age is = "<<fage<<endl;
            cout<<"Son's age is = "<<sage<<endl;
        }
    }
    catch(int x)
    {
        cout<<"Exception occurred: Error code- "<<x<<endl<<" - Father's age cannot be less than son's age."<<endl;
    }
}