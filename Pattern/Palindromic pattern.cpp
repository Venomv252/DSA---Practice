#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        } 
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        for (int j = 2; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            if (j > i)
            {
                cout << " ";
            }
            else
            {
                cout << j;
            }
        }
        for(int j = 2; j <= i;j++){
            cout<<j;
        }
            cout<<endl;
    }
}
