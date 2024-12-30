#include <iostream>
#include <vector>
using namespace std;

void display(const vector<vector<int>>& c) {
    for (size_t i = 0; i < c.size(); i++) {
        for (size_t j = 0; j < c[i].size(); j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++) {
        v[i].resize(i + 1);
        v[i][0] = v[i][i] = 1;

        for (int j = 1; j < i; j++) {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }

    display(v);
    return 0;
}