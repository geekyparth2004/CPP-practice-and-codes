#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter the rows: ";
    cin >> m;

    cout << "Enter the columns: ";
    cin >> n;

    int arr[m][n];

    cout << "Enter the values of arrays:";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j <= n - 1; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}