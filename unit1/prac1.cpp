// Basic class and object program

#include<iostream>
using namespace std;

class bankaccount
{
    private:

    string dipositerName;
    int accountNumber;
    string AccType;
    float AccBalance ;

    public:

    void getdata()
    {
        cout<<"Enter Account holder name : ";
        cin>>dipositerName;
        cout<<"Enter account number : ";
        cin>>accountNumber;
        cout<<"Enter account type ";
        cin>>AccType;
        cout<<"Enter initial amount you want to deposit to the acc. : ";
        cin>>AccBalance;
    }

    void deposit()
    {
        float  depositamt;
        cout<<"Enter deposit amount : ";
        cin>>depositamt;
        AccBalance = AccBalance + depositamt;
        cout<<"Account Balance is Rs."<<AccBalance;
    }

    void withdrawl()
    {
        float withd;
        cout<<"Enter amount to withdrawl - ";
        cin>>withd;
        if(AccBalance < 500)
        {
            cout<<"Your account has insufficient balance"<<endl;
        }
        else if ((AccBalance - withd) < 500)
        {
            cout<<"You have to keep minimum 500 rs in your account"<<endl;
            cout<<"Your current account balance is "<<AccBalance;
            
        }
        else
        {
            cout<<withd<<" Amount is withdrawl from your account "<<endl;
            AccBalance = AccBalance - withd;
            cout<<"Your account balance is Rs. "<<AccBalance<<endl;
        }
        
    }

    void display()
    {
        
        cout<<"\nYour account detials are : "<<endl;
        cout<<"Account holder- "<<dipositerName<<endl;
        cout<<"Account Number- "<<accountNumber<<endl;
        cout<<"Current balance- "<<AccBalance<<endl;

    }
};

int main() {
    bankaccount bk;
    int choice;

    cout << "=== Welcome to the Bank ===" << endl;
    cout << "First, let's create your account." << endl;
    bk.getdata();

    // Loop tab tak chalega jab tak user 4 (Exit) press nahi karta
    do {
        cout << "\n========== MENU ==========" << endl;
        cout << "1. Deposit Amount" << endl;
        cout << "2. Withdraw Amount" << endl;
        cout << "3. Check Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "==========================" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                bk.deposit();
                break;
            case 2:
                bk.withdrawl();
                break;
            case 3:
                bk.display();
                break;
            case 4:
                cout << "Thank you for using our services! Have a great day." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}

