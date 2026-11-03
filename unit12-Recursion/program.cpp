#include<iostream>
using namespace std;
#include "operation.h"
int main(){
    msg();
    int x,y;
    cout<<"Enetr value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    cout<<"Sum of above entered values is: "<<sum(x,y)<<endl;
    cout<<"product of above entered values is: "<<product(x,y)<<endl;


}