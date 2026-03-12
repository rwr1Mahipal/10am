#include <iostream>
using namespace std;

// template <typename T>
// void show(T a){
//     cout<<"A: "<<a<<endl;
// };

// T sum(T a, T b){
//     return a + b;
// }

template <class T>
class Employee{
    public:
    T id;
    void setID(T x){
        id=x;
    };
    void getID(){
        cout<<"ID: "<<id;
    }
};

int main(){
    // show(10);
    // cout<<"\nSum: "<<sum(10,15);
    // cout<<"\nSum: "<<sum(10.5,15.25);

    Employee<int> e;
    Employee<float> e1;
    e.setID(20);
    e.getID();

    e1.setID(40.45);
    e1.getID();
}