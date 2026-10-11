#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    fstream f;
    ofstream fout;
    ifstream fin;
      fin.open("details.txt");
      fout.open("details.txt", ios::app);
      
      if(fin.is_open())
        fout<<"\nHello C++"<<endl;
        cout<<"\nData is appended to the file"<<endl;
      fin.close();
      fout.close();
    
    string word;
    f.open("details.txt");
    while(f >> word)
    {
        cout<<word<<" ";

    }  
    return 0;
}