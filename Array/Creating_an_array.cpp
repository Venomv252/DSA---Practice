#include <iostream>
using namespace std;

int main(){
    //1st way

    int marks[50];

    cout<<marks[0]<<endl; //garbage values
    cout<<marks[1]<<endl; //garbage values
    cout<<marks[2]<<endl; //garbage values
    cout<<marks[3]<<endl; //garbage values


    //2nd way 

    int marks1[50] = {1,2,3};
    cout<<marks1[0]<<endl; //1
    cout<<marks1[1]<<endl; //2
    cout<<marks1[2]<<endl; //3
    cout<<marks1[3]<<endl; //0

    //3rd way

    int marks2[] = {1,2,3};
    cout<<marks2[0]<<endl; //1
    cout<<marks2[1]<<endl; //2
    cout<<marks2[2]<<endl; //3
    cout<<marks2[3]<<endl; //garbage value with warning
    
}
