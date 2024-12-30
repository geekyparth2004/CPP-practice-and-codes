#include<iostream>
#include<vector>
using namespace std;

int main() {
    int target;
    cout << "enter your target: ";
    cin >> target;
    cout << endl;

    vector<int> v;
    int n;
    cout << "enter the size of vector: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int idx = -1;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] == target) {
            idx = i;
            break;  // Once the target is found, break out of the loop.
        }
    }

    cout << idx << endl;  // Print the index of the last occurrence or -1 if not found.
}