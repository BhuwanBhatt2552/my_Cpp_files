// Basic to class conversion
#include<iostream>
using namespace std;
class time
{
    private:
    int h, m;

    public:
     time(int t)
     {
        h = t/60;
        m = t%60;

     }

    void show(); 
};

void time ::show()
{
    cout<<h<<" hours ";
    cout<<m<<" minutes"<<endl;
}

main()
{
    int duration;
    cout<<"Enter total duration ";
    cin>>duration;
    time t(duration);
    t.show();

}