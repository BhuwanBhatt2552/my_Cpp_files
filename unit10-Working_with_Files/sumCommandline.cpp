#include<iostream>
using namespace std;
int main(int argc, char *_argv[])
{
    int i, sum = 0;
    for ( i = 0; i < argc; i++)
    {
        cout<<"\nArgument "<<argc<<"\tValue "<<_argv[i];
        sum = sum + i;
        
    }

    cout<<"\nSum of all given argument is = "<<sum;
    return 0;
    

}