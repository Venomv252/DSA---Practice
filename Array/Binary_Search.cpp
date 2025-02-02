#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n - 1;
    

    while(start <=end){
        int mid = (start + end)/2;
        if(arr[mid] == key ){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;

        }else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    
    int arr[8] = {2,4,6,8,10,12,14,16};
    int len = sizeof(arr)/sizeof(int);

    cout<<BinarySearch(arr,len,20);
    return 0;
}
