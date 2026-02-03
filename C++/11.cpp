#include <iostream>
using namespace std;

class Account{
    int balance, count;
    public:
        // void setData(int a){
        //     balance=a;
        // };
        void getData(){
            // cout<<"Balance: "<<balance<<endl;
            cout<<"Count: "<<count<<endl;
        };
        Account(int a){
            count=a;
        }
        // int interstet = 100;
        // void operator++(){
        //     balance += interstet;
        // };
        int operator++(int){
            count++;
        }
};

int main(){
        // Account a;
        // ++a;
        // a.setData(1000);
        // ++a;
        Account a(10);
        a++;
        a++;
        a.getData();
}