#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[6] = {45, 30, 65, 5, 12, 37};
    int length = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, length);

    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
}