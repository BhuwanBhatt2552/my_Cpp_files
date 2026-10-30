#include<iostream>
using namespace std;
void msg(){
    cout<<"I am a Recursive Function"<<endl;
}
int sum (int a, int b){
    return a+b;
}
int main(){
    msg();
    cout<<"Sum of a and b is = "<<sum(5, 10)<<endl;
}