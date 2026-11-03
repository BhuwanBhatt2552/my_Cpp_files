#include<iostream>
using namespace std;
class checkAges{
    public:
    int Fage, Sage;
    void input(){
        cout<<"Enter age of Father: ";
        cin>>Fage;
        cout<<"Enter age of Son: ";
        cin>>Sage;
    }
    void display(){
        cout<<"Father's age is: "<<Fage<<endl;
        cout<<"Son's age is: "<<Sage<<endl;
        
    }

    void compare(){
        try{
            if(Fage>Sage)  cout<<"Valid input"<<endl;
            else if(Fage<Sage) throw 1;
            else if (Fage == Sage) throw 2;
            else throw 3;

        }
        catch(int x){
            if(x == 1) cout<<"Invalid input: Father's age never be less than Son's age"<<endl;
            else if(x == 2) cout<<"Invalid input: Father's age never be equal to Son's age"<<endl;
            else cout<<"Invalid input!"<<endl;
        }
    }
};

int main(){
    checkAges obj;
    cout<<"\n";
    obj.input();
    cout<<"\n";
    obj.display();
    cout<<"\n";
    obj.compare();

    return 0;
}