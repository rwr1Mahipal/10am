#include <iostream>
using namespace std;

class Show
{
private:
    int age;

public:
    void setData(int age)
    {
        this->age = age;
    }
    void getData()
    {
        cout << "age: " << this->age << endl;
    }
};

int main()
{
    Show s1, s2;
    int a;
    cout << "Enter value: ";
    cin >> a;
    s1.setData(a);
    s1.getData();

    s2.setData(a);
    s2.getData();

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "Age is: " << age;
}