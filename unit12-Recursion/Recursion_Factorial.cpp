#include<iostream>
using namespace std;
int fact(int n){
    if(n>0){
        return n*fact(n-1);
    }
    else{
        return 1;
    }

}

int main(){
    int num;
    cout<<"Enter number to find its factorial: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is = "<<fact(num)<<endl;
    return 0;
}