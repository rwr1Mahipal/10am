#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right){
    if(left >= right) return;
    
    int pivot = arr[right];
    int i = left;

    for(int j=left; j<right; j++){
        if(arr[j] < pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[right], arr[i]);
    quickSort(arr, left, i-1);
    quickSort(arr, i+1, right);
}

int main(){
    int arr[] = {85, 63, 24, 2, 96, 50, 46};
    int length = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, length-1);

    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
}