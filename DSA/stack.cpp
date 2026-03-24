#include <iostream>
using namespace std;

class Stack{
    int arr[10];
    int size;
    int top;
    public:
    Stack(int x){
        size=x;
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    };

    bool isFull(){
        return top == size -1;
    }

    void push(int val){
        if(isFull()){
            cout<<"Stack is overflow"<<endl;
        }
        top++;
        arr[top]=val;
    }

    void pop(){
         if(isEmpty()){
            cout<<"Stack is underflow"<<endl;
        }
        top--;
    }

    void peekElement(){
        if(isEmpty()){
            cout<<"Stack is underflow"<<endl;
        }
        cout<<"Element: "<<arr[top]<<endl;
    }


    int length(){
        return top + 1;
    }

    void diaplay(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
        }
        for(int i=top; i>=0; i--){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    Stack s(10);

    s.push(10);
    s.push(100);
    s.push(1000);
    // s.pop();
    s.peekElement();
    s.diaplay();
    cout<<"Length of stack is: "<<s.length();
}