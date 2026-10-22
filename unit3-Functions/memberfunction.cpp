#include<iostream>
using namespace std;
class find_sum
{
    public:
    int x, y ;
    int getdata();
    int disp_sum();

};

int find_sum :: getdata()
{
    cout<<"enter two numbers : ";
    cin>>x>>y;

}

int find_sum :: disp_sum()
{

    return x+y;
}

main()
{
    find_sum sum1;
    sum1.getdata();
    cout<<"sum of entered number is "<<sum1.disp_sum();
}
