#include <iostream>
using namespace std;

int main()
{
    // int value = 5;

    // for (int i = 1; i <= 10; i++){
    //     cout << value << " * " << i << " = " << value * i << endl;
    // }

    int arr[5]={10,50,45,35,20};
    int size = 5;
    int value = 2;
    int closest=arr[0];

    for(int i=0; i<size; i++){
        int diffreance = arr[i] - value; 

        if(diffreance < 0){
            diffreance = -diffreance; 
        }

        int closestDif = closest - value;
        if(closestDif < 0){
            closestDif = -closestDif;
        }

        if(diffreance < closestDif){
            closest=arr[i];
        }

    }
    cout<<"Closest value: "<<closest;
}