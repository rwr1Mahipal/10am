#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int b = 0;

    // try{
    //     if (b == 0){
    //         throw 1;
    //     }
    //     int c = a / b;
    //     cout << "Result: " << c << endl;
    // }
    // catch (int x){
    //     cout << "Can not devisible by 0" << endl;
    // }catch(...){
    //     cout << "Internal server error" << endl;

    // }

    int balance = 1000;
    int withdrow = 500;

    try
    {
        if (balance < withdrow)
        {
            throw "Insuffucunt fund";
        }
        balance -= withdrow;
        cout << "Transaction successfull" << endl;
    }
    catch (const char *message)
    {
        cout << message << endl;
    }
    cout << "Balance: " << balance << endl;
}