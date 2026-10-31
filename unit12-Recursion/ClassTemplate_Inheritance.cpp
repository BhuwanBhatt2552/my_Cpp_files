#include<iostream>
using namespace std;
template<typename T>
class base{
    protected:
    int x = 100, y = 200;
};

template<typename T>
class derived : public base<T>{
    public:
    T sum(){
        return this-> x + this-> y;
    }
};

int main(){
    derived<int>d1;
    cout<<"\nSum of x and y is: "<<d1.sum()<<endl;
    return 0;
}