#include <iostream>
using namespace std;

class Add{
    private:
        int a,b;
        public:
            void setData(int x, int y){
                a=x;
                b=y;
            };
            void getData(){
                cout<<"a = "<<a<<" b = "<<b<<endl;
            };

            Add operator+(Add n){
                Add temp;
                temp.a=this->a + n.a;
                temp.b=this->b + n.b;
                return temp;
            }
};

int main(){
   Add a1, a2, a3;

   a1.setData(10,20);
   a2.setData(50,60);

   a3 = a1 + a2;

   a1.getData();
   a2.getData();
  a3.getData();
}