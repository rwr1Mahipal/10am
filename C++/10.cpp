#include <iostream>
using namespace std;

class Show{
public: int a = 10;
private: int b = 20;
protected:int c = 30;

public:
    void display(){
        cout << "Public: " << a << endl;
        cout << "private: " << b << endl;
        cout << "protected: " << c << endl;
    }
};

class Child : public Show {
    public:  
     void display(){
        cout << "Public: " << a << endl;
        // cout << "private: " << b << endl;
        cout << "protected: " << c << endl;
    }
};


int main()
{
    Child s;
    s.display();
}