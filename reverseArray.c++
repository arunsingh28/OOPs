#include<iostream>
using namespace std;

int main(){
    int size,i;
    cout << "Enter size of array:";
    cin >> size;
    int arr[size];
    for (i = 0; i < size;i++){
        cout << "Enter array value:";
        cin >> arr[i];
    };
    cout << "Intial Array is: ";
    for (i = 0; i < size;i++){
        cout << arr[i];
    };
    cout <<endl <<"Reverse Array is: ";
    for (i = size - 1; i >= 0;i--){
        cout << arr[i];
    };
        return 0;
}