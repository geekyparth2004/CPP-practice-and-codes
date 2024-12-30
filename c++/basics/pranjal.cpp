#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(const vector<int>& c) {
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, p;
    cout << "Enter the value of n and p: ";
    cin >> n >> p;

    vector<int> a(n), b(n + p);

    cout << "Enter the elements in a array: ";
    for (int f = 0; f < n; f++) {
        cin >> a[f];
    }

    cout << "Enter the elements in B array: ";
    for (int s = 0; s < p; s++) {
        cin >> b[s];
    }

    // Copy elements from a to b
    for (int i = 0; i < n; i++) {
        b[p + i] = a[i];
    }

    // Sorting
    sort(b.begin(), b.end());

    display(b);

    return 0;
}