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

    int copyarr[len];

    for(int i = 0; i  < len; i++){
        copyarr[i]=arr[len - i - 1];
    }

    PrintArr(copyarr,len);


    return 0;
}
