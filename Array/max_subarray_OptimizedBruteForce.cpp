#include <iostream>
using namespace std;
void MaxSubarray(int arr[], int n)
{


int Maxsum = INT8_MIN; 

    for (int start = 0; start < n; start++)
    {
        int currsum = 0; 
        for (int end = start; end < n; end++)
        {        
           currsum += arr[end];
           Maxsum = max(Maxsum,currsum);
        }
    }
        cout << Maxsum<<endl;
}
int main()
{
    int arr[6] = {2,-3, 6,-5,4, 2};
    int len = sizeof(arr) / sizeof(int);

    MaxSubarray(arr, len);

    return 0;
}
