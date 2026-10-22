#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream of("Text.txt");
    if(!of)
    {
        cout<<"file not available";
    }
    else
    {
        of<<"Opening using constructor";
        of.close();
    }
}
