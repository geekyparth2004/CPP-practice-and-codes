#include<iostream>
using namespace std;

int main() {
    int n1, n2, i, hcf = 1;

    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    for (i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }

    cout << "HCF/GCD of " << n1 << " and " << n2 << " is: " << hcf << endl;
    return 0;
}

