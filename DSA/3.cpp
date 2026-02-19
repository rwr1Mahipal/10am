#include <iostream>
using namespace std;

int main(){
    //found value in arr
    int arr[6] = {10,20,30,40,50,60};
    int value = 300;
    bool found = false;

    for(int i=0; i<6; i++){
        if(arr[i] == value){
            found=true;
            cout<<"Value found at index "<<i<<endl;
        }
    }
    if(!found){
        cout<<"Value not found"<<endl;
    }

    //count single value   
    int arr[10]={10,20,50,10,35,20,50,40,40,50};
    int value = 10;
    int count = 0;

    for(int i=0; i<10; i++){
        if(arr[i] == value){
            count++;
        }
    };
    cout<<"Value found and count "<<count<<endl;

    //count all duplicate element 
    int arr[10]={10,20,50,10,35,20,50,40,40,50}; 
    bool visited[10]={false};

    for(int i=0; i<10; i++){
        int count = 1;
        if(visited[i]){
            continue;
        }
        for(int j=i+1; j<10; j++){
            if(arr[i]==arr[j]){
                count++;
                // arr[j]=-1;
                visited[j]=true;
            }
        }
        cout<< arr[i]<<" Valur count ="<<count<<endl;
    }
}