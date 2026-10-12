#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    fstream file;
    cout<<"\n\n";
    file.open("file1.txt", ios::out);
    if(!file)
    {
        cout<<"Error"<<endl;
    }

file<<"OOP using C++";
cout<<"\nCurrent position in file - "<<file.tellp()<<endl;
file.close();

file.open("file1.txt", ios::in);
if(!file)
{
    cout<<"Error";
}
cout<<"\nAfter writing position is "<<file.tellg()<<endl;

char ch;
while(!file.eof())
{
    cout<<"Position - "<<file.tellg();
    file>>ch;
    cout<<" Character - "<<ch<<endl;
}
file.close();
return 0;
}