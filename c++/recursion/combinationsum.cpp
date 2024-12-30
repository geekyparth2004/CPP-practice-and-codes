#include<iostream>
#include<vector>
using namespace std;

void combination(vector<int> v, int arr[], int n, int target) {
    if (target == 0) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    if (target < 0 || n == 0) return; 

    // Not pick
    combination(v, arr, n - 1, target);

    // Pick
    v.push_back(arr[n - 1]);  
    combination(v, arr, n, target - arr[n - 1]);
    v.pop_back();
}

int main() {
    int arr[] = {2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;

    combination(v, arr, n, 8);

    return 0;
}
