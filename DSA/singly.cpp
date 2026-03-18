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

    void deleteAtBeg(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        cout<<"Deleted Val: "<<temp->data<<endl;
        head=head->next;
        delete temp;
        temp=nullptr;
    }

    void deleteAtEnd(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(head->next == NULL){
            cout<<"Delete value at end: "<<head->data<<endl;
            delete head;
            head=NULL;
            return;
        }

        Node* temp=head;
        while(temp->next->next != NULL){
            temp=temp->next;
        }
        Node* delVal = temp->next;
        cout<<"Delete of val: "<<delVal->data<<endl;
        delete delVal;
        temp->next=NULL;
    }

    void update(int pos, int val){
        Node* temp = head;
        for(int i=0; i<pos; i++){
            if(temp==NULL){
                cout<<"Pos not found"<<endl;
                return;
            }
            temp=temp->next;
        }
        temp->data=val;
        cout<<"value added "<<val<<" of pos "<<pos<<endl;
    }

    void reverse(){
        if(head==NULL || head->next == NULL){
            cout<<"List is empty"<<endl;
            return;
        }

        Node* pre = NULL;
        Node* cur = head;
        Node* next = NULL;

        while(cur != NULL){
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        head=pre;

    }

};

int main(){
    SinglyList s;

    s.addAtBeg(10);
    s.addAtBeg(100);
    s.addAtEnd(20);
    s.addAtEnd(200);
    // s.update(30, 500);
    // s.deleteAtBeg();
    // s.deleteAtEnd();
    s.reverse();
    s.display();
}