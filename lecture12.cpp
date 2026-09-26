#include<iostream>
using namespace std;

class Bank{
    private:
        int accountno;
        string name;
        int balance;
    public:
        void openAccount(){
            cout<<"Enter Account Number:";
            cin>>accountno;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Balance:";
            cin>>balance;
        }
        void showAccount(){
            cout<<"Account Number:"<<accountno<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Balance:"<<balance<<endl;
        }
        void deposit(){
            int d;
            cout<<"Enter Amout to Deposit:";
            cin>>d;
            if(d>0)
            balance=balance+d;
            else
            cout<<"Invalid Amount..."<<endl;
        }
        void withdrawal(){
            int w;
            cout<<"Enter Amount u want to withdraw:";
            cin>>w;
            if(balance>=w)
            balance=balance-w;
            else
            cout<<"Less Balance"<<endl;
        }
};
int main(){
    Bank B1;
    B1.openAccount();
    B1.showAccount();

    B1.deposit();
    B1.showAccount();

    B1.withdrawal();
    B1.showAccount();

}