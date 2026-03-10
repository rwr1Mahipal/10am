#include <iostream>
using namespace std;

class Employee{
    int *id;
    public:
    Employee(int n){
        id=new int(n);
        cout<<"Constructor call"<<endl;
    }
    ~Employee(){
        delete id;
        id=nullptr;
        cout<<"Disstructor call"<<endl;
    }
};

int main(){
//    int *a = new int(10);
//    cout<<"a="<<*a<<endl;
//    delete a;
//    a=nullptr;
//    cout<<"a="<<a;

    // int *arr = new int[5];
    // for(int i=0; i<5; i++){
    //     arr[i]=i+1;
    //     cout<<arr[i]<<" ";
    // }

    Employee e(5);
    Employee e1(5);
}