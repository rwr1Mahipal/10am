#include <iostream>
using namespace std;

class A{
    public:
        void getData(){
            cout<<"class A"<<endl;
        }
};

class B : public A{
    public:
        void getData(){
        cout<<"class B"<<endl;
    }
};


class C : public B{
    public:
    void setData(){
        cout<<"class c"<<endl;
    }
};

int main(){
    C c;

    c.getData();
    c.setData();
    c.A::getData();
    

};
   