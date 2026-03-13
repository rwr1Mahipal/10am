#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class SinglyList{
    public:
    Node* head;
    SinglyList(){
        head=NULL;
    }

    void display(){
        if(head==NULL){
            cout<<"Singly List is empty";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<< " NULL ";
    };

    void addAtBeg(int val){
        Node* newNode = new Node(val);
        newNode->next=head;
        head=newNode;
    }

    void addAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head=newNode;
            return;
        }
        
        Node* temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
};

int main(){
    SinglyList s;

    s.addAtBeg(10);
    s.addAtBeg(100);
    s.addAtEnd(20);
    s.addAtEnd(200);
    s.display();
}