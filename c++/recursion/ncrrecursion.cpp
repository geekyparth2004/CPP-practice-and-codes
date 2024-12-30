#include <iostream>
using namespace std;

int nCr(int n, int r) {
    // Base cases
    if (r == 0 || r == n)
        return 1;
    // Recursive relation: nCr = (n-1)Cr + (n-1)C(r-1)
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
    int n, r;
    cout << "Enter values of n and r: ";
    cin >> n >> r;

    cout << "Value of " << n << "C" << r << " is: " << nCr(n, r) << endl;

    return 0;
}
