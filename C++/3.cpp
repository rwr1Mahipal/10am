#include <iostream>
using namespace std;

class BankAcc{
    int accNum;
    int balance;
    public:
        BankAcc(int a, int b){
            accNum=a;
            balance=b;

            cout << "Acc. NO. : "<<accNum <<" Balance: "<<balance<<endl;
        };

         BankAcc(BankAcc &b){
            accNum=b.accNum;
            balance=b.balance;
            cout<<"Copy Cons. call"<<endl;
        };

        ~BankAcc(){
            cout<<"Thanks for visit"<<endl;
        }
        // void getData(){
        //     cout << "Acc. NO. : "<<accNum <<" Balance: "<<balance<<endl;
        // };
};

int main(){
  BankAcc acc(2025, 5000);
//   BankAcc acc1(2025, 5000);
    BankAcc acc1 = acc;
//   acc.getData();
//   acc1.getData();

}