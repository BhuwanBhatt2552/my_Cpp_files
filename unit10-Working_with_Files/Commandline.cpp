#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    // cout<<argc<<"\t"<<*argv[0];
    int i;
    cout<<"Total parameters in the code"<<argc;
    for(i = 0; i < argc; i++)
    {
        cout<<"\nValue of argc = "<<i<<"\tCommand line parameters are = "<<argv[i]<<endl;
    }
    return 0;
}