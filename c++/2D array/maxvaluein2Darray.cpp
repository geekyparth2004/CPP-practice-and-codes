#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int a[n][n];
    int i, j;

    cout << "Enter the values in the array: ";

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int max = a[0][0];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
            }
        }
    }

    cout << "Maximum value in the array is: " << max;

    return 0;
}
