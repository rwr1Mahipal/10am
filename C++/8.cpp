#include <iostream>
using namespace std;

class Show{
    public:
        int add(int a, int b){
            return a+b;
        };
        float add(float a, float b){
            return a+b;
        };
        int add(int a, int b, int c){
            return a+b+c;
        }
};

int main(){
    Show s;

    cout << s.add(10,20)<<endl;
    cout << s.add(10.5f,20.5f)<<endl;
    cout << s.add(10,20,30)<<endl;
}