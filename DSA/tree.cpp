#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

class BinaryTree{
    public:
    Node* root;
    BinaryTree(){
        root=NULL;
    }

    Node* createTree(){
        int val;
        cin>>val;

        if(val == -1) return NULL;
        Node* node = new Node(val);
        node->left = createTree();
        node->right = createTree();

        return node;
    }

    void preOrder(Node* node){
        if(node==NULL) return;
        cout<<node->data<<" ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void inOrder(Node* node){
        if(node==NULL) return;
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
    }

    void postOrder(Node* node){
        if(node==NULL) return;
        postOrder(node->left);
        postOrder(node->right);
        cout<<node->data<<" ";
    }
};

int main(){
    BinaryTree b;

    // b.root = new Node(1);
    // b.root->left = new Node(2);
    // b.root->right = new Node(3);
    // b.root->left->left = new Node(4);
    // b.root->left->right = new Node(5);

   cout<<"Enter tree value (enter -1 for NULL): ";
   b.root = b.createTree();

    cout<<"PreOrder: ";
    b.preOrder(b.root);

    cout<<"\nInOrder: ";
    b.inOrder(b.root);

    cout<<"\nPostOrder: ";
    b.postOrder(b.root);
}