#include<iostream>
#include<exception>
#include<cstdlib>
using namespace std;

void myterminator(){
    cerr<<"Terminate handler called..."<<endl;
    abort();
}
int main(){
    set_terminate(myterminator);
    throw 0;
    return 0;
}