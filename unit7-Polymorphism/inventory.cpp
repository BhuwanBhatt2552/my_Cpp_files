#include<iostream>
using namespace std;
class inventory1
{

    int item_no, qty;
    float rate;

public:
    inventory1(int n , int q, float a)
    {
        item_no = n;
        qty = q;
        rate = a;

    }

    int getino()
    {
        return(item_no);
    }

    float getamt()
    {
        return(qty*rate);
    }

    void display()
    {
        cout<<"Item number: "<<item_no<<"\tQty : "<<qty<<"\tAmount: "<<rate<<endl;

    }
};

class inventory2
{
    int ino;
    float amount;
public:
    void operator = (inventory1 I)
    {
        ino = I.getino();
        amount = I.getamt();

    }

    void display()
    {
        cout<<"Item number: "<<ino<<"\tTotal Amount: $"<<amount<<endl;
    }
};

int main()
{
    inventory1 I1(8256, 20, 45.25);
    inventory2 I2;
    I2 = I1;
    I1.display();
    I2.display();
}
