#include <iostream>
using namespace std;
void Kadane(int arr[], int n)
{
    int Maxsum = INT8_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        Maxsum = max(Maxsum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << Maxsum << endl;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int len = sizeof(arr) / sizeof(int);

    Kadane(arr, len);
    return 0;
}
