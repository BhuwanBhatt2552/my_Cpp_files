#include<iostream>
using namespace std;

class animal
{
    public:
        virtual void sound()
        {
            cout<<"Animal sound"<<endl;
        }
};

class  dog : public animal
{
    public:
        void sound()
        {
            cout<<"bark"<<endl;

        }
};

class cat : public animal{
    public : 
        void sound()
        {
            cout<<"meoww"<<endl;
        }
};

int main()
{
    animal *a;

    dog d;
    cat c;

    a = &d;
    a -> sound();

    a = &c;
    a->sound();

    return 0;
}