#include<iostream>
using namespace std;
class sample1{
    public:
    sample1(){
        cout<<"Construct an object of sample1 class..."<<endl;

    }
    ~sample1(){
        cout<<"Destruct an object of sample1 class..."<<endl;
    }
};

class sample2{
    public:
    sample2(){
        int i = 10;
        cout<<"Construct an object of sample2... "<<endl;
        throw i;
    }

    ~sample2(){
        cout<<"Destruct an object of sample2..."<<endl;

    }
};

int main(){
    try{
        sample1 s1;
        sample2 s2;
    
    }
    catch(int i){
        cout<<"Caught: "<<i<<endl;
    }
}