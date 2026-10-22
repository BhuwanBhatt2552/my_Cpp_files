#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("demo.txt", ios::in);
    if(!file)
    {
        cout<<"Error";
    }
    else{
        cout<<file.tellp()<<endl;
        file<<"C++";
        file.seekp(10);
        file<<"Cpp is an object oriented programming language"<<endl;

        cout<<file.tellp()<<endl;
    }

    file.close();
}