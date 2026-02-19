#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 10, 20, 40, 50, 40, 60, 70};
    int lenght = 10;

    cout << "Original Arr: ";
    for (int i = 0; i < lenght; i++)
    {
        cout << arr[i] << " ";
    }

    // Arr swap
    for(int i=0; i<lenght/2; i++){
        int temp= arr[i];
        arr[i]=arr[lenght-i-1];
        arr[lenght-i-1]=temp;
    }
    
    // remove duplicate element in the arr
    for (int i = 0; i < lenght; i++){
        for (int j = i + 1; j < lenght;){
            if (arr[i] == arr[j]){
                for (int k = j; k < lenght; k++){
                    arr[k] = arr[k + 1];
                }
                lenght--;
            }
            else{
                j++;
            }
        }
    }

    cout << "\nChange Arr: ";
    for (int i = 0; i < lenght; i++)
    {
        cout << arr[i] << " ";
    }
}