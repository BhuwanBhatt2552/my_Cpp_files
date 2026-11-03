#include<iostream>
using namespace std;
#define cube(x) (x*x*x)
template<typename T>
T tcube(T a){
    return a*a*a;
}
int main()
{
    int x;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Cube of x is : "<<cube(x)<<endl;
    
    cout<<"Cube via template: "<<tcube<float>(x);
}