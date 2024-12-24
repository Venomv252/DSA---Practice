#include <iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i = 0; i  < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    int arr[8] = {2,4,6,8,10,12,14,16};
    int len = sizeof(arr)/sizeof(int);

    int start = 0;
    int end = len - 1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
   
    PrintArr(arr,len);


    return 0;
}
