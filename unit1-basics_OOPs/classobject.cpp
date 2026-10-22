#include<iostream>
using namespace std;
class demo{
    public: int f_num, s_num;
    void sum(int a, int b){
        cout<< a+b;
    }
};

int main(){
    demo d1;
    d1.sum(d1.f_num =10 , d1.s_num = 39);
    return 0;
}