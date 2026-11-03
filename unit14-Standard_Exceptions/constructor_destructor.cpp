#include<iostream>
using namespace std;
class demo{
    public: 
       demo(){
        cout<<"Demo class Constrcutor..."<<endl;
       }
       ~demo(){
        cout<<"Demo Destructor..."<<endl; 
       }
};

class sample{
    public:
    sample(){
        cout<<"Sample class constructor..."<<endl;
    }
    ~sample(){
        cout<<"Sample destructor..."<<endl;
    }
};

int main(){
    demo d1;
    sample s1;

    return 0;
}