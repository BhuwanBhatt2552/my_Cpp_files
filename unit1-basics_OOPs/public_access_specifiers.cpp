#include<iostream>

using namespace std;
class abc{
    public:
    int number;

    void display(){
        cout<<"Entered number is : "<<number;
    }
};

main()
{
    abc obj1;
    cout<<"enter number:";
    cin>>obj1.number;
    obj1.display();
    
}