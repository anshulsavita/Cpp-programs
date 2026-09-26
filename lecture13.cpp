#include<iostream>
using namespace std;

// class Bank{
//     private:
//         int accountno;
//         string name;
//         int balance;

//         void deposit(){
//             int amt;
//             cout<<"Enter Amout to Deposit:";
//             cin>>amt;
//             if(amt>0)
//             balance=balance+amt;
//             else
//             cout<<"Invalid Amount..."<<endl;
//         }
//         void withdrawal(){
//             int amt;
//             cout<<"Enter Amount u want to withdraw:";
//             cin>>amt;
//             if(balance>=amt)
//             balance=balance-amt;
//             else
//             cout<<"Less Balance"<<endl;
//         }
//     public:
//         void openAccount(){
//             cout<<"Enter Account Number:";
//             cin>>accountno;
//             cout<<"Enter Name:";
//             cin>>name;
//             cout<<"Enter Balance:";
//             cin>>balance;
//         }
//         void showAccount(){
//             cout<<"Account Number:"<<accountno<<endl;
//             cout<<"Name:"<<name<<endl;
//             cout<<"Balance:"<<balance<<endl;
//         }
//         void cashierOne(){
//             deposit();
//         }
//         void cashierTwo(){
//             withdrawal();
//         }
        
// };
// int main(){
//     Bank B1;
//     B1.openAccount();
//     B1.showAccount();

//     B1.cashierOne();
//     B1.showAccount();

//     B1.cashierOne();
//     B1.showAccount();

//     B1.cashierTwo();
//     B1.showAccount();
// }

// ----------------------------------------------

class Bus{
    private:
    int busid;
    string from;
    string to;
    int distance;
    int rent;
    string type;
    int totalrent;
    void calculateRent(){
        totalrent=rent*distance;
    }
    public:
        void getBusInformation(){
            cout<<"Enter Bus ID:";
            cin>>busid;
            cout<<"Enter From:";
            cin>>from;
            cout<<"Enter to:";
            cin>>to;
            cout<<"Enter Distance:";
            cin>>distance;
            cout<<"Enter Rent:";
            cin>>rent;
            cout<<"Enter Bus Type[AC/NonAC]:";
            cin>>type;
            if(type=="AC"){
                rent=rent+1;
            }
            calculateRent();
        }
        void showBusInformation(){
            cout<<busid<<","<<from<<","<<to<<","<<distance<<","<<rent<<","<<type<<","<<totalrent<<endl;
        }
};
int main(){
    Bus B1;
    B1.getBusInformation();
    B1.showBusInformation();
}
