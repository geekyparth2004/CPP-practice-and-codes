#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of n: ";
    cin >> n;

    int a[n]; 

    cout << "Enter the values of a[n]: ";
    for(int s = 0; s < n; s++)
    {
        cin >> a[s];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    cout << "Sorted array: ";
    for(int l = 0; l < n; l++)
    {
        cout << a[l] << " ";
    }

    return 0;
}
