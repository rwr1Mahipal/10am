#include <iostream>
using namespace std;
#include <vector>


int main(){
    vector<int>v;
    vector<int>v1(5,10);
    vector<int>v2(5);
    vector<int>v3={100,200,300,400};

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);

    // v.pop_back();
    // cout<<"Front element: "<<v.front()<<endl;
    // cout<<"Front element: "<<v.back()<<endl;

    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }

    // if(v.empty()){
    //     cout<<"\nVector is empty"<<endl;
    // }else{
    //     cout<<"\nVector is not empty"<<endl;
    // }
}