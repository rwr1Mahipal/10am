#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for (int i = 0; i < size; i++){
        int ele = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > ele){
            arr[j + 1] = arr[j];
            j--;
        };
        arr[j + 1] = ele;
    }
}

int main(){
    int arr[] = {50, 55, 64, 12, 8, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, length);

    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
}