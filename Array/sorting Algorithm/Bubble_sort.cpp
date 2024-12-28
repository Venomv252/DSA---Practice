#include <iostream>
using namespace std;


void Print(int arr[], int n){
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubblesort(int arr[], int  n){

    for(int i= 0; i< n - 1; i++){
        for(int j = 0; j < n- i- 1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    Print(arr,n);


}

int main(){
    int arr[5] = {5, 1, 2, 4, 3};

    int n  = sizeof(arr)/sizeof(int);


    bubblesort(arr,n);
}
