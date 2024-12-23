#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i = 0; i < n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int arr[8] = {2,4,6,8,10,12,14,16};
    int len = sizeof(arr)/sizeof(int);

    cout<<linearSearch(arr,len,20);
    return 0;
}
