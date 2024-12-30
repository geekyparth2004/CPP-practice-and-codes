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

    int count = a[0][0];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            
            count = count + a[i][j];
        }
    }
    
    cout<<"Sum of the numbers are "<<count;












}