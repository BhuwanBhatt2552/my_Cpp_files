#include<iostream>
using namespace std;
#define square(x) (x*x)
#define min(a,b) ((a<b)?a:b)
int main(){
    float x;
    int a,b;
    cout<<"Enter a number to find its square: :";
    cin>>x;
    cout<<"Square of "<<x<<" is: "<<square(x)<<endl;

    cout<<"Enter two number to check minimum number: ";
    cin>>a>>b;
    cout<<"Minimum number is: "<<min(a, b)<<endl;
    return 0;

}