#include <iostream>
using namespace std;

class Show{
    public:
        int id;
        void setData(int a){
            id=a;
        };
        void getData(){
            cout<<"ID: "<<id<<endl;
        }
};

int main(){
   Show s[3];
   int temp;
//    Show *p;
//    p=&s;

     Show* p = new Show();
    
     for(int i=0; i<3; i++){
        cout<<"Enter value: ";
        cin>>temp;
        p[i].setData(temp);
     };
     for(int i=0; i<3; i++){
        p[i].getData();
     }
      for(int i=0; i<3; i++){
        delete p;
        p=nullptr;
     }

//    p->setData(1);
//    p->getData();
   cout<<p;
}