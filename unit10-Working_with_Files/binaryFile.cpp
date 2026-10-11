#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("number.dat", ios::out | ios::binary);    //.dat is binary file
    int buffer[5] = {11,35,234,123,534};
    cout<<"Now writing the data to the file.\n";
    file.write((char*)buffer, sizeof(buffer));            // Writing the data into binary file
    file.close();

    file.open("number.dat", ios::in);                     // Reading from the binary file
    cout<<"Now reading data back into the memory.\n";
    file.read((char*)buffer, sizeof(buffer));
    for(int count =0; count<5;count++)
    cout<<buffer[count]<<" ";
    file.close();


}