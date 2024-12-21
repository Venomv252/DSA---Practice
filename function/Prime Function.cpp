#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i = 2; i <= sqrt(n);i++){
        if(n % i == 0){
            return false;

        }
        
        return true;
    }
}


int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool a = isPrime(n);
    if(a){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is not a Prime Number";
    }
    return 0;
}
