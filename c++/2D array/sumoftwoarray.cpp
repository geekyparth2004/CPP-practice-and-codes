#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int a[n][n];
    int b[n][n];
    int c[n][n];
    int i, j;

    cout << "Enter the values in the array: ";

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

     for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

     for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
             c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout<<c[i][j]<<" "; 
        }
    }

}