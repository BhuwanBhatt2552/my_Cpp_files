#include<iostream>
using namespace std;

void check()
{
    try{
        int number;
        cout<<"Enter number: ";
        cin>>number;
        if (number > 100) cout<<"Number is greater than 100"<<endl;
        else if (number < 0) throw 15;
        else if(number  == 0) throw 'x';
        else throw(10.2f);
    }
    catch(int a){
        cout<<"Number never be less than 0!... It's an exeption"<<endl;
    }
    catch(char a){
        cout<<"Number never be equal to 0!... It's another exception"<<endl;
    }
    catch(float j){
        cout<<"Valid input given..."<<endl;
    }

}

int main(){
    check();
    return 0;

}