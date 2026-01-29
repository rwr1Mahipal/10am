#include <iostream>
using namespace std;

class A{
    public:
        void getData(){
            cout<<"Class A"<<endl;
        }
};

class B{
    public:
        void getData(){
            cout <<"Class B"<<endl;
        }
};

class C : public A, public B{
    public:
        void setData(){
            cout << "Class C"<<endl;
        }
};

int main(){
   C c;

//    b.getData();
//    b.A::getData();

    c.B::getData();
  
}