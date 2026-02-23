#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {10,15,30,20,5};
    // int size = 5;

    // for (int i = 0; i < size; i++){
    //     bool isLeader=true;
    //     for (int j = i + 1; j < size; j++){
    //         if (arr[i] < arr[j]){
    //             isLeader=false;
    //             // cout << arr[j] << " ";
    //             break;
    //             // continue;
    //         }
    //     }
    //     if(isLeader){
    //         cout<<arr[i]<<" ";
    //     }
    // }

    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int rotatEle = 2;

    for (int i = 0; i < rotatEle; i++){
        int temp = arr[size-1];
        // arr[i]=arr[i+2];
        for (int j = size - 1; j > 0; j--){
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}