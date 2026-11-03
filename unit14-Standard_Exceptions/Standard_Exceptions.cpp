#include<iostream>
#include<exception>
#include<typeinfo>

using namespace std;

class A{
    virtual void func(){};
};

int main(){
    try{
        A *a = NULL;
        typeid(*a);
    }
    catch(exception &e){
        cout<<"Exception caught: "<<e.what()<<endl;
    }
    return 0;
}