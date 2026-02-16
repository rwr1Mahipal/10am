#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, -50, 30, -100, 50};
    int neg=0, pos=0;
    int posVal[5];
    int j=0;

    for (int i = 0; i < 5; i++){
        if (arr[i] > 0){
            pos++;
            posVal[j]=arr[i];
            j++;
        }
        else if (arr[i] < 0){
            neg++;
        }
    };

    cout<<"Pos Value: ";
    for(int i=0; i<j; i++){
        cout<<posVal[i]<<" ";
    };
    cout<<endl;
    cout << "Positve: " << pos << endl;
    cout << "Negitive: " << neg << endl;
}