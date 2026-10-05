#include<iostream>
using namespace std;

class marksheet
{
private:
    float marks[5],  total;
public:
    void entry()
    {
        cout<<"\nenter marks (out of 100) of five subjects : ";
        for(int i = 0 ; i<5 ; i++)
        {
            cin>>marks[i];
        }

        total = marks[0]+ marks[1]+marks[2]+marks[3]+marks[4];
        cout<<"\nTotal marks : "<<total<<endl;
    }

    void average()
    {
        entry();
        float avg;
        avg = total/5;
        cout<<"Average mark : "<<avg<<endl;
    }
};

int main()
{
    marksheet mr[3];
    mr[0].average();
    mr[1].average();
    mr[2].average();

    return 0;
}
