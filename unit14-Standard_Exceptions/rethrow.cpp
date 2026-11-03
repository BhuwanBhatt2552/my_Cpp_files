#include<iostream>
using namespace std;
int main(){
    try
    {
        int a, b;
        cout<<"\nEnter two numbers:- "<<endl;
        cout<<"\tEnter a: ";
        cin>>a;
        cout<<"\tEnter b: ";
        cin>>b;
        try{
            if(b == 0 ){
                throw b;
            }
            else {
                cout<<"\n\tDivision of a/b is "<<(a/b)<<endl;
            }
        }
        catch(...){
            throw;
        }
    }
   
    catch(int){
        cout<<"Second value cannot be zero"<<endl;
    }
}
