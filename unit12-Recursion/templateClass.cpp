#include<iostream>
using namespace std;

template<class T>
class sum{
    T num1, num2;
    public:
    sum(T a, T b){
        num1 = a;
        num2 = b;
    }
    void disp(){
        cout<<"Numbers are: "<<num1<<" and "<<num2<<endl;
        cout<<"Sum is : "<<add()<<endl;
    }
    T add(){
        return num1 + num2;
    }
};

int main(){
    sum<int> s1(32,54);
    cout<<"\nCalculation of integers using template class\n"<<endl;
    s1.disp();
}