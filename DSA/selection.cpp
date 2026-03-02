#include <iostream>
using namespace std;

class Sort{
    public:
    void selsctionSort(int arr[], int size){
        for (int i = 0; i < size; i++){
            int minIndex = i;
            for (int j = i + 1; j < size; j++){
                if (arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
            swap(arr[i], arr[minIndex]);
        }
    }
};

int main(){
    Sort s;
    int arr[] = {85, 63, 24, 2, 96, 50, 46};
    int length = sizeof(arr) / sizeof(arr[0]);

    s.selsctionSort(arr, length);

    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
}