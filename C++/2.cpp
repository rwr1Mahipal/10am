#include <iostream>
using namespace std;

class Student{
    int id;
    public:
    // static string name;
        void setData(int i){
            cout<<"Enter value: ";
            cin>>i;
            id=i;
        };
        void getData(){
            cout<<id<<" ";
        }
};

// string Student::name = "Full Stack";

int main(){
   Student s[5];
   
   int length = sizeof(s) / sizeof(s[0]);

   for(int i=0; i<length; i++){
    s[i].setData(i+1);
   };

   for(int i=0; i<length; i++){
    s[i].getData();
   }
//    cout <<endl;
//    cout<<Student::name;

}