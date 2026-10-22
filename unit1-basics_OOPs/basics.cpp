// using basic object orirented progaramming classes and objects
#include<iostream>
using namespace std;

class abc{
    public:
    int number;
    void display(){
        cout<<"number = "<<number;
    }
};

main()
{
    abc obj1;
    cout<<"Enter any number : ";
    cin>>obj1.number;

    obj1.display();
}